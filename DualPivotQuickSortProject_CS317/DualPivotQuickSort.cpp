/*
*	Author: Nathan Phipps
*	Date: 10/1/2014
*/

#include "DualPivotQuickSort.h"

using namespace std;

DualPivotQuickSort::DualPivotQuickSort()
{}

DualPivotQuickSort::~DualPivotQuickSort()
{}

void DualPivotQuickSort::sort(vector<int>& values)
{
    _sort(values, 0, values.size() - 1);
}

void DualPivotQuickSort::_sort(vector<int>& values, int left, int right)
{
    //if our right index is <= left, then we want to return because:
        //we won't be able to sort values from [left, right]
    //ideally, we'd wrap all the content below inside a (left<right) check
        //so that we do not have this return up here
    if (right <= left)
    {
        return;
    }

    //setup our left and right pivots
    int left_pivot=left, right_pivot=right;
    
    //if we have more than three items to sort, then choose random pivots
    if ((right-left) > 3)
    {
        do
        {
            //choose random pivots
            left_pivot = (rand() % (right - left - 2)) + (left + 1);
            right_pivot = (rand() % (right - left - 2)) + (left + 1);
        } 
        while (left_pivot == right_pivot);
    }
    
    //our pivot values are not at left and right
    swap(values[left], values[left_pivot]);
    swap(values[right], values[right_pivot]);
    
    //ensure our left pivot value <= right pivot value
    if (values[left] > values[right])
    {
        swap(values[left], values[right]);
    }
    
    //values < left pivot will go to the left of left pivot
        //hence, "smaller to left" aka "S2L"
    int S2L = left + 1;
    //values > right pivot will go to the right of right pivot
        //hence, "greater to right" aka "G2R"
    int G2R = right - 1;

    //dual pivot sorting logic
    for (int i = S2L; i <= G2R;) //do NOT i++ here
    {
        //check left pivot first
        if (values[i] < values[left])
        {
            swap(values[i], values[S2L]);		
            S2L++;
            i++;
        }
        //check right pivot
        else if (values[i] > values[right])
        {	
            swap(values[i], values[G2R]);
            G2R--;
        }
        //else, value[i] == right and left pivots, so continue
        else
        {
            i++;
        }

        //note that i either increments or G2R decrements
            //thus, this loop will terminate
    }

    //place pivots where they should go
    swap(values[left], values[S2L - 1]);
    swap(values[right], values[G2R + 1]);

    //we just divided values into three sections, so we
        //need to sort those three sections as defined below
    _sort(values, left, S2L - 2);
    _sort(values, S2L, G2R);
    _sort(values, G2R + 2, right);
}
