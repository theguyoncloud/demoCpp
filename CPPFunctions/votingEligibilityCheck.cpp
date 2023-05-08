#include<iostream>
#include<math.h>

using namespace std;

bool checkEligibility(int age){
    if(age >= 18){
        return true;
    }else{
        return false;
    }
}

int main(){

    cout << "Enter your age to find out your eligibility to vote: ";

    int age;

    cin >> age;

    bool canVote = checkEligibility(age);

    if(canVote){
        cout << "You can vote." << endl;
    }else{
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}