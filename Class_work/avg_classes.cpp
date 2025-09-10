#include <iostream>
#include <string>
using namespace std;
class avge{//can write a function inside class in c++
    private:
    float m1;
    float m2;
    float m3;
    float m4;
    float m5;
    public:
    void set_values(float s1,float s2, float s3, float s4, float s5){
        m1=s1;
        m2=s2;
        m3=s3;
        m4=s4;
        m5=s5;

    }
    void get_values(void){
        cout<<(m1+m2+m3+m4+m5)/5;
    }
};

int main(){
    avge f1;
    f1.set_values(50,51.5,52.5,53,54);
    f1.get_values();
}


//name, city,state highest mark