// 11 Write a program to calculate the power of a number (ab) using a while loop.
#include <iostream>
using namespace std;
int main(){
    int b,e;
    cout<<"enter the base: ";
    cin>>b;
    cout<<"enter the exponent: ";
    cin>>e;
    int i=1;
    int x=0;
    while(x<e){
        i=i*b;
        x++;
    }
    cout<<"the answer is"<<i;
}