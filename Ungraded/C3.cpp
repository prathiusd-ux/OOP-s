#include <iostream>
#include <string>

using namespace std;
class Book{
    private:
    string title;
    float price;
    public:
    void set_values(string tit, float prce){
        title=tit;
        price=prce;
    }
    void get_values(void){
        cout<<"Name of the book is: "<<title<<endl<<" Price of the book is: "<<price<<endl;
    }
};

int main(){
    Book b1;
    b1.set_values("strangers", 50.06);
    b1.get_values();
}
