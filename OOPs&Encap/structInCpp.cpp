#include<iostream>
using namespace std;

struct complex_numbers{
    int real;
    int imag;
};

int main(){
    complex_numbers a;
    cout << "Enter the real and imaginary parts of the complex no.s respectively: " << endl;
    cin >> a.real >> a.imag;

    cout << a.real << "\t" << a.imag << endl;

    return 0;
}