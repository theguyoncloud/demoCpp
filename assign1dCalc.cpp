/*Create a Calculator using the switch Statement.
*
kindly upload screenshot of your program along with output*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){    
    int num1, num2, choiceOfOperation, results;
    cout << "Enter two numbers on which you want to carry out calculation." <<endl;
    cin >> num1 >> num2;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    cout << "What type of calculation you want to carry out on these two numbers: " << endl;
    cout << "For addition choose 1: " << endl;
    cout << "For substraction choose 2: " << endl;
    cout << "For multiplication choose 3: " << endl;
    cout << "For division choose 4: " << endl;
    cout << "For modulus choose 5: " << endl;
    cin >> choiceOfOperation;
    if (choiceOfOperation > 0 && choiceOfOperation < 6){
        switch (choiceOfOperation)
        {
        case 1:
            results = num1 + num2;
            cout << "The result of the addition is: " << results;
            break;
        case 2:
            results = num1 - num2;
            cout << "The result of the substraction is: " << results;
            break;
        case 3:
            results = num1 * num2;
            cout << "The result of the multiplication is: " << results;
            break;
        case 4:
            results = num1 / num2;
            cout << "The result of the division is: " << results;
            break;
        case 5:
            results = num1 % num2;
            cout << "The result of the modulus is: " << results;
            break;
        default:
            cout << "You selected an invalid option." << endl;
            break;
        }
    }else{
        cout << "You selected an invalid option." << endl;
    }
    

}