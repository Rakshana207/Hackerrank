//AUTHOR:K.Rakshana DATE:17-8-23
//functions
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d)
{
    int max1,max2,max3;
    max1=max(a,b);
    max2=max(max1,c);
    max3=max(max2,d);
    return max3;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}