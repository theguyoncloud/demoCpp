# include<iostream>

using namespace std;

int main(){

    int a = 1;
    switch (a)
    {
    case 1: 
      cout << "One";
    case 2:
      cout << "Two";
    case 3:
      cout << "Three";  
    default:
      cout << "Default";
    }
    return 0;
}

