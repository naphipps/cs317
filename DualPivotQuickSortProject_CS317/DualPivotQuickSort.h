/*
*	Author: Nathan Phipps
*	Date: 10/1/2014
*/

#ifndef _DUAL_PIVOT_QUICK_SORT_
#define _DUAL_PIVOT_QUICK_SORT_

#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

class DualPivotQuickSort{

private:

public:

    DualPivotQuickSort();
    ~DualPivotQuickSort();

    void sort(vector<int> &);

private:

    void _prepSort();
    void _sort(vector<int> &, int, int);
    
};

#endif //_DUAL_PIVOT_QUICK_SORT_