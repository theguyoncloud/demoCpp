//Write any program to demonstrate C++ Structures

#include<iostream>
using namespace std;

struct employeeStruc{
    string empName;
    string mobNum;
    int empId;
    string desig;
};

int main(){

    int empNumbers;
    cout << "Enter the number of employee data you want to enter: ";
    cin >> empNumbers;
    employeeStruc empList[empNumbers];

    for(int i = 0; i < empNumbers; i++){
        cout << "Please enter the following details: ";
        cout << "Enter employee name: ";
        cin >> empList[i].empName;
        cout << "Enter employee mobile number: ";
        cin >> empList[i].mobNum;
        cout << "Enter employee designation: ";
        cin >> empList[i].desig;
        empList[i].empId = i;

    }
    //Print the employee information:
    for(int i = 0; i < empNumbers; i++){
        cout << empList[i].empName << endl<< empList[i].mobNum << endl << empList[i].desig << endl << empList[i].empId << endl;
    }
    return 0;
}