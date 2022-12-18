#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, t;
    double Luas;
    cout << "Alas   :";
    cin >> a;
    cout << "Tinggi :";
    cin >> t;

    Luas = 0.5*a*t;
    cout << "Luas Segitiga  =" << Luas << endl;

    return 0;
}
