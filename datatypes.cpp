//AUTHOR:K.Rakshana DATE:15-8-23
//Data types
#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long l;
    char c;
    float f1;
    double f2;
    cin>>a>>l>>c>>f1>>f2;
    cout<<a<<endl;
    cout<<l<<endl;
    cout<<c<<endl;
    cout<<setprecision(3)<<fixed<<f1<<endl;
    cout<<setprecision(9)<<f2<<endl;
    return 0;
}