#include <iostream>
using namespace std;

int main() {
// Deklarasi dua array berisi 5 elemen
	int array1[5] = {1, 2, 3, 4, 5};
	int array2[5] = {10, 20, 30, 40, 50};
	
	cout << "array1: [";
	for (int i = 0; i < 5; i++) {
		cout << array1[i];
		if (i < 4) cout << ",";
	}
	cout << "]" <<endl;
	
	cout << "array2: [";
	for (int i = 0; i < 5; i++) {
		cout << array2[i];
		if (i < 4) cout << ",";
	}
	cout << "]" <<endl;
	
	cout << "result: [";
	for (int i = 0; i < 5; i++) {
		cout << array1[i] + array2[i];
		if (i < 4) cout << ",";
	}
	cout << "]" <<endl;

return 0;
}
