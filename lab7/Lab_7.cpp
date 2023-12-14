//Lab_7.cpp





// Dan Nguyen 007736788
//12-13-2023
//lab 7



// This lab teaches the usage  of typename to have more option of numbers 
// being used in arrays as well as being able to save other number values for later usage

// Problems: some problems i have faced is when doing the typename, i did not figure out that not only am i replacing the integer for the display 
//but some have to be change in order to make the code work

// i fixed this by going over what went wrong and being able to deduced what was wrong and fixed it after many tries
#include <iostream>
#include "ArrayVec.h"
#include "DisplayArr.h"
using namespace std;
int main()
{
    // initialize arr
    const int CAPACITY = 10;
    double test_arr[CAPACITY];

    string data_type = "double";
    //initialize ArrayVec and DisplayArr
    DisplayArr<double> disp = DisplayArr<double>(data_type);
    ArrayVec<double> av = ArrayVec<double>();

    // populate with values
    int range = 15;
    int num_elem = 10;
    av.randGenArr(test_arr, num_elem, range);

    // display contents
    int test_arr_size = av.getSize(test_arr, CAPACITY);
    cout << "Array Elements\n";
    disp.printArray(test_arr, test_arr_size);
    cout << "Array Memsize\n";
    disp.printMetaArray(test_arr, test_arr_size);
}
