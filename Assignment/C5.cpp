#include <iostream>
#include <string>
using namespace std;
class Employee{
    private:
    int ID;
    float salary;
    public:
    void set_values(int id, float sal){
        ID=id;
        salary=sal;
    }
    void get_values(void){
        cout<<"ID: "<< ID<< " Salary: "<< salary<<endl;
    }
};

int main(){
    Employee e1[3];
    e1[0].set_values(1,50000.89);
    e1[1].set_values(2,65000);
    e1[2].set_values(3,40500.67);
    for(int i=0; i<3; i++){
        e1[i].get_values();
    }
    
}