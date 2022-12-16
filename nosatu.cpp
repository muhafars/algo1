
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int j, m, k;
    m = 24;
    k = 21;
    j = m | k;
    cout << "a.\t J= " << j << endl;
    j = m % k;
    cout << "b.\t J= " << j << endl;
    j = m & k;
    cout << "c.\t J= " << j << endl;
    j = m + ++k;
    cout << "d.\t J= " << j << endl;
    j = m - --k;
    cout << "e.\t J= " << j << endl;
    j = m - --k;
    cout << "f.\t J= " << j << endl;
    j = m >> 2;
    cout << "g.\t J= " << j << endl;
    j = k += m;
    cout << "h.\t J= " << j << endl;
    j = --m + k++;
    cout << "i.\t J= " << j << endl;
    j = --m * 5;
    cout << "j.\t J= " << j << endl;
    return 0;
}