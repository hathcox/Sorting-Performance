//============================================================================
// Name        : IXK.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "StandardIncludes.h"
#include "InsertionSorter.h"
#include "MergeSorter.h"
#include "SelectionSorter.h"
#include "QuickSorter.h"
#include "HeapSorter.h"
#include <boost/timer.hpp>

void fillArray(int size, int* array);
void showArray(int size, int* data);
void runHeapSorterTests(int* fiveArray, int* tenArray, int* hundredArray, int* thousandArray, int* tenThousandArray, int* hundredThousandArray, int index);
void initializeTimingVector();
double runQuickSorterIterations( int numberOfIterations, int arraySize, int* dataArray);
void runQuickSorterTests(int* fiveArray, int* tenArray, int* hundredArray, int* thousandArray, int* tenThousandArray, int* hundredThousandArray, int timingResultsIndex);
double runHeapSorterIterations( int numberOfIterations, int arraySize, int* dataArray);
void runMergeSorterTests(int* fiveArray, int* tenArray, int* hundredArray, int* thousandArray, int* tenThousandArray, int* hundredThousandArray, int timingResultsIndex);
double runMergeSorterIterations( int numberOfIterations, int arraySize, int* dataArray);
double getAverageOfArray(vector<int> array, int size);
void runInsertionSorterTests(int* fiveArray, int* tenArray, int* hundredArray, int* thousandArray, int* tenThousandArray, int* hundredThousandArray, int timingResultsIndex);
double runInsertionSorterIterations( int numberOfIterations, int arraySize, int* dataArray);
void runSelectionSorterTests(int* fiveArray, int* tenArray, int* hundredArray, int* thousandArray, int* tenThousandArray, int* hundredThousandArray, int timingResultsIndex);
double runSelectionSorterIterations( int numberOfIterations, int arraySize, int* dataArray);
void showTimingResults();

vector< vector<double> > timingResults = vector< vector<double> >();

int main()
{
	//Reserve space for all of the arrays
	int fiveArray[5];
	int tenArray[10];
	int hundredArray[100];
	int thousandArray[1000];
	int tenThousandArray[10000];
	int hundredThousandArray[100000];

	//Fill all of the arrays with random numbers
	fillArray(5, fiveArray);
	fillArray(10, tenArray);
	fillArray(100, hundredArray);
	fillArray(1000, thousandArray);
	fillArray(10000, tenThousandArray);
	fillArray(100000, hundredThousandArray);

	//initialize the timing vector
	initializeTimingVector();

	// Commented because Heap Sorter takes insanely long to sort anythign bigger than 1000
	//runHeapSorterTests(fiveArray, tenArray, hundredArray, thousandArray, tenThousandArray, hundredThousandArray, 0);

	runQuickSorterTests(fiveArray, tenArray, hundredArray, thousandArray, tenThousandArray, hundredThousandArray, 0);
	runMergeSorterTests(fiveArray, tenArray, hundredArray, thousandArray, tenThousandArray, hundredThousandArray, 1);
	runInsertionSorterTests(fiveArray, tenArray, hundredArray, thousandArray, tenThousandArray, hundredThousandArray, 2);
	runSelectionSorterTests(fiveArray, tenArray, hundredArray, thousandArray, tenThousandArray, hundredThousandArray, 3);

	showTimingResults();

	return 0;
}

void showTimingResults() {
	for(int index= 0; index < timingResults.size()-1; index++) {
		cout<<"The ["<<index<<"] test has the following results..."<<endl;
		for(int inner = 0; inner < timingResults[index].size(); inner++) {
			cout<<" "<<timingResults[index].at(inner)<<" ";
		}
		cout<<endl;
	}
}

void fillArray(int size, int* array)
{
	for(int index = 0; index < size ; index++)
	{
		//Fill with a random number
		array[index] = (rand() % size) + (rand() % size);

	}
}

void initializeTimingVector()
{
	for(int numberOfSorters = 0; numberOfSorters < 5; numberOfSorters++){
	vector<double> temporary = vector<double>();
	timingResults.push_back(temporary);
	}
}

void showArray(int size, int* data)
{
	cout << "Contents: ";
	for(int index = 0; index < size; index++)
	{
		cout << data[index] << " ";
	}
	cout << endl;
}

void runHeapSorterTests(int* fiveArray, int* tenArray, int* hundredArray, int* thousandArray, int* tenThousandArray, int* hundredThousandArray, int timingResultsIndex)
{
	cout << "Running HeapSorter with 1000 numbers..." <<endl;
	double thousandArrayResults = runHeapSorterIterations( 10, 1000, thousandArray);
	timingResults.at(timingResultsIndex).push_back(thousandArrayResults);

	cout << "Running HeapSorter with 10000 numbers..." <<endl;
	double tenThousandArrayResults = runHeapSorterIterations( 2, 10000, tenThousandArray);
	timingResults.at(timingResultsIndex).push_back(tenThousandArrayResults);

	cout << "Running HeapSorter with 100000 numbers..." <<endl;
	double hundredThousandArrayResults = runHeapSorterIterations( 2, 100000, hundredThousandArray);
	timingResults.at(timingResultsIndex).push_back(hundredThousandArrayResults);
}

double runHeapSorterIterations( int numberOfIterations, int arraySize, int* dataArray)
{
	//Create a timer
	boost::timer timer;
	timer.restart();
	for(int iterations = 0; iterations < numberOfIterations; iterations++){
			//Create a sorter
			HeapSorter sorter = HeapSorter((int*) memcpy(malloc(sizeof(int) * arraySize), dataArray, sizeof(int) * arraySize), arraySize);
			//Sort the contents
			sorter.sort();
			//Add the time to the timing vector
		}
	double totalTime = timer.elapsed();
	double average = totalTime / (double)numberOfIterations;
	return average;
}

void runQuickSorterTests(int* fiveArray, int* tenArray, int* hundredArray, int* thousandArray, int* tenThousandArray, int* hundredThousandArray, int timingResultsIndex)
{
	cout << "Running QuickSorter with 1000 numbers..." <<endl;
	double thousandArrayResults = runQuickSorterIterations( 100, 1000, thousandArray);
	timingResults.at(timingResultsIndex).push_back(thousandArrayResults);

	cout << "Running QuickSorter with 10000 numbers..." <<endl;
	double tenThousandArrayResults = runQuickSorterIterations( 10, 10000, tenThousandArray);
	timingResults.at(timingResultsIndex).push_back(tenThousandArrayResults);

	cout << "Running QuickSorter with 100000 numbers..." <<endl;
	double hundredThousandArrayResults = runQuickSorterIterations( 10, 100000, hundredThousandArray);
	timingResults.at(timingResultsIndex).push_back(hundredThousandArrayResults);
}

double runQuickSorterIterations( int numberOfIterations, int arraySize, int* dataArray)
{
	//Create a timer
	boost::timer timer;
	timer.restart();
	for(int iterations = 0; iterations < numberOfIterations; iterations++){
			//Create a sorter
			QuickSorter sorter = QuickSorter((int*) memcpy(malloc(sizeof(int) * arraySize), dataArray, sizeof(int) * arraySize), arraySize);
			//Sort the contents
			sorter.sort();
			//Add the time to the timing vector
		}
	double totalTime = timer.elapsed();
	double average = totalTime / (double)numberOfIterations;
	return average;
}

void runMergeSorterTests(int* fiveArray, int* tenArray, int* hundredArray, int* thousandArray, int* tenThousandArray, int* hundredThousandArray, int timingResultsIndex)
{
	cout << "Running MergeSorter with 1000 numbers..." <<endl;
	double thousandArrayResults = runMergeSorterIterations( 100, 1000, thousandArray);
	timingResults.at(timingResultsIndex).push_back(thousandArrayResults);

	cout << "Running MergeSorter with 10000 numbers..." <<endl;
	double tenThousandArrayResults = runMergeSorterIterations( 10, 10000, tenThousandArray);
	timingResults.at(timingResultsIndex).push_back(tenThousandArrayResults);

	cout << "Running MergeSorter with 100000 numbers..." <<endl;
	double hundredThousandArrayResults = runMergeSorterIterations( 10, 100000, hundredThousandArray);
	timingResults.at(timingResultsIndex).push_back(hundredThousandArrayResults);
}

double runMergeSorterIterations( int numberOfIterations, int arraySize, int* dataArray)
{
	//Create a timer
	boost::timer timer;
	timer.restart();
	for(int iterations = 0; iterations < numberOfIterations; iterations++){
			//Create a sorter
			MergeSorter sorter = MergeSorter((int*) memcpy(malloc(sizeof(int) * arraySize), dataArray, sizeof(int) * arraySize), arraySize);
			//Sort the contents
			sorter.sort();
			//Add the time to the timing vector
		}
	double totalTime = timer.elapsed();
	double average = totalTime / (double)numberOfIterations;
	return average;
}

void runInsertionSorterTests(int* fiveArray, int* tenArray, int* hundredArray, int* thousandArray, int* tenThousandArray, int* hundredThousandArray, int timingResultsIndex)
{
	cout << "Running InsertionSorter with 1000 numbers..." <<endl;
	double thousandArrayResults = runInsertionSorterIterations( 100, 1000, thousandArray);
	timingResults.at(timingResultsIndex).push_back(thousandArrayResults);

	cout << "Running InsertionSorter with 10000 numbers..." <<endl;
	double tenThousandArrayResults = runInsertionSorterIterations( 10, 10000, tenThousandArray);
	timingResults.at(timingResultsIndex).push_back(tenThousandArrayResults);

	cout << "Running InsertionSorter with 100000 numbers...this may take a while...." <<endl;
	double hundredThousandArrayResults = runInsertionSorterIterations( 2, 100000, hundredThousandArray);
	timingResults.at(timingResultsIndex).push_back(hundredThousandArrayResults);
}

double runInsertionSorterIterations( int numberOfIterations, int arraySize, int* dataArray)
{
	//Create a timer
	boost::timer timer;
	timer.restart();
	for(int iterations = 0; iterations < numberOfIterations; iterations++){
			//Create a sorter
			InsertionSorter sorter = InsertionSorter((int*) memcpy(malloc(sizeof(int) * arraySize), dataArray, sizeof(int) * arraySize), arraySize);
			//Sort the contents
			sorter.sort();
			//Add the time to the timing vector
		}
	double totalTime = timer.elapsed();
	double average = totalTime / (double)numberOfIterations;
	return average;
}

void runSelectionSorterTests(int* fiveArray, int* tenArray, int* hundredArray, int* thousandArray, int* tenThousandArray, int* hundredThousandArray, int timingResultsIndex)
{
	cout << "Running SelectionSorter with 1000 numbers..." <<endl;
	double thousandArrayResults = runSelectionSorterIterations( 100, 1000, thousandArray);
	timingResults.at(timingResultsIndex).push_back(thousandArrayResults);

	cout << "Running SelectionSorter with 10000 numbers..." <<endl;
	double tenThousandArrayResults = runSelectionSorterIterations( 10, 10000, tenThousandArray);
	timingResults.at(timingResultsIndex).push_back(tenThousandArrayResults);

	cout << "Running SelectionSorter with 100000 numbers...This may take a while...." <<endl;
	double hundredThousandArrayResults = runSelectionSorterIterations( 2, 100000, hundredThousandArray);
	timingResults.at(timingResultsIndex).push_back(hundredThousandArrayResults);
}

double runSelectionSorterIterations( int numberOfIterations, int arraySize, int* dataArray)
{
	//Create a Timer
	boost::timer timer;
	timer.restart();
	for(int iterations = 0; iterations < numberOfIterations; iterations++){
			//Create a sorter
			SelectionSorter sorter = SelectionSorter((int*) memcpy(malloc(sizeof(int) * arraySize), dataArray, sizeof(int) * arraySize), arraySize);
			//Sort the contents
			sorter.sort();
		}
	double totalTime = timer.elapsed();
	double average = totalTime / (double)numberOfIterations;
	return average;
}

double getAverageOfArray(vector<int> array, int size) {
	double sum = 0.0;
	for(int index =0; index < size; index++) {
		sum +=array[index];
	}
	return sum / size;
}
