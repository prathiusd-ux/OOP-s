#include <iostream>
#include <string>
using namespace std;
class temple_run{
    private:
    int score;
    public:
    void left(void);
    void right(void);
    void get_score(void);
    temple_run(){
        this->score=0;
        cout<<"Game started with score: "<<score<<endl;
    }
    //friend function
    friend void bonus(temple_run* t);
};
void temple_run::left(void){
    this->score++;

}
void temple_run::right(void){
    this->score++;
}
void temple_run:: get_score(void){
    cout<<"Your score is: " << this->score<<endl;
}
void bonus(temple_run* p6){
    // score=score+5; this line wont  work because score is a private funcrion and you can only use it using friend function
    // p6.score=p6.score+5;
    p6->score=p6->score+5;

}


int main(){
    temple_run p1;
    p1.left();
    p1.right();
    p1.get_score();
    bonus(&p1);//this is called by value not by reference, passing p1 it cretes a copy of it so you can solve it by passing a reference, w/o reference it will print 2
    p1.get_score();
    

}
