/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.1
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.java.helics;

/**
 * enumeration of the different iteration results
 */
public final class helics_iteration_request {
  /**
   *  no iteration is requested 
   */
  public final static helics_iteration_request helics_iteration_request_no_iteration = new helics_iteration_request("helics_iteration_request_no_iteration", helicsJNI.helics_iteration_request_no_iteration_get());
  /**
   *  force iteration return when able 
   */
  public final static helics_iteration_request helics_iteration_request_force_iteration = new helics_iteration_request("helics_iteration_request_force_iteration", helicsJNI.helics_iteration_request_force_iteration_get());
  /**
   *  only return an iteration if necessary 
   */
  public final static helics_iteration_request helics_iteration_request_iterate_if_needed = new helics_iteration_request("helics_iteration_request_iterate_if_needed", helicsJNI.helics_iteration_request_iterate_if_needed_get());

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static helics_iteration_request swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + helics_iteration_request.class + " with value " + swigValue);
  }

  private helics_iteration_request(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private helics_iteration_request(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private helics_iteration_request(String swigName, helics_iteration_request swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static helics_iteration_request[] swigValues = { helics_iteration_request_no_iteration, helics_iteration_request_force_iteration, helics_iteration_request_iterate_if_needed };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

