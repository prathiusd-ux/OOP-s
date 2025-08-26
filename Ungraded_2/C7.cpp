
//  7. Check whether a number is prime or not using a for loop.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter the number you wanna see if is prime";
    cin>>n;
    for(int a=2; a<=sqrt(n); a++){
        if(n%a==0){
            cout<<n <<" is not prime number"<<endl;
            return 0;
        }
    
    }
    cout<<n<<" is prime";
}
