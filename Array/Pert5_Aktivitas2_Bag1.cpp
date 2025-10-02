#include <iostream>
using namespace std;

int main() {
	int baris, kolom;
	
	// Meminta input jumlah baris dan kolom
	cout << "Masukkan jumlah baris matriks: ";
	cin >> baris;
	cout << "Masukkan jumlah kolom matriks: ";
	cin >> kolom;
	
	// Deklarasi dua matriks dan matriks hasil
	int matriks1[baris][kolom], matriks2[baris][kolom], hasil[baris][kolom];
	
	// Input elemen matriks pertama
	cout << "\nMasukkan elemen matriks pertama: " << endl;
	for (int i = 0; i < baris; i++) {
		for (int j = 0; j < kolom; j++) {
		cout << "Elemen [" << i + 1 << "][" << j + 1 << "]: ";
		cin >> matriks1[i][j];
		}
	}
	
	// Input elemen matriks kedua
	cout << "\nMasukkan elemen matriks kedua: " << endl;
	for (int i = 0; i < baris; i++) {
		for (int j = 0; j < kolom; j++) {
		cout << "Elemen [" << i + 1 << "][" << j + 1 << "]: ";
		cin >> matriks2[i][j];
		}
	}
	
	// Menjumlahkan kedua matriks
	for (int i = 0; i < baris; i++) {
		for (int j = 0; j < kolom; j++) {
		hasil[i][j] = matriks1[i][j] + matriks2[i][j];
		}
	}
	
	// Menampilkan hasil penjumlahan matriks
	cout << "\nHasil penjumlahan kedua matriks: " << endl;
	
	for (int i = 0; i < baris; i++) {
		for (int j = 0; j < kolom; j++) {
		cout << hasil[i][j] << "\t";
		}
	cout << endl;
	}
	return 0;
}
