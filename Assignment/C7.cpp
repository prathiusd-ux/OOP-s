#include <iostream>
#include <string>
using namespace std;
class Circle{
    private:
    float radius;
    public:
    void set_values(float r){
        radius = r;
    }
    float get_values(){
        return radius;
    }
    float get_area(){
        float r=get_values();
        return 3.1415*r*r;
    }

};
int main(){
    Circle c1;
    c1.set_values(5.0);
    cout << "Radius: " << c1.get_values() << endl;
    cout << "Area: " << c1.get_area() << endl;
}