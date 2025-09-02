/* Create overloaded functions to perform mathematical operations such as add, subtract, multiply, divide,
 that work with integers, floats.
*/

#include <iostream>
using namespace std;

// Integer operations
int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }
int divi(int a,int b){ return a/b; }

// Float operations
float add(float a,float b){ return a+b; }
float sub(float a,float b){ return a-b; }
float mul(float a,float b){ return a*b; }
float divi(float a,float b){ return a/b; }

int main(){
    cout << "Int: " << add(10,5) << " " << sub(10,5) 
         << " " << mul(10,5) << " " << divi(10,5) << endl;

    cout << "Float: " << add(7.5f,2.5f) << " " << sub(7.5f,2.5f) 
         << " " << mul(7.5f,2.5f) << " " << divi(7.5f,2.5f) << endl;
}

/*
---output---
Int: 15 5 50 2
Float: 10 5 18.75 3
*/