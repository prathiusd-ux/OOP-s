#include <iostream>
#include <string>
using namespace std;
class xy_coord{
    private:
    float x,y;
    public:
    void set_values(float a1,float a2);
    void get_values(void);
    //which quadrant this solution lies?
    
    // string quad(float c1, float c2){
    //     x=c1;
    //     y=c2;
    //     if (x > 0 && y > 0 ){
    //         cout<<"the location is at the 1st quadrant";
    //     }
    //     else if (x>0 && y<0){
    //         cout<<"this is in the 2nd quadrant";
    //     }
    //     else if (x>0 && y>0){
    //         cout<<"this is in 4th quadrant";
    //     }
    //     else:
    //     cout<<"3rd quaadrant"

        


    // }

    //constructor or special method
    // xy_coord(){//default constructor, mostly declared in public
    //     cout<<"hello world"<<endl;
    //     this->x=67;
    //     this->y=59;
    // }
    xy_coord(float n1, float n2){
        this->x =n1;
        this->y=n2;

    }
    xy_coord(float n3){
        this->x=n3;
        this->y=0;
    }
};
void xy_coord ::  set_values(float a1, float a2){
    this->x=a1;
    this->y=a2;
}
void xy_coord::get_values(void){
    cout<<"x: "<<this->x<<endl<<"y: "<<this->y<<endl;
}

//a constructor is a different kind of method which is named as the same of the class (class name is xy_cord)

int main(){
    xy_coord s1(5,4), s2(10,7);//created 2 objects by default the constructor is called
    // z
    s1.get_values();
    s2.get_values();
}


