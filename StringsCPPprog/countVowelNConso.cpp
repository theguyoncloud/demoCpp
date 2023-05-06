//Write a program to count a number of vowels and consonants in a string?
//it assume no gaps in string.

#include<iostream>
#include<string>
using namespace std;

int main(){
    string inptString;
    
    cout << "Type the string in which you want to find the character: ";
    cin >> inptString;

    int vowelsFound = 0;
    int consoFound = 0;
    

    for(int i = 0; i < inptString.length(); i++){

        if('a' == tolower(inptString[i]) || 'e' == tolower(inptString[i]) || 'i' == tolower(inptString[i]) || 'o' == tolower(inptString[i]) || 'u' == tolower(inptString[i])){

            vowelsFound += 1;
        }else{
            consoFound += 1;
        }
    }
    cout << "The number of vowels in " << inptString << " is: " << vowelsFound << " and number of consonants is: " << consoFound <<"." << endl;
    

    return 0;
}