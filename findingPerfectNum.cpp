#include<iostream>
#include<math.h>

//a) find factors of the number smaller than the number


using namespace std;

//what is a perfect number: the number which is equal to the sum of its factors except itself, e.g. 6 = 1+2+3
int main(){

    int startInt = 1;
    int endInt = 501;

    for(int i = startInt; i < endInt; i++){

        int factor = 1;
        int sumFactors = 0;
        for(int j = factor; j < i; j++){
            if(i % j == 0){
                sumFactors += j;
            }

        }
        if(i == sumFactors){
            cout << i << " ";
        }

    }

    return 0;


}
