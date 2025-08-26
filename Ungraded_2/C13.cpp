
//  13. Take a number as input and check if it is an Armstrong number using a while loop.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i;
    cout<<"enter the number you wanna check";
    cin>>i;
    int o=i;
    string s= to_string(i);
    int n_d= s.length();
    // cout<<n_d<<endl;//3
    int x=n_d;
    int revf=0;
    int u;
    while(x!=0){
        u=i%10;
        // cout<<u<<endl;//3(from 153)
        int rev=pow(u,n_d);
        i=i/10;
        // cout<<i<<endl;//15(from 153)  
        revf+=rev;
        cout<<revf<<endl;
        x--;
    }
    if(o==revf){
        cout<<"yes this is an amstrong number";

    }
    else{
        cout<<"this is not an amstrong number";
    }
}


