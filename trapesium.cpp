#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, t;
    double Luas;

    cout << "Masukan sisi a :";
    cin >> a;
    cout << "Masukan sisi b :";
    cin >> b;
    cout << "Masukan sisi t :";
    cin >> t;

    Luas = 0.5*(a+b)*t;
    cout << "Luas Trapesium =" << Luas << endl;

    return 0;
}
