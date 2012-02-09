/*
 * MergeSorter.cpp
 *
 *  Created on: Oct 22, 2011
 *      Author: haddaway
 */

#include "MergeSorter.h"
#include "StandardIncludes.h"

MergeSorter::MergeSorter(int *array, int size) : data(array), size(size)
{
	//Used to initialize Variables
}

void MergeSorter::sort()
{
	//The top merge sort
	mergeSort(0, size-1);
}

void MergeSorter::displayContents()
{
	cout << "Contents: ";
	for(int index = 0; index < size; index++)
	{
		cout << data[index] << " ";
	}
	cout << endl;
}

MergeSorter::~MergeSorter()
{
	delete[] data;
}

void MergeSorter::mergeSort(int lowerNumber, int higherNumber)
{
	//This recursively calls mergeSort for every item in the array
	int middleNumber;
	if(lowerNumber < higherNumber)
	{
		middleNumber = (lowerNumber + higherNumber) / 2;
		mergeSort(lowerNumber, middleNumber);
		mergeSort(middleNumber + 1, higherNumber);
		merge(lowerNumber, middleNumber, higherNumber);
	}
}



void MergeSorter::merge(int lower, int middle, int higher)
{
	int outerIndex = lower;
	int middleIndex = lower;
	int topIndex = middle + 1;
	int temporaryArray[size];

	//Iterate through elements
	while((outerIndex <= middle) && (topIndex <= higher))
	{
		//If this item is less than or equal to
		if(data[outerIndex] <= data[topIndex])
		{
			temporaryArray[middleIndex] = data[outerIndex];
			outerIndex++;
		}
		else
		{
			temporaryArray[middleIndex] = data[topIndex];
			topIndex++;
		}
		middleIndex++;
	}
	if(outerIndex > middle)
	{
		for(int index = topIndex; index <= higher; index++)
		{
			temporaryArray[middleIndex] = data[index];
			middleIndex++;
		}
	}
	else
	{
		for(int index = outerIndex; index <= middle; index++)
		{
			temporaryArray[middleIndex] = data[index];
			middleIndex++;
		}
	}
	//Fill the original array with the items that should be in order in temporaryArray
	for(int index = lower; index <= higher; index++)
	{
		data[index] = temporaryArray[index];
	}
}



