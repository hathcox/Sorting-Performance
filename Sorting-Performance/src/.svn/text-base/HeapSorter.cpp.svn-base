/*
 * HeapSorter.cpp
 *
 *  Created on: Oct 11, 2011
 *      Author: Hathcox
 */

#include "HeapSorter.h"
#include "StandardIncludes.h"

HeapSorter::HeapSorter(int* array, int arraySize) : heapData(array), heapSize(arraySize) // Used for initializing data
{
}

HeapSorter::~HeapSorter() //Delete the array from memory
{
	delete[] heapData;
}


void HeapSorter::displayData() // Displays all elements inside HeapSorter.heapData
{
	cout<<"Current Array:";
	for(unsigned int index = 0; index < heapSize; index++)
	{
		cout<<" "<<heapData[index]<<" ";
	}
	cout<<endl;
}

void HeapSorter::sort() // This recursively calls heapify and passes in the current iteration
{
	for (int iterations = heapSize; iterations > 1; iterations--)
	{
		this->heapify(iterations - 1);
	}
}

void HeapSorter::decideOrder(int left, int right, unsigned int innerIndex, int iterations) // swaps elements based on the rules of heap sort
{
	int tempIndex;
	if((left <= iterations) && (right <= iterations)) // if the Right and Left elements are less than or equal to the rootElement
	{
		if(heapData[right] >= heapData[left])
			tempIndex = right;
		else
			tempIndex = left;
	}
	else
	{
		if (right > iterations)
			tempIndex = left;
		else
			tempIndex = right;
	}
	if(heapData[innerIndex] < heapData[tempIndex])
	{
		swapElements(heapData[innerIndex], heapData[tempIndex]);
	}
}

void HeapSorter::heapify(unsigned int iterations) //This is recursively called to sort the data inside of HeapSorter
{
	int rootElement = (iterations - 1) / 2; //Get the right Location
	for(int outerIndex = rootElement; outerIndex >= 0; outerIndex--) //First Loop
	{
		for(int innerIndex = rootElement; innerIndex >= 0; innerIndex--) //Second loop
		{
			int leftElement = (2 * innerIndex) +1;
			int rightElement = (2 * innerIndex) +2;
			decideOrder(leftElement, rightElement, innerIndex, iterations);
		}
	}
	swapElements(heapData[0], heapData[iterations]);
}

void HeapSorter::swapElements(int& firstElement, int& secondElement) //This swaps two given elements
{
	int temporary = firstElement;
	firstElement = secondElement;
	secondElement = temporary;
}

