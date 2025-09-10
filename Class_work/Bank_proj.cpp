#include <iostream>
#include <string>
using namespace std;
class state_bank{
    private:
        string name;
        int account_nu;
        float bal;
    public:
    //static variable declared below
    static float total_balance;        //format: static datatype variable name;
        //constructor
        state_bank(string n, int a, float b){//Static variables are useful for storing data that should be shared across all objects of a class.
            this-> name=n;
            this-> account_nu=a;
            this->bal=b;
            this->total_balance=total_balance+b;
            
            
        }
        
        void get_details(void){
            cout<<"Name: "<< this->name<<endl<<"Account number: "<<this-> account_nu<<endl<<" Balance: "<<this-> bal<<endl;
             cout<<total_balance<< " is the total balance"<<endl;
        }
};

float state_bank :: total_balance=0; //class variable (because this is common to all objects)
int main(){
    state_bank a1("Prathi", 656589, 3000);
    a1.get_details();
    state_bank a2("Sribala", 897586, 6000);

    a2.get_details();
    
}