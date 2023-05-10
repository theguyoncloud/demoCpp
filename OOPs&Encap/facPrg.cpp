//C++ Program to find Factorial of a number using class
#include<iostream>
#include<math.h>
using namespace std;

class FacCl{

    private:
    int numToCalculate;

    public:
    void setNum(int num){
        numToCalculate = num;
    };

    int fact(){

        int fact = 1;
        int num = numToCalculate;

        if(num <= 0){
            return fact;
        }else{
            while(num > 0){

                fact *= num;
                num -= 1;
            }
            return fact;
        }
    }
};
int main(){

    FacCl a;
    cout << "Enter the number for which you want to calculate the factorial: ";
    int numToCalc;
    cin >> numToCalc;
    a.setNum(numToCalc);
    cout << a.fact();
}


