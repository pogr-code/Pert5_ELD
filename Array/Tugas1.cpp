#include <iostream>
using namespace std;

int sum(const int arr1[], int n){
	int hasil=0;
	for (int i=0;i<n;i++){
		hasil = hasil + arr1[i];
	}	
return hasil;
	
}

int minVal(const int arr1[], int n){
	int min=arr1[0];
	for (int i=0;i<n;i++){
		if (arr1[i]<min){
			min = arr1[i];
		}
	}
	return min;
}

int maxVal(const int arr1[], int n){
	int max=arr1[0];
	for (int i=0;i<n;i++){
		if (arr1[i]>max){
			max = arr1[i];
		}
	}
	return max;
}

double mean(const int arr1[], int n){
	int rata=0;
	int gabung=0;
	for (int i = 0;i<n;i++){
		gabung=gabung+arr1[i];
	}
	rata = gabung / n;
	return rata;
}

int main(){
	int n, hasil,min,max,rata; 
	int arr1[10];
	cout <<"Masukkan Bilangan n : ";
	cin>>n;
	for (int i=0;i<n;i++){
		cout<<"Masukkan angka pada indeks ["<<i<<"] : ";			
		cin>>arr1[i];
	
	}
	hasil=sum(arr1, n);	
	min=minVal(arr1, n);
	max=maxVal(arr1, n);
	rata=mean(arr1, n);
	cout <<"Hasil : "<<hasil<<endl;
	cout<<"Angka Terkecil : "<<min<<endl;
	cout <<"Angka Terbesar : "<<max<<endl;
	cout <<"Rata-rata : "<<rata<<endl;
}
