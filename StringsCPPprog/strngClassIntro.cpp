//Strings using string class

#include<iostream>
#include<string>

using namespace std;

int main(){

    string fullname, firstname, lastname;
    cin >> firstname >> lastname;

    fullname = firstname + " "+ lastname;

    cout << fullname;

    //finding size of string

    cout << fullname.length();
    cout << fullname.size();

    return 0;
}