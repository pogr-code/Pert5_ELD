#include <iostream>
using namespace std;

int main() {
	int n;
	// Meminta pengguna memasukkan jumlah elemen array
	cout << "Masukkan jumlah elemen array: ";
	cin >> n;
	// Deklarasi array dengan ukuran sesuai input pengguna
	int nilai[n];
	// Memasukkan nilai ke dalam array
	for (int i = 0; i < n; i++) {
		cout << "Masukkan nilai elemen ke-" << i + 1 << ": ";
		cin >> nilai[i];
	}
	// Menampilkan nilai-nilai yang dimasukkan
	cout << "\nNilai-nilai yang dimasukkan adalah: ";
	for (int i = 0; i < n; i++) {
		cout << nilai[i] << " ";
	}
	cout << endl;

return 0;
}
