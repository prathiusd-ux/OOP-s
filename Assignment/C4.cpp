// Create a class Rectangle with private data members length and width.
//  Write setter and getter methods and calculate the area using them.


#include <iostream>
#include <string>
using namespace std;
class Rectangle{
    private:
    float length;
    float width;
    public:
    void set_values(float len, float wid ){
        length=len;
        width=wid;
    }
    void get_values(void){
        cout<<length*width<<": is the area of the rectangle"<<endl;

    }

};

int main(){
    Rectangle r1;
    r1.set_values(10.58,9.9);
    r1.get_values();
}