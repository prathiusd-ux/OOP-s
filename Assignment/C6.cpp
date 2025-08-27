

#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
    string brand;
    int model;
    public:
    void set_values(string brnd, int mod){
        brand=brnd;
        model=mod;
    }
    void get_values(void){
        cout<<"Brand: "<<brand<<" model: "<< model;
    }

};
int main(){
    Car CarA[2];
    CarA[0].set_values("Honda CR-V", 2016);
    CarA[1].set_values("Toyota Corolla", 2019);
    for(int i=0; i<2;i++){
        CarA[i].get_values();
    }
}