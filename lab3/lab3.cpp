/***
* CSE 2010 Fall 2023
* Lab #{3}
* {dan nguyen} #{007736788}
* {10/13/2023}
*
* {this lab demonstrates the usage of using three different .cpp to be reference and to be call other .cpp}
*
* {Describe 1) the most challenging was the syntax of my work
  2) i solved this by using the error statement from the computer terminal and using that i solved each step one by a time till all is correct
*
***/

#include <iostream>
#include <string>
#include "person.h"

using namespace std;

/**
 * The structure of the files are as follows:
 * Lab_3_template.cpp -> calls the class and is considered the "main" program
 * Person.cpp -> implements and contains the functionalities of the class
 * Person.h -> contains the interface, declarations of the class, and  includes 
 * the private variables and member functions
 */

/**
 *  Following the examples below, create your own class objects that calls ALL
 *  the functions. 
 * 
 *  Initialize your objects of type Person.
 *  Use the mutator functions to modify the private variables of your Person.
 *  Display the variables associated with your Person using the accessor functions
 *  and cout or print.
 */

int main()
{
    Person bob = Person("Bob", 100, "retired", true);
    cout << bob.getName() << endl;
    Person unknown = Person(); //Person unknown; // 
    cout << unknown.getName() << endl;

    cout << "Test Age\n";
    cout << bob.getAge() << endl;
    bob.updateAge(101);
    cout << bob.getAge() << endl;

    cout << "test Occupation\n";
    cout << bob.getOccupation() << endl;
    bob.updateOccupation("consultant");
    cout << bob.getOccupation() << endl;

    cout << "test lives_in_IE\n";
    cout << bob.getLivesInIE() << endl;
    bob.movedLocation();
    cout << bob.getLivesInIE() << endl;
    bob.movedLocation();
    cout << bob.getLivesInIE() << endl;

    cout << "test older than\n";
    cout << bob.getName() << ':' << bob.getAge() << endl;
    unknown.updateAge(10);
    unknown.updateName("Dan");
    cout << unknown.getName() << ':' << unknown.getAge() << endl;
    if (bob.isOlderThan(unknown)){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}
