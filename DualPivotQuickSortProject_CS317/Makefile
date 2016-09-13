#Makefile
#------------------------------------
#
# Author: Nathan Phipps
#
#------------------------------------
GCC = g++
OBJS = main.o DualPivotQuickSortTester.o DualPivotQuickSort.o
CFLAGS = -Wall -O2
#------------------------------------
quicksort: $(OBJS)
	$(GCC) $(OBJS) -o $@
%.o: %.cpp
	$(GCC) $(CFLAGS) -c $<
clean:
	rm -f *.o quicksort
refresh:
	rm -f *.o
#------------------------------------
.PHONY: clean refresh
#------------------------------------
