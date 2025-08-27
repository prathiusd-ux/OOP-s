// 5. Write a program to find the factorial of a number using a while loop.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"find the factorial you want to find";
    cin>>n;
    int i=1;
    int sum=1;
    while(i<=n){
        // int fact=n*i;
        // i++;
        // sum*=fact;
        sum*=i;
        i++;
        
        
    }
    cout<<sum;
}
