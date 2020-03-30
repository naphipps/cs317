/*
*	Programming Assignment One
*	Author: Nathan Phipps
*	Date: 10/1/2014
*/

#include <time.h>
#include "DualPivotQuickSortTester.h"

using namespace std;

int main()
{
	//seed srand with current time
	srand((unsigned int)time(NULL));

    DualPivotQuickSortTester tester;
    tester.run();

    return 0;
}