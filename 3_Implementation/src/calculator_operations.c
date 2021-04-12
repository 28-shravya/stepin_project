#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

float simple_interest(int principal_amount, int time_of_period, int rate_of_interest){
    return (principal_amount*time_of_period*rate_of_interest)/100;
}

float compound_interest(int principal_amount, int time_of_period, int rate_of_interest, int no_of_applied_interest)
{
    return principal_amount*((1+(rate_of_interest/no_of_applied_interest))^(time_of_period*no_of_applied_interest));
}

int total_amount(int principal_amount, int interest_amount){
    return principal_amount+interest_amount;
}

int fact(int operand1){
    int i,f=1;
    if (operand1<1)
    {
        return 1;
    }
    for(i=1;i<=operand1;i++){
    f=f*i;
    }
    return f;
}

int power(int operand1, int operand2){
    return pow(operand1,operand2);
}

double logarithm(int operand1){
    return log10(operand1);
}

double exponential(int operand1){
    return exp(operand1);
}