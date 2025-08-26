

// 12. Use if-else with a loop: Print “Fizz” if a number is divisible by 3, “Buzz” if divisible by 5, and “FizzBuzz” if divisible by both (for numbers 1 to 50).
#include <iostream>
using namespace std;
int main(){
    bool con1=false;
    bool con2=false;
    for(int i=1;i<=50;i++){
        if(i%3==0){
            cout<<i<<"fizz"<<endl;
            con1=true;
        }
        else if(i%5==0)
        {
            cout<<i<<"buzz"<<endl;
            con2=true;
        }
        if(i%3==0 && i % 5 == 0){
            cout<<i<<" fizzbuzz"<<endl;
        }    
    }

}