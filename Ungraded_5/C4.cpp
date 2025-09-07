// Implement a class BankAccount with data members accountNumber,
// balance.

#include <iostream>
#include <string>
using namespace std;
class BankAccount{
    int Acc_num;
    float balance;
    public:
    BankAccount(){
        Acc_num=0;
        balance=0;
    }
    BankAccount(int ac_num){
        Acc_num=ac_num;

    }
    BankAccount(int ac_num, float bal){
        Acc_num=ac_num;
        balance=bal;

    }
    void display(void){
        cout<<"Account number: "<<Acc_num<<endl<<"Balance: "<<balance<<endl;
    }
};

int main(){
    BankAccount b1;
    b1.display();
    BankAccount b2(506062);
    b2.display();
    BankAccount b3(506062,58735.43);
    b3.display();
}