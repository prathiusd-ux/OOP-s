
// 10. Print the sum of all even numbers from 1 to 100 using a for loop.
#include <iostream>
using namespace std;
int main(){
    int x=0;
    for(int i=1; i<=100; i++){
        if(i%2==0){
            cout<<i<<" is even"<<endl;
            x+=i;    
        }

    }
    cout<<"sum is: "<<x;
}