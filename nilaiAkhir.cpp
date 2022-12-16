#include <iostream>
using namespace std;
	int sks;
	float absensi, tugas, uts, uas, nilai_akhir;
	char nilai_huruf;
	string mataKuliah, nim, namaMhs;
void printIntro(), inputData(), inputDataNilai(), modelLogic(), printOutput();
int main(){
	printIntro(),inputData(),inputDataNilai(),modelLogic(),printOutput();
	return 0;	
}

void printIntro(){
 	cout<<"Program Menghitung Nilai Akhir Mahasiswa"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"------- Muhammad Fajri Assidiq ---------"<<endl;
	cout<<"----------- 221011402601 ---------------"<<endl;
	cout<<"----------------------------------------"<<endl;
};
void inputData(){
	cout<<"Masukan NIM: ";
	getline(cin, nim);
	cout<<"Masukkan Nama Mahasiswa: ";
	getline(cin, namaMhs);
	cout<<"Masukkan Mata Kuliah: ";
	getline(cin, mataKuliah);	
	cout<<"SKS: ";
	cin>>sks;
};
void inputDataNilai(){
	cout<<"Masukan Nilai Absensi : ";
	cin>>absensi;
	cout<<"Masukan Nilai Tugas : ";
	cin>>tugas;
	cout<<"Masukan Nilai UTS : ";
	cin>>uts;
	cout<<"Masukan Nilai UAS : ";
	cin>>uas;
};
void modelLogic(){
	nilai_akhir = ((absensi*0.1)+(tugas*0.2)+(uts*0.3)+(uas*0.4));
	
	if (nilai_akhir>80){
		nilai_huruf='A';
	}else if (nilai_akhir>=70){
		nilai_huruf='B';
	}else if(nilai_akhir>=60){
		nilai_huruf='C';
	}else if (nilai_akhir>=50){
		nilai_huruf='D';
	}else {
		nilai_huruf='E';
	};
};

void printOutput(){
	cout<<"\n Nama Mata Kuliah: "<< mataKuliah<<endl;
	cout<<" SKS : " << sks<<endl;
	cout<<"========================================="<<endl;
	cout<< "NIM"<<"|" << "Nama" <<"|"<< "Jumlah Hadir"<<"|"<< "UTS"<<"|"<< "UAS"<<"|"<< "Nilai Angka"<<"|"<< "Grade"<<"|"<< endl;
	cout<<nim<<"|"<<namaMhs<<"|"<<absensi<<"|"<<uts<<"|"<<uas<<"|"<<nilai_akhir<<"|"<<nilai_huruf<<"|"<<endl;
	cout<<"========================================="<<endl;
}