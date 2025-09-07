// Create a class Distance with data members feet and inches. Imple-
// ment constructors for:

// • Default initialization.
// • Initialization using feet only.
// • Initialization using feet and inches.
// Also, write a function to display the distance.



#include <iostream>
#include <string>
using namespace std;
class Distance{
    private:
    float feet;
    float inches;
    public:
    Distance(){
        feet=0.0;
        inches=0.0;

    }
    Distance(float ft){
        this->feet=ft;
    }
    Distance(float ft, float inch){
        this->feet=ft;
        this-> inches=inch;
    }
    void display(){
        cout<<"Feet: "<< feet<< endl<< "Inches: "<< inches<<endl;
    }
};

int main(){
    Distance d1;
    d1.display();
    Distance d2(51.0);
    d2.display();
    Distance d3(51.0, 87.3);
    d3.display();
}