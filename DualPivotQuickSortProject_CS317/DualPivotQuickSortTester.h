/*
*	Author: Nathan Phipps
*	Date: 10/1/2014
*/

#ifndef _DUAL_PIVOT_QUICK_SORT_TESTER_
#define _DUAL_PIVOT_QUICK_SORT_TESTER_

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "DualPivotQuickSort.h"

using namespace std;

class DualPivotQuickSortTester 
{
private:

    vector<int> values;
    string input_file;

public:

    DualPivotQuickSortTester();
    ~DualPivotQuickSortTester();
    
    int run();
};

#endif //_DUAL_PIVOT_QUICK_SORT_TESTER_