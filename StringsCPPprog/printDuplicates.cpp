#include<iostream>
#include<string>
/*
first iterate through entire string, if a char is find, add that char in new string. Next time if that character is found again, run internal for
loop to check whether that char is there in the new string and if it is there, then don't add, and move the iterator further in parent loop.
*/
using namespace std;

int main(){
    string inptString;
    string newDupString;

    cout << "Enter the string where you want to calculate the total number of duplicates. ";
    cin >> inptString;

    for(int i = 0; i < inptString.size(); i++){
        
        for(int j = i+1; j < inptString.size(); j++ ){
            //cout << inptString[i] << " " << inptString[j] << endl;
            if(inptString[i] == inptString[j]){
                if(newDupString.size() == 0){
                    newDupString.push_back(inptString[i]);

                }else{
                    bool charPresent = false;
                    for(int k = 0; k < newDupString.size(); k++){
                        if(newDupString[k] == inptString[i]){
                            charPresent = true;
                            break;
                        }
                    }

                    if(!charPresent){
                        newDupString.push_back(inptString[j]);
                    }else{
                        continue;
                    }   
                }

            }
        }
    }
    //cout << newDupString.size();
    for(int i = 0; i < newDupString.size(); i++){
        cout << newDupString[i];
    }
    return 0;
}