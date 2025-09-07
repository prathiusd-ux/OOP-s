#include <iostream>
#include <string>
using namespace std;
class Account{
    private:
    int AccountNumber;
    float balance;
    public:
    void set_value(int acc_no, float bl){
        AccountNumber=acc_no;
        balance=bl;
    }
    void get_values(void){
        cout<<"Account number is: "<<AccountNumber<< endl<<"Balance is: "<< balance;
    }

};


int main(){
    Account s1;
    s1.set_value(58889871,500.0);
    s1.get_values();
}