/*
3. Create overloaded functions to process arrays of different types such as int, double, char with different operations
 i. sort, ii. reverse, iii. max/min.
*/
#include <iostream>
#include <algorithm>
using namespace std;

// Sort
void process(int a[], int n){ sort(a, a+n); }
void process(double a[], int n){ sort(a, a+n); }
void process(char a[], int n){ sort(a, a+n); }

// Reverse
void processRev(int a[], int n){ reverse(a, a+n); }
void processRev(double a[], int n){ reverse(a, a+n); }
void processRev(char a[], int n){ reverse(a, a+n); }

// Max/Min
void processMM(int a[], int n){ 
    cout << "Max=" << *max_element(a,a+n) << " Min=" << *min_element(a,a+n) << endl; 
}
void processMM(double a[], int n){ 
    cout << "Max=" << *max_element(a,a+n) << " Min=" << *min_element(a,a+n) << endl; 
}
void processMM(char a[], int n){ 
    cout << "Max=" << *max_element(a,a+n) << " Min=" << *min_element(a,a+n) << endl; 
}

// Display
template<typename T> void show(T a[], int n){ for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl; }

int main(){
    int ai[]={5,2,8,1}; double ad[]={2.5,1.1,9.3}; char ac[]={'z','b','a'};
    int ni=4, nd=3, nc=3;

    process(ai,ni); show(ai,ni);          // sort int
    processRev(ad,nd); show(ad,nd);       // reverse double
    processMM(ac,nc);                     // max/min char
}
/*
---OUTPUT---
1 2 5 8 
9.3 1.1 2.5 
Max=z Min=a
*/