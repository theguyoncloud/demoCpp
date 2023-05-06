#include<iostream>
#include<string>

using namespace std;

//write a program to check whether a given character is contained in a string of not and find its position

int main(){
    string inptString;
    char charFind;
    cout << "Type the string in which you want to find the character: ";
    cin >> inptString;
    cout << "Type the character you want to find in the string: ";
    cin >> charFind;

    int indexFound;
    bool charFound = false;

    for(int i = 0; i < inptString.length(); i++){
        if(tolower(charFind) == tolower(inptString[i])){

            indexFound = i;
            charFound = true;
            break;
        }
    }
    if(charFound){
        cout << " Character " << charFind << " found in the string " << inptString <<" at position: " << indexFound;
    }else{
        cout << " Character " << charFind << " not found in the string " << inptString <<"." << endl;
    }

    return 0;

}