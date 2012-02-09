/*
 * InsertionSorter.cpp
 *
 *  Created on: Oct 22, 2011
 *      Author: haddaway
 */

#include "InsertionSorter.h"
#include "StandardIncludes.h"

InsertionSorter::InsertionSorter(int* array, int size) : data(array), size(size)
{
	//Used to initialize variables
}

InsertionSorter::~InsertionSorter()
{
	delete[] data;
}

void InsertionSorter::sort()
{
	for (int index = 1; index < size; index++)
	{
		int currentData = data[index];
		int count = index - 1;
		while(data[count] > currentData && count >= 0)
		{
			data[count +1] = data[count];
			count--;
		}
		data[count+1] = currentData;
	}
}

void InsertionSorter::displayContents()
{
	cout << "Contents: ";
	for(int index = 0; index < size; index++)
	{
		cout << data[index] << " ";
	}
	cout << endl;
}
