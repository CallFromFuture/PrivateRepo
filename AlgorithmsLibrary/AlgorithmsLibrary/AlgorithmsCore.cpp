#include "stdafx.h"
#include "AlgorithmsCore.h"


AlgorithmsCore::AlgorithmsCore()
{
}


AlgorithmsCore::~AlgorithmsCore()
{
}



int* AlgorithmsCore::insertionSort(int* input, int size, bool sort) {
	for (int j = 1; j<size; j++) {
		int key = input[j];
		
		int i = j - 1;
		while (i >= 0 && input[i]>key) {//asc
			input[i + 1] = input[i];
			i -= 1;
		}
		input[i + 1] = key;
	}
	
	return input;
}

vector<int> AlgorithmsCore::insertionSort(vector<int> input, bool sort) {
	for (int j = 1; j<input.size(); j++) {
		int key = input[j];
		int i = j - 1;
		while (i >= 0 && input[i]>key) {//asc
			input[i + 1] = input[i];
			i -= 1;
		}
		input[i + 1] = key;
	}
	return input;
}
array<int,18> AlgorithmsCore::insertionSort(array<int,18> input, bool sort) {
	for (int j = 1; j<input.size(); j++) {
		int key = input[j];
		int i = j - 1;
		while (i >= 0 && input[i]>key) {//asc
			input[i + 1] = input[i];
			i -= 1;
		}
		input[i + 1] = key;
	}
	return input;
}