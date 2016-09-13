/*
*	Author: Nathan Phipps
*	Date: 10/1/2014
*/

#include "DualPivotQuickSort.h"

using namespace std;

DualPivotQuickSort::DualPivotQuickSort(){

}

DualPivotQuickSort::~DualPivotQuickSort(){

}

void DualPivotQuickSort::sort(vector<int> &values){
    
    srand((unsigned)time(0));
    
    _sort(values, 0, values.size()-1);
    
}

void DualPivotQuickSort::_sort(vector<int> &values, int left, int right){

    if (right <= left) {
        return;
    }

    int left_pivot=left, right_pivot=right;
    
    if ((right-left) > 3){
        
        do {
            
            left_pivot = (rand()%(right-left-2))+(left+1);
            right_pivot = (rand()%(right-left-2))+(left+1);
            
        }  while (left_pivot == right_pivot);
        
    }
    
    swap (values[left], values[left_pivot]);
    swap (values[right], values[right_pivot]);
    
    if (values[left] > values[right]){
        
        swap (values[left], values[right]);
        
    }
    
    int S2L = left+1, G2R = right-1;

    for (int i=S2L ; i<=G2R ;){

        if (values[i] < values[left]){
			
            swap (values[i], values[S2L]);		
            S2L++;
            i++;
		
        }
        else if (values[i] > values[right]){
			
            swap (values[i], values[G2R]);
            G2R--;

        }
        else {
            i++;
        }

    }

    swap (values[left], values[S2L-1]);
    swap (values[right], values[G2R+1]);

    _sort(values, left, S2L-2);
    _sort(values, S2L, G2R);
    _sort(values, G2R+2, right);

}
