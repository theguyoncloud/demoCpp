#include<iostream>
#include<math.h>

using namespace std;

int max_two(int num1, int num2){

    if(num1>num2){
        return num1;
    }else{
        return num2;
    }
}

int main(){

    cout << "Enter two numbers that you want to compare: "; 
    int num1, num2;

    cin >> num1 >> num2;

    int max_num = max_two(num1, num2);

    cout << "Maximum among the " << num1 << " and " << num2 << " is: " << max_num << endl;

    return 0;
}