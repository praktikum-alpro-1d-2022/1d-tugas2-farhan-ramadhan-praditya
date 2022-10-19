#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int d1, d2;
    double Luas;

    cout << "Masukan d1 :";
    cin >> d1;
    cout << "Masukan d2 :";
    cin >> d2;

    Luas = 0.5*d1*d2;
    cout << "Luas Layang-layang =" << Luas << endl;
    
    return 0;
}
