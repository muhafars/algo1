#include <iostream>
using namespace std;

int main()
{
    cout << "===     Program Sederhana Konversi Suhu    ===" << endl;
    cout << "===========================================" << endl;
    cout << "=         Muhammad Fajri Assidiq          =" << endl;
    cout << "=             221011402601                =" << endl;
    cout << "===========================================" << endl;
    cout << endl;

    float c, f, r;
    cout << "Input Suhu Celsius: ";
    cin >> c;
    cout << endl;

    f = (9.0 / 5.0 * c) + 32;
    r = c * (4.0 / 9.0);

    cout << c << "°C = " << f << "°F";
    cout << endl;
    cout << c << "°C = " << r << "°R";
    cout << endl;
    return 0;
}