/*
 * Operations.cpp
 *
 *  Created on: Feb 8, 2018
 *      Author: jidnyesh
 */

#include "Operations.h"

void Operations::add(float x,float y)
{
num1=x;
num2=y;
c = num1 + num2;
cout<<"The addition of "<<num1<<" and "<<num2<<" is: "<<c<<endl;
}

void Operations::subtract(float x,float y)
{
num1=x;
num2=y;
c = num1 - num2;
cout<<"The subtraction of "<<num1<<" and "<<num2<<" is: "<<c<<endl;
}

void Operations::multiply(float x,float y)
{
num1=x;
num2=y;
c = num1 * num2;
cout<<"The multiplication of "<<num1<<" and "<<num2<<" is: "<<c<<endl;
}

void Operations::divide(float x,float y)
{
num1=x;
num2=y;
c = num1 / num2;
cout<<"The division of "<<num1<<" and "<<num2<<" is: "<<c<<endl;
}