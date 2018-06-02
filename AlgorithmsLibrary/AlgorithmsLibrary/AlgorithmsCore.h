#pragma once
#include <vector>
#include <array>
class AlgorithmsCore
{
public:
	AlgorithmsCore();
	~AlgorithmsCore();
	int * insertionSort(int * input, int size, bool sort);

	vector<int> insertionSort(vector<int> input, bool sort);

	array<int, 18> insertionSort(array<int, 18> input, bool sort);

};


