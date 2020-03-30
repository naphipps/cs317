/*
*	Author: Nathan Phipps
*	Date: 10/1/2014
*/

#include "DualPivotQuickSortTester.h"

using namespace std;

DualPivotQuickSortTester::DualPivotQuickSortTester()
{
	this->input_file = "input.txt";
}

DualPivotQuickSortTester::~DualPivotQuickSortTester()
{}

int DualPivotQuickSortTester::run()
{
    //set return value to a successful value
    int return_value = 0;

    cout<<"Dual Pivot Quick Sort Tester is running...\n\n"
        <<"Reading file: "<<this->input_file<<" ... ";
    
    //read input file
    ifstream ifile;
    ifile.open(input_file.c_str());

    int holder = 0;
    ifile>>holder;
    
    while(!ifile.eof())
    {    
        this->values.push_back(holder);
        ifile>>holder;   
    }
    
    ifile.close();
    
    //print values retrieved from file
    cout<<"done.\n\nRead "<<this->values.size()<<" values: \n";
    
    for (int i=0; i<this->values.size(); i++)
    {
        cout<<this->values[i]<<" ";
    }
    
    //sort
    cout<<"\n\nSorting "<<this->values.size()<<" values ... ";
    
    DualPivotQuickSort dual_pivot_quick_sorter;
    dual_pivot_quick_sorter.sort(this->values);
    
    //print results of sorting
    cout<<"done.\n\nSorted "<<this->values.size()<<" values: \n";
    
    for (int i=0; i<this->values.size(); i++)
    {
        cout<<this->values[i]<<" ";
    }

    cout<<"\n\n";
    
    //this would be where we would check if our sorting was successful
        //set return value to failure value if sorting failed
        //set return value to successful value if sorting was successful
    return return_value;
}