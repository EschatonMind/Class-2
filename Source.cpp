#include <iostream>
using namespace std;
#include "Largest.h"
int main() {
	
	int Number;
	Largest L1;
	cin >> Number;
	L1.Setn(Number);
	L1.Enterarr();
	for (int i = 0; i < Number; i++) {
		cout << " | " << L1.arr[i] << " | ";
	}
	cout << endl;
	cout << L1.FindLargest();
	return 0;
	delete[]L1.arr;
}