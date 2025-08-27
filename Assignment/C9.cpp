#include <iostream>
#include <string>
using namespace std;

class Temprature{
    private:
    float celsius;
    public:
    void setCelsius(float oC){
        celsius=oC;

    }
    float getFahrenheit(void){
        cout<<((1.8)*celsius)+32;
    }
};

int main(){
    Temprature s1;
    s1.setCelsius(55);
     cout << "Fahrenheit: " << s1.getFahrenheit() << endl;
}