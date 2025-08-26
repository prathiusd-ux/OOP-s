// 4. Find the sum of the first N natural numbers (input N) using a for loop.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n (the number u want to find the sum of)";
    cin>>n;
    int sum=0;
    int total;
    for(int i=0;i<=n;i++){
        
        sum+=i;
        
    }
    total+=sum;
    cout<<total;
}
