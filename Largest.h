#pragma once
#include <iostream>
using namespace std;
class Largest
{
	int n;
	int LargestNom = -1;
	
public:

	int* arr = new int[n];

	void Setn(int n) {
		this->n = n;
	}
	void Enterarr() {
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
	}
	int FindLargest() {
		for (int i = 0; i < n; i++) {
			if (arr[i] > LargestNom) {
				LargestNom = arr[i];
			}
		}
		return LargestNom;
	}
	
};

