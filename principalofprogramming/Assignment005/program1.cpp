/*
1.Create overloaded functions to manipulate strings in different ways:
i. concatenation,
ii. repetition,
iii. substring extraction,
iv. case conversion
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Concatenation
string strOp(string a,string b){ return a+b; }
// Repetition
string strOp(string s,int n){ string r=""; while(n--) r+=s; return r; }
// Substring extraction
string strOp(string s,int pos,int len){ return s.substr(pos,len); }
// Case conversion
string strOp(string s,bool toUpper){
    for(char &c:s) c= toUpper? toupper(c):tolower(c);
    return s;
}

int main(){
    cout<<strOp("Hello","World")<<endl;          // concat
    cout<<strOp("Hi",3)<<endl;                   // repeat
    cout<<strOp("OpenAI",0,4)<<endl;             // substring
    cout<<strOp("ChatGPT",true)<<endl;           // to upper
    cout<<strOp("ChatGPT",false)<<endl;          // to lower
}
/*
---output---
HELLO
HiHiHi
Open
CHATGPT
chatgpt
*/