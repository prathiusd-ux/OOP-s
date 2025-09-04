#include <iostream>
#include <string>
using namespace std;
class employee{
    private:
    string name;
    int id;
    float salary;
    public:
    employee(string na, int i_d){
        this->name=na;
        this->id=i_d;
        this->salary=0.0;
    }
    employee(string na, int i_d,float sal){
        name=na;
        id=i_d;
        salary=sal;
    }
    void display(){
        cout<<"Name: "<<name<<endl<<" ID: "<< id<< endl<<"Salary: "<<salary<<endl;
    }
};

int main(){
    employee e1("Prathi", 505342);
    e1.display();
    employee e2("Karl", 679854, 50000);
    
    e2.display();
}