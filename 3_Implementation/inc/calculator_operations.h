/** 
* @file calculator_operations.h
* Calculator application with 3 modes of operations
*
*/
#ifndef __CALCULATOR_MODES_OF_OPERATIONS_H__
#define __CALCULATOR_MODES_OF_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int add(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int subtract(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply(int operand1, int operand2);

/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide(int operand1, int operand2);

/**
* finds simple interest by formula and returns the result
* @param[in] principal_amount 
* @param[in] time_of_period 
* @param[in] rate_of_interest
* @return float value of the (principal_amount*time_of_period*rate_of_interest)/100
*/
float simple_interest(int principal_amount, int time_of_period, int rate_of_interest);

/**
* finds compound interest by formula and returns the result
* @param[in] principal_amount 
* @param[in] time_of_period 
* @param[in] rate_of_interest
* @param[in] no_of_applied_interst
* @return float value of the principal_amount*(1+(rate_of_interest/no_of_applied_interest))^time_of_period*no_of_applied_interest
*/

float compound_interest(int principal_amount, int time_of_period, int rate_of_interest, int no_of_applied_interest);

/**
* finds total amount by formula and returns the result
* @param[in] principal_amount 
* @param[in] interest_amount 
* @return integer value of the principal_amount+interest_amount
*/
int total_amount(int principal_amount, int interest_amount);

/**
*  finds the factorial of operand1 and returns the result
* @param[in] operand1  
* @return Result of operand1!
*/
int fact(int operand1);

/**
*  finds the operand1 to the power of operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1^operand2
*/
int power(int operand1, int operand2);

/**
*  finds the log of of operand1 to the base 10 and returns the result
* @param[in] operand1  
* @return Result of log(operand1)
*/
double logarithm(int operand1);

/**
*  finds the exponential to the power of operand1 and returns the result
* @param[in] operand1  
* @return Result of e^operand1
*/
double exponential(int operand1);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */