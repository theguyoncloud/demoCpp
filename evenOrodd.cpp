#include<iostream>
#include<math.h>

using namespace std;

int main(){
    cout << "Enter an integer to find whether it is even or odd: ";
    int num;

    cin >> num;

    if (num % 2 == 0){
        cout << "Number is Even."<<endl;
    }else{
        cout << "Number is Odd."<<endl;
    }
}