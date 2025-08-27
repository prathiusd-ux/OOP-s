#include <iostream>
#include <string>
using namespace std;

class University{
    private:
    string name;
    int rank;
    public:
    void set_values(string nm, int rnk){
        name=nm;
        rank=rnk;
    }
    void get_values(void){
        cout<<"name is: "<<name<<endl<<"rank is: "<<rank;
    }
};

int main(){
    University s1;
    s1.set_values("Prathi", 10);
    s1.get_values();

}
