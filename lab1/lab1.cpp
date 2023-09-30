/***
* CSE 2010 Fall 2023
* Lab #1
* Dan Nguyen 007736788
* 9/13/23
*
* This labs teaches the basics of coding as well as showing the ins and out of math in coding and the functions
*
* 1) the most challenging part of this code was trying to figure out the instance of using the selecion to have it be able to be chosen for the user as well as trying to compile this onto the CSUSB coding software
* 2) i solved the selection by using the given example and testing what each part of it does and figuring out the brackets and definite if else or else or if statements. to solve the CSUSB compile is i would use a linux computer to check this code by copying this code onto the linux computer and solve it there and if i cant then i have to change the password of my account to be able to use it directly from home
* 
*
***/
#include <cmath>
// math code 
#include <iostream>
using namespace std;
// main() takes in no arguments and performs the arithmetic operations based on user selection
// returns 0 when the program terminates without errors.
// otherwise it returns the number where an invalid selection was made
int main() {
cout << "Select a number from 1-6.\n \
1) sqrt(x)\n \
2) pow(x,y)\n \
3) ceil(x/y)\n \
4) floor(x/y)\n \
5) x/y\n \
6) x%y\n";
// instantiate your variables, x and y as int of value 0
// make modifications from int to doubles for section 5.2 here
double x = 0;
double y = 0;
// forcing x and y to be double to show the difference of double and ints as well as show the usage of ceil and floor func correctly
int user_selection = 0;
cin >> user_selection;
if (cin.fail()) {
cerr << "Invalid\n";
return -1;
cout << "You selected " << user_selection << endl;
}
if (user_selection == 1){
cout << "Requesting x\n";
cin >> x;
if (cin.fail()){
cerr << "Invalid\n";
return 1;
}
cout << "sqrt(" << x << ") is " << sqrt(x) << endl;
}
else if (user_selection == 2){
cout << "Requesting x\n";
cin >> x;
cout << "Requesting y\n";
cin >> y;
if (cin.fail()){
cerr << "Invalid\n";
return 2;
}
cout << "power of " << x << " to " << y << " is " << pow(x,y) << endl;
// the power functions of x to the power of y which is x^y
}   
else if (user_selection == 3){
cout << "Requesting x\n";
cin >> x;
cout << "Requesting y\n";
cin >> y;
if (cin.fail()){
cerr << "Invalid\n";
return 3;
}
cout << "The ceiling of " << x << " / " << y << " is " << ceil(x/y) << endl;
//when a number goes through a ceiling function it gets the out put of the functions and make it into an integer (rounded up)
   
}
else if (user_selection == 4){
cout << "Requesting x\n";
cin >> x;
cout << "Requesting y\n";
cin >> y;
if (cin.fail()){
cerr << "Invalid\n";
return 4;
//when a number goes through a ceiling function it gets the out put of the functions and make it into an integer (rounded down)
    
}
cout << "The floor of " << x << " / " << y << " is " << floor(x/y) << endl;
}
else if (user_selection == 5){
cout << "Requesting x\n";
cin >> x;
cout << "Requesting y\n";
cin >> y;
if (cin.fail()){
cerr << "Invalid\n";
return 5;
}
cout << "The number " << x << " / " << y << " is " << x/y << endl;
// this number gets divided and shown as their answer without the usage of rounding from floor and ceiling.

}
else if (user_selection == 6){
cout << "Requesting x\n";
// the reason we created distinct x and y variables (mod_x, mod_y)
// is because '%' only expects int and never doubles.
int mod_x = 0.0;
int mod_y = 0;
cin >> mod_x;
if (cin.fail()){
cerr << "Invalid\n";
return 6;
}
cout << "Requesting y\n";
cin >> mod_y;
if (cin.fail()){
cerr << "Invalid\n";
return 6;
}
cout << mod_x << " / " << mod_y << " is " << mod_x%mod_y << endl;
}

else {
printf("Invalid selection\n");
}
return 0;
}
