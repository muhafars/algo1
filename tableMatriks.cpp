#include <iostream>
#include <array>
using namespace std;
void printIntro(),  matriksTable(int rows, int cols);
int main() {
    printIntro(), matriksTable(5,5);
    cout<< endl; matriksTable(3,3);
    return 0;
}

void printIntro(){
 	cout<<"--------  Program Tabel Matriks --------"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"------- Muhammad Fajri Assidiq ---------"<<endl;
	cout<<"----------- 221011402601 ---------------"<<endl;
	cout<<"----------------------------------------"<<endl;
};

void matriksTable(int rows,int cols){
    int my_array[rows][cols] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    for (int i = 0; i < rows ; i++){
        for (int j=0; j< cols; j++)
            cout << my_array[i][j]<<" | ";
        cout <<endl;
        cout << "-----------------------"<<endl;
    }
}
