#include<iostream>
#include<math.h>

//find GCD of two numbers

using namespace std;

int main(){
    int num1, num2;
    //take input for both numbers
    cout << "Type two numbers for which you want to calculate the GCD for: " << endl;
    
    cout << "First number: ";
    cin >> num1;

    cout << "Second number: ";
    cin >> num2;
    
    int gcd = 1;
    for(int i = 1; (i <= num1 || i <= num2); i++){

        if(num1 % i == 0 && num2 % i == 0){
            if(i > gcd){
                gcd = i;
            }
        }
    }
    cout << "GCD of " << num1 << " and " << num2 << " is: ";
    cout << gcd << endl;

    return 0;

}