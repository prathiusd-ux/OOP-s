#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
    int model;
    string brand;
    float price;

    public:
    Car(string b){
        this-> brand=b;
        model=0;
        price=0.0;

    }
    Car(string b, int mod){
        this->brand=b;
        this->model=mod;
        price=0.0;

    }
    Car(string b, int mod, float prc){
        this->brand=b;
        this->model=mod;
        this->price=prc;
    }

    void display(){
        cout<<"Hi, the cars model is: "<< model<<endl<<"Brand: "<<brand<<endl<<"Price: "<<price<<endl;
    }

};


int main(){
    Car c1("Honda");
    
    Car c2("Honda", 2016);
    
    Car c3("Honda", 2016, 700000);
    c1.display();
    c2.display();

    c3.display();
}