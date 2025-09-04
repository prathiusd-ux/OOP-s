#include <iostream>
#include <string>
using namespace std;

class fraction{
    private:
    int denominator;
    int numerator;
    public:
    fraction(void){
        numerator=0;
        numerator=1;
    }
    fraction(int num){
        this->numerator=num;
        denominator=1;
        cout<<num/1<<" is the fraction"<<endl;
    }
    fraction(int num, int den){
        denominator=den;
        numerator=num;

    }
    void display(){
        cout<<numerator<<"/"<<denominator<<endl;
    }

};

int main(){
    fraction f1;
    fraction f2(5);
    fraction f3(5,3);
    f1.display();
    f2.display();
    f3.display();

}