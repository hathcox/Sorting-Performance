/*
 * HeapSorter.h
 *
 *  Created on: Oct 11, 2011
 *      Author: Hathcox
 */

#ifndef HEAPSORTER_H_
#define HEAPSORTER_H_

class HeapSorter {
public:
	HeapSorter(int* array, int arraySize);
	void displayData();
	void sort();
	virtual ~HeapSorter();

private:
	void heapify(unsigned int iterations);
	void swapElements(int& firstElement, int& secondElement);
	void decideOrder(int left, int right, unsigned int innerIndex, int rootElement);
	int* heapData;
	int heapSize;
};

#endif /* HEAPSORTER_H_ */
