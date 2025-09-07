// Write a C++ program with a class Time having data members hours,
// minutes, seconds.


#include <iostream>
#include <string>

using namespace std;
class Time{
    private:
    int hours;
    float minuites;
    float seconds;
    public:
    Time(){
        hours=0;
        minuites=0;
        seconds=0;
    }
    Time(int hrs, float min){
        hours=hrs;
        minuites=min;
    }
    Time(int hrs, float min, float sec){
        hours=hrs;
        minuites=min;
        seconds=sec;
    }
    void display(void){
        cout<<"Hours: "<< hours<<endl<<"Minuites: "<<minuites<<endl<<"Seconds: "<<seconds<<endl;
    }
};

int main(){
    Time t1;
    t1.display();
    Time t2(3,45);
    t2.display();
    Time t3(3,45,33);
    t3.display();
    
}