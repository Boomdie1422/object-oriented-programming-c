/***
* CSE 2010 Fall 2023
* Lab #{2}
* {dan nguyen} {007736788}
* {Date}
*
* {doing fuctions and calling the fuctions into the int main}
*
* the most challenging part of this lab was calling the stings into the print fuctions.
* i plan to solve it by trying to figure it out how to get the strings to work by looking at the example and doing it by parts.
* the directions of how you PLAN to solve it}
*
***/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
/**
* @brief power(): calculates and returns the base to the power of exponent
*
* @param base int: base number that is positive
* @param exponent int: exponent that is positive that the base is raised to
* @return int
*/
// write power function here
int power(int base, int exponent)
{
int power_output = 1;
for(int i = 0; i < exponent; i++){
power_output *= base;
}
return power_output;
}
/**
* @brief floorDivision(): calculates and returns the dividend / divisor using for
loops
*
* @param dividend int: whole number to be dividend that is positive
* @param divisor int: whole number that is positive to divide the dividend by
* @return int
*/
// write floorDivision function here
int floordivision(int dividend, int divisor){
    int floor_div_output = 0;
while (dividend - divisor >= 0) {
dividend -= divisor; // dividend = dividend - divisor;
floor_div_output += 1;
}
return floor_div_output;
}
/**
* @brief modDivision(): returns the remainder from dividend / divisor
*
* @param dividend int: whole number to be dividend that is positive
* @param divisor int: whole number that is positive to divide the dividend by
* @return int
*/
// write modDivision function here
int Mod(int dividend, int divisor){
    int mod_output = dividend;
while (mod_output - divisor >= 0) {
mod_output -= divisor; // dividend = dividend - divisor;
}
return mod_output;
}
/**
* @brief print(): prints out the statement "Output of {operation} between {x}
* and {y} is {output}"
*
* @param operation string: which should be any of the following: power,
floorDivision,
* modDivision
* @param x int: first variable that is positive
* @param y int: second variable that is positive
* @param output int: output from conducting the operaiton
*/
// write print function here
int output;
void print(string operation, int x, int y, int output){
cout << "Output of " << operation << " between " << x << " and " << 
y << " is : " << output << endl;
}
/**
* @brief op(): returns the name of the operation based on the following cases:
* 1 : power
* 2 : floorDivision
* 3 : modDivision
* All other cases: invalid
* This function supplies the operation to print()
* @param selection int: ranging from 1 to 3 that specifies the operation. All
other cases results
* in "invalid"
* @return string
*/
string operation(int selection){
    if (selection == 1){
        return "power";
    }
    else if (selection == 2){
        return "floorDivision";
    }
    else if (selection == 3){
        return "modDivision";
    
    }
    else {
        return "invalid";
    }
}

// write op function here
int main()
{
    int x = 5;
    int y = 3;
    int base = x;
    int exponent = y;
// test input for power
int power_output = pow(base,exponent);
//print
string operation = operation(1);
print(operation, x, y, output);

// test input for floor and modulos
x = 65;
y = 11;
// floor division
int dividend = x;
int divisor = y;
int floor_div_output = floordivision(dividend, divisor);

//print
string operation = operation(2);
print(operation, x, y, output);
// reset test input for modulos division
// for Section 5.2 where pass by reference is use, do NOT reset
// divend and divisor to x and y in order to get the example
dividend = x;
divisor = y;
// modulos division
int mod_output = Mod(dividend, divisor);
//print
string operation = operation(3);
print(operation, x, y, output);
return 0;
}
