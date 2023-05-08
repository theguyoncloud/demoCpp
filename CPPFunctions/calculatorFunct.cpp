#include<iostream>
#include<math.h>
using namespace std;

int maths_operation(int num1, char mathO, int num2){
    int result;
    int testCase;
    if(mathO == '+'){
        testCase = 1;
    }else if(mathO == '-'){
        testCase = 2;
    }else if(mathO == '*'){
        testCase = 3;

    }else if(mathO == '/'){
        testCase = 4;

    }else if(mathO == '^'){
        testCase = 5;

    }else{
        testCase = -1;
    }
    switch(testCase){
        case 1:
          result =  num1 + num2;
          break;
        case 2:
          result = num1 - num2;
          break;
        case 3:
          result = num1 * num2;
          break;
        case 4:
          result = num1 / num2;
          break;
        case 5:
          for(int i = 0; i < num2; i++){
            num1 *= num1;
          }
          result = num1;
          break;
        default:
          result = -1;
    }
    return result;
}
int main(){
    cout << "Please enter first number: ";
    char math_op;
    int num1, num2;
    cin >> num1;
    cout << "Please enter the second number: ";
    cin >> num2;
    cout << "Please enter the valid mathematical operation,  (+, -, *, /, ^): ";
    cin >> math_op;

    int result = maths_operation(num1, math_op, num2);
    if(result == -1){
        cout << "You haven't entered the correct mathematical operator.";
    }else{
        cout << "The result is: " << result << endl;
    }

    return 0;

}