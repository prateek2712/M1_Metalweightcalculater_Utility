/**
 * @file code.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>  // existing library 
//#include "stdio.h" // Only for user header files

struct complex_number{
    int real;
    int imaginary;
};

/**
 * @brief Adds two complex numbers
 * 
 * @param in_operand1 Operand1 for addition
 * @param in_operand2 Operand2 for addition
 * @return struct complex_number Result of addition
 */
struct complex_number complex_add(struct complex_number in_operand1, struct complex_number in_operand2)
{
    struct complex_number temp;
    temp.real = in_operand1.real + in_operand2.real;
    temp.imaginary = in_operand1.imaginary + in_operand2.imaginary;

    return temp;
}

int main()
{
    int number11 , number12;
    printf("Enter two numbers");
    scanf("%d %d", &number11, &number12);

    struct complex_number cn1 = {number11, number12};

    int number21 , number22;
    printf("Enter two numbers %d");
    scanf("%d %d", &number21, &number22);

    struct complex_number cn2 = {number21, number22};
    struct complex_number result = complex_add(cn1, cn2);

    printf("Sum of 2 complex number is = %d + i %d",result.real, result.imaginary);

  return 0;  
}