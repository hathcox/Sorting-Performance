/*
 * SelectionSorter.cpp
 *
 *  Created on: Oct 22, 2011
 *      Author: haddaway
 */

#include "SelectionSorter.h"
#include "StandardIncludes.h"

SelectionSorter::SelectionSorter(int *array, int size) : data(array), size(size)
{
	//Used to initialize variables
}

void SelectionSorter::sort()
{
	for (int index = 0; index < size; index++)
	{
	    int temporary = index;

	    for (int innerIndex = index + 1; innerIndex < size; innerIndex++)
	    {
	        if (data[innerIndex] < data[temporary])
	            temporary = innerIndex;
	    }

	    swap(data[index], data[temporary]);
	}
}

void SelectionSorter::displayContents()
{
	cout << "Contents: ";
	for(int index = 0; index < size; index++)
	{
		cout << data[index] << " ";
	}
	cout << endl;
}

SelectionSorter::~SelectionSorter()
{
	delete[] data;
}

