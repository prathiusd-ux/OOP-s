//2 Print the first 10 even numbers using a while loop.

#include <iostream>
using namespace std;
int main(){
    int i = 0;
    while(i<=10){
        if(i % 2 == 0) {
            cout<<i<<" is even number "<<endl;
        }
    i++;
    }