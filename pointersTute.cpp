#include<iostream>

using namespace std;


int main(){
    //A poiinter is a variable whose value is the address of another variable,
//a - 1 block of 4 bytes, address - 2002, value - 5
//b -  1 block of 4 bytes, address - 5003(assume), value = 2.1
//c - 1 block of <> bytes, address - 1001, value = <address>



    int a = 5;
    float b = 2.1;

    //defining pointer variable

    int *c; //or int* c //pointer to integer variable
     
    //assigning value of address of a variable to pointer variable c.
    c = &a;
    float* d = &b;
    
    cout << c<< endl;
    cout << d << endl;
    return 0;

}