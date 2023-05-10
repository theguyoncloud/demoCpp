#include<iostream>
using namespace std;

class Testing {

    private:
      int a;
      float b;
    public:
      int c;
      float d;

};


int main(){

    Testing x;

    x.a = 5;
    x.c = 8;

    cout << "x.a is " << x.a << " and x.c is " << x.c << endl;


    return 0;
}