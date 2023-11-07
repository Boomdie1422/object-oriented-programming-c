/***
 * CSE 2010 Fall 2023
 * Lab #{4}
 * {dan nguyen} #{007736788}
 * {10/30/23}
 *
 * {the usage of arrays and vectors as well as defining each one to their defining roles in similarities/differences in order to understand the allocatetion of memory and their pointers/ 
 * ( just find the similar and difference of arrays and vector and using to help with data structures)}
 *
 * {Describe 1) the most challenging part was doing the display vec.cpp i ran inmto problems with linking v and manage to over came this by wipping it from the start and replace arr with v.
 *
***/

#include <iostream>
#include "ArrayVec.h"
#include "DisplayVec.h"
using namespace std;


int main()
{
    
    // initialize vector
    //vector<int> v;
    const int CAPACITY = 10;
    vector <int> test_vec(CAPACITY);

    //initialize ArrayVec and DisplayArr
    DisplayVec disp = DisplayVec();
    ArrayVec av = ArrayVec();

    // populate with values
    int range = 15;
    int num_elem = 10;
    av.randGenVec(test_vec, num_elem, range);

    // display contents
    int test_vector_size = test_vec.size();
    cout << "Vector Elements\n";
    disp.printVector(test_vec);
    cout << "Array Memsize\n";
    disp.printMetaVector(test_vec);
}

