//3.  Print the multiplication table of a given number using a do-while loop.
#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the number you want the multiplication table for";
    cin>>x;
    int j=1;
    do{
        for(int i=x; j<=10; j++){
            cout<<"the output is"<<i*j<<endl;
        }
    }while(j<=10);
}