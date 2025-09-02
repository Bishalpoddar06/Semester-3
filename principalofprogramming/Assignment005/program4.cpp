/*
Create overloaded functions to calculate area and perimeter for different geometric shapes such as circle, rectangle,
 triangle using different parameter combinations.
*/
#include <iostream>
#include <cmath>
using namespace std;

// Circle (r)
void calc(double r){
    cout << "Circle Area=" << M_PI*r*r << " Perimeter=" << 2*M_PI*r << endl;
}
// Rectangle (l,b)
void calc(double l,double b){
    cout << "Rectangle Area=" << l*b << " Perimeter=" << 2*(l+b) << endl;
}
// Triangle (a,b,c)
void calc(double a,double b,double c){
    double s=(a+b+c)/2, area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "Triangle Area=" << area << " Perimeter=" << a+b+c << endl;
}

int main(){
    calc(5.0);          
    calc(4.0,6.0);      
    calc(3.0,4.0,5.0);  
}

/*
---OUTPUT---
Circle Area=78.5398 Perimeter=31.4159
Rectangle Area=24 Perimeter=20
Triangle Area=6 Perimeter=12
*/