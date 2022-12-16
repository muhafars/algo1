// Minggu 5 tugas 1 Muhammad Fajri Assidiq - 221011402601
#include <iostream>
using namespace std;
float number;
void printIntro(), inputData(), modelLogic();
int main(){
    printIntro(), inputData(), modelLogic();
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
void modelLogic(){
    int a = number;
    if (a > 50 && a != int()){
        number = number + 25;
        cout << "Nilai Ditambah 25 => " << number << endl;
    }else if (a < 50 && a != int()){
        number = number + 10;
        cout << "Nilai Ditambah 10 => " << number << endl;
    }else{
        cout << "Tolong Masukkan Angka" << endl;
    }
};