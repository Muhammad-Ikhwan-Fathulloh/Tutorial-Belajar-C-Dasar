#include <iostream>
using namespace std;

int main(){
	string aksi = "";//sebab
	string reaksi = "";//akibat
	int sebab;
	string akibat = "";
	
	cout<< "Program Lintas"<<endl;
	cout<< "Masukkan Kondisi Lampu : ";
	cin >> aksi;
	cout<< "Masukkan Warna: ";
	cin >> sebab;
	
	if(aksi == "merah"){//aksi
		reaksi = "kendaraan berhenti";//reaksi
	}else if(aksi == "hijau"){
		reaksi = "kendaraan jalan";
	}else if(aksi == "kuning"){
		reaksi = "kendaraan siap-siap";
	}else if(sebab < 10){
		reaksi = "kendaraan siap bos";
	}else if(sebab > 10){
		reaksi = "kendaraan siap kang";
	}
	else{
		reaksi = "lampu salah";
	}
	
	cout<<"Kondisi : "<<reaksi<<endl;
	cout<<"Warna : "<<akibat<<endl;
}
