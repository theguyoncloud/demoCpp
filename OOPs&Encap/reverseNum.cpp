//C++ program to find Reverse of a Number using class


#include<iostream>
#include<math.h>

using namespace std;

class ReverseAnum{

    private:
    int numToOperate;

    public:
    void setData(int entNum){
        numToOperate = entNum;
    };
    int numReverse(){

        int num = numToOperate;
        int newNum = 0;

        while(num > 0){
            int reverseNum = num % 10;
            num = num / 10;

            newNum = (newNum * 10) + reverseNum;
        }
        return newNum;
    };
};

int main(){

    ReverseAnum a;
    cout << "Enter the number for which you want to calculate the reverse number: ";
    int numToReverse;
    cin >> numToReverse;
    a.setData(numToReverse);

    cout << a.numReverse();
}