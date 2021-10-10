#include <iostream>
using namespace std;

int main(){
	int aksi;
	string reaksi = "";
	
	cout<<"Program Lintas"<<endl;
	cout<<"Masukkan Kondisi Lampu : ";
	cin>>aksi;
	cin>>sebab;
	
	switch(aksi){
		case 1:
			reaksi = "kendaraan berhenti";
			break;
		case 2:
			reaksi = "kendaraan jalan";
			break;
		case 3:
			reaksi = "kendaraan siap-siap";
			break;
		default:
			reaksi = "lampu salah";
	}
	cout<<"Kondisi : "<<reaksi<<endl;
}
