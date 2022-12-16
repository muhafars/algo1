// Minggu 5 tugas 1 Muhammad Fajri Assidiq - 221011402601
#include <iostream>
using namespace std;
float number;
void printIntro(), inputData(), modelLogicA(), modelLogicB();
int main(){
    printIntro(), inputData(), modelLogicA(), modelLogicB();
    return 0;
};
void printIntro(){
 	cout<<"--------- Program Minggu 5 ---------"<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<"------ Muhammad Fajri Assidiq ------"<<endl;
	cout<<"---------- 221011402601 ------------"<<endl;
	cout<<"------------------------------------"<<endl;
};
void inputData(){
    cout << "Silahkan Masukkan Sebuah Angka => ";
    cin >> number;
};
void modelLogicA(){
    int a = number;
    if (a > 50 && a != int()){
        a = a + 25;
        cout << "A. Nilai Ditambah 25 => " << a  << endl;
    }else if (a < 50 && a != int()){
        a = a + 10;
        cout << "A. Nilai Ditambah 10 => " << a  << endl;
    }else{
        cout << "Tolong Masukkan Angka" << endl;
    };
};
void modelLogicB(){
    int b = number;
    if (b > 50 && b != int()){
        b = b + 10 + 10;
        cout << "B. Nilai Ditambah 10 + 10 => " << b << endl;
    }else{
        b = b + 10;
        cout << "B. Nilai Ditambah 10  => " << b << endl;
    };
};