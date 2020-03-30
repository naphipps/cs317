/*
*	Author: Nathan Phipps
*	Date: 10/1/2014
*/

#ifndef _DUAL_PIVOT_QUICK_SORT_
#define _DUAL_PIVOT_QUICK_SORT_

#include <iostream>
#include <vector>

using namespace std;

class DualPivotQuickSort
{
private:

	void _prepSort();
    void _sort(vector<int>& values, int left, int right);

public:

    DualPivotQuickSort();
    ~DualPivotQuickSort();

    void sort(vector<int>& values);
};

#endif //_DUAL_PIVOT_QUICK_SORT_