# include<iostream>

using namespace std;

int main(){
    int a;
    cin >> a; //user can enter any value
    if(++a*5 <= 25){
        cout << "Hello";
    }else{
        cout << "Bye";
    }
    return 0;
}

