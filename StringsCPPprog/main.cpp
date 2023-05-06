//what is a string?
#include<iostream>
#include<cstring>


using namespace std;

int main(){

//defining a char string
    char name[10];
    char user[] = "yash";

    cin >> name;


//method to string compare
    // if(strcmp(name, user) == 0) {
    //     cout << "Welcome back, Yash" << endl;
    // }else{
    //     cout << "Wrong user, please try again" << endl;
    // }

    // for(int i = 0; i < 5; i++){
    //     cout << name[i];
    // }
//method to concatenate
    (strcat(user, name));
        cout << user << endl;

    for(int i = 0; i < 5; i++){
        cout << name[i];
    }

    return 0;
}
//method to string copy strcpy(str1, str2)
//method to find length of str, strlen