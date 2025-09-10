#include <iostream>
#include <string>
using namespace std;
class complex{
    float x;
    float y;
    public:
    static int count;
        complex(float a, float b){
            this-> x=a;
            this-> y= b;
            count++;
            cout<<"This is "<< count<< " complex number"<<endl;
        }
        void get_details(void){
            cout<<"X: "<<this-> x<<" Y: "<<this-> y<<endl;
        }
        friend void add_complex(complex a1, complex a2);
        
};
void add_complex(complex a1, complex a2){
            cout<<"sum is "<< a1.x+a2.x<<" i"<< a2.x+a2.y;
}
int complex::count=0;//class variable
int main(){
    complex c1(2,3), c2(3,4);
    c1.get_details();
    c2.get_details();
    c1.add_complex(c1,c2);
}