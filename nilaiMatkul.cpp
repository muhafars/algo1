#include <iostream>
#include <typeinfo>
using namespace std;
    const int nilaiNumeric[]={0,1,2,3,4};
    const char nilaiChar[]={'a', 'b', 'c', 'd', 'e'};
    // const char* nilaiChar[]={"a","b","c","d","e"};
    const char* matkul[]={"Kalkulus","Algoritma Pemrograman","Logika Informatika","Pengantar Teknologi Informasi","Fisika"};
void printIntro(), printData();
int main(){
    printIntro(), printData();
    return 0;
}
void printIntro(){
 	cout<<"Program Menghitung Nilai Akhir Mahasiswa"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"------- Muhammad Fajri Assidiq ---------"<<endl;
	cout<<"----------- 221011402601 ---------------"<<endl;
	cout<<"----------------------------------------"<<endl;
};
void printData(){
    cout<<"Ini Tipe Data Numeric = "<<typeid(nilaiNumeric).name()<<"\t Ini tipe data nilai char = "<< typeid(nilaiChar).name()<<"\t Ini tipe data Matkul = "<< typeid(matkul).name()<<endl;// Check tipe data
    int len = sizeof(nilaiNumeric)/sizeof(nilaiNumeric[0]);//check panjang array
    cout<<"Ini panjang array = "<<len<<endl;
    for(int i=0;i<len;i++){
        cout<<"Nilai Number = "<<nilaiNumeric[i]<<"\t Nilai Char = "<<nilaiChar[i]<<"\t Nama Mata Kuliah = "<<matkul[i]<<endl;
    };
};
