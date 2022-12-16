#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "===     Program Sederhana Suku Bunga    ===" << endl;
    cout << "===========================================" << endl;
    cout << "=         Muhammad Fajri Assidiq          =" << endl;
    cout << "=             221011402601                =" << endl;
    cout << "===========================================" << endl;
    cout << endl;

    float m, b, n, um, ut;
    cout << "Masukkan Modal Tabungan= Rp.";
    cin >> m;

    cout << "Masukkan Suku Bunga Tabungan= %";
    cin >> b;
    if (b <= 100 && b > 1)
    {
        cout << "Masukkan Jangka Waktu Tabungan= Tahun ";
        cin >> n;
        // Tunggal Bunga
        ut = m + (b / 100 * n) * m;
        cout << "Total Bunga Tunggal = Rp." << ut - m << "\nTotal Tabungan Tunggal = Rp." << ut << endl;
        // BungaMajemuk
        um = pow((1 + b / 100), n) * m;
        cout << "Total Bunga Majemuk = Rp." << um - m << "\nTotal Tabungan Majemuk = Rp." << um << endl;
    }
    else
    {
        cout << "Silahkan Ulangi Program dan Masukkan bunga dibawah 100% dan Tidak Kurang dari 0%" << endl;
    }

    return 0;
}