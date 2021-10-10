#include <iostream>
using namespace std;

int main(){
	int panjang, lebar;
	int tinggi = 9;
	int hasil;
	
	cout << "Program Luas Persegi Panjang" << endl;
	cout << "Masukkan Panjang : ";
	cin >> panjang;
	cout << "Masukkan Lebar : ";
	cin >> lebar;
	
	hasil = panjang * lebar * tinggi;
	
	cout << "Luas Persegi Panjang adalah : " << hasil << endl;
	
}
