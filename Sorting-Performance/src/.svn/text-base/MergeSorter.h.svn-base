/*
 * MergeSorter.h
 *
 *  Created on: Oct 22, 2011
 *      Author: haddaway
 */

#ifndef MERGESORTER_H_
#define MERGESORTER_H_

class MergeSorter
{
public:
	MergeSorter(int* array, int size);
	void sort();
	void displayContents();
	virtual ~MergeSorter();
private:
	void mergeSort(int lower, int higher);
	void merge(int lower, int middle, int higher);
	unsigned int size;
	int* data;
};

#endif /* MERGESORTER_H_ */
