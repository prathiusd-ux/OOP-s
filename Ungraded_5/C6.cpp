// Design a class Book with attributes title, author, and price. Provide
// constructor overloading to allow creating:

#include <iostream>
#include <string>
using namespace std;
class Book{
    private:
    string title;
    string author;
    float price;
    public:
    Book(string titl){
        this->title=titl;
        price=0.0;        
    }
    Book(string titl, string auth){
        this-> title=titl;
        this-> author=auth;
        price=0.0;    
    }
    Book(string titl, string auth, float prc){
        this-> title=titl;
        this->author=auth;
        this->price=prc;
    }
    void display(){
        cout<<"Title: "<<title<<endl<<"Author: "<<author<< endl<< "Price: "<< price<<endl;
    }
};


int main(){
    Book b1("Ends with US");
    b1.display();
    Book b2("Ends with US", "Hoover");
    b2.display();
    Book b3("Ends with US", "Hoover", 500.00);
    b3.display();
}