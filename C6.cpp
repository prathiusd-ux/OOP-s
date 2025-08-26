
//  6. Print the digits of a number in reverse order using a do-while loop.
#include <iostream>
using namespace std;
int main(){
    int n;
        cout<<"enter the number that needs to be reversed: ";
        cin>>n;
        int rev=0;
    do{
        
        int x=n%10;
        rev=rev*10+x;
        n=n/10;
        

    }while(n!=0);
    cout<<rev;
    