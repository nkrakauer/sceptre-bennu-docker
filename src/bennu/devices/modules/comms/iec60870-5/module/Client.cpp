#include "Client.hpp"

#include <functional>

namespace bennu {
namespace comms {
namespace iec60870 {

using bennu::comms::RegDescComp;
using bennu::comms::RegisterDescriptor;
using boost::property_tree::ptree;
using boost::property_tree::ptree_bad_path;
using boost::property_tree::ptree_error;

Client::Client() :
    comms::CommsClient(),
    bennu::utility::DirectLoggable("iec60870-5-104-client")
{
}

Client::~Client()
{
    mTagsToConnection.clear();
}

void Client::addTagConnection(const std::string& tag, std::shared_ptr<ClientConnection> connection)
{
    mTagsToConnection[tag] = connection;
}

std::set<std::string> Client::getTags() const
{
    std::set<std::string> tags;
    for (auto iter = mTagsToConnection.begin(); iter != mTagsToConnection.end(); ++iter)
    {
        tags.insert(iter->first);
    }
    return tags;
}

bool Client::isValidTag(const std::string& tag) const
{
    return (mTagsToConnection.find(tag) != mTagsToConnection.end());
}

StatusMessage Client::readTag(const std::string& tag, comms::RegisterDescriptor& rd) const
{
    auto iter = mTagsToConnection.find(tag);
    if (iter != mTagsToConnection.end())
    {
        return iter->second->readRegisterByTag(tag, rd);
    }
    std::string msg = "readTag(): Unable to find tag -- " + tag;
    StatusMessage sm;
    sm.status = STATUS_FAIL;
    sm.message = msg.data();
    return sm;
}

StatusMessage Client::writeBinaryTag(const std::string& tag, bool status)
{
    auto iter = mTagsToConnection.find(tag);
    if (iter != mTagsToConnection.end())
    {
        return iter->second->writeBinary(tag, status);
    }
    std::string msg = "writeBinaryTag(): Unable to find tag -- " + tag;
    StatusMessage sm;
    sm.status = STATUS_FAIL;
    sm.message = msg.data();
    return sm;
}

StatusMessage Client::writeAnalogTag(const std::string& tag, double value)
{
    auto iter = mTagsToConnection.find(tag);
    if (iter != mTagsToConnection.end())
    {
        return iter->second->writeAnalog(tag, value);
    }
    std::string msg = "writeAnalogTag(): Unable to find tag -- " + tag;
    StatusMessage sm;
    sm.status = STATUS_FAIL;
    sm.message = msg.data();
    return sm;
}

} // namespace iec60870
} // namespace comms
} // namespace bennu
