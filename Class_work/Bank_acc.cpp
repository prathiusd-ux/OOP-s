#include <iostream>
#include <string>
using namespace std;

class bank_Account{
    private:
    string name;
    float balance;
    //topic is called encapsulation
    public:
    bank_Account (string n1, float n2){
        this->name =n1;
        this->balance=n2;

    }
    void get_values(void){
        cout<<"Name is: "<< name<<endl<<"Balance is: "<< balance;
    }
    //deposit method
    void deposit(float n1){
        this->balance=this-> balance+n1;
    }
    //widthdrwal
    void width(float n2){
        float temp=balance;
        if (temp<=0){
            cout<<"low balance"<<endl;
        }
        else{
            this->balance=this-> balance-n2;
        }
    }
};

int main(){
    bank_Account b1("Prathi", 5000);
    // b1.set_values("Prathi", 5000.89);
    b1.deposit(500);
    b1.get_values();
    
}