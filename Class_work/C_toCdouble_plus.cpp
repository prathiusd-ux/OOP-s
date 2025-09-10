// #include <stdio.h>
// #include <string.h>
// struct details{//cannot write a function inside the struc in c
//     int roll_no;
//     char str[10];
//     float marks;
// };
// void updat_marks(struct details *x){
//     int i;
//     printf("enter the new mark: ");
//     scanf(%d,&i);
//     x->marks=i;
// }
// int main(){
//     struct details s1={"sai", 18,55.4};
//     printf("name:%s roll_no %d marks %f roll no ", s1.str,s1.marks,s1.roll_no);
//     update_marks(&s1);
//     printf("updated things: name:%s roll_no %d marks %f roll no ", s1.str,s1.marks,s1.roll_no);
//     s1.marks=200;
//     printf("name:%s roll_no %d marks %f roll no ", s1.str,s1.marks,s1.roll_no);

//     return 0;
// }

#include<iostream>
#include <string>
using namespace std;

class details{
    // public://to use it in a different function
    private://only accessed by the class for using it internationally u need public:
    int roll_no;
    float marks;
    string name;
    public:
    void set_value(int rn, float mr,string nm){
        roll_no = rn;
        marks = mr;
        name=nm;
    }
    void get_value(void){
        cout<<"name: "<<name <<"roll_number: "<< roll_no<< "marks: "<< marks<<endl;
    }
};

int main(){
    details d1;
    d1.set_value(34,78.9,"sai");
    d1.get_value();
}