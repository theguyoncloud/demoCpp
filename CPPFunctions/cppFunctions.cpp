#include<iostream>
using namespace std;


 //function void type, don't return anything and take a single int type parameter r
void circle_details(int r) {
    float area, c;
    area = 3.14 * r * r;
    c = 2 * 3.14 * r;
    cout << "Area: " << area << "\t" << "Circumference: " << c << endl;
}

int main(){
    int radius;
    cout << "Please enter the radius of the circle" << endl;
    cin >> radius;
    circle_details(radius);
}