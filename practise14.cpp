//return object from function
// make class , take object of that class and return it from func and display//
#include<iostream>
#include<string>
using namespace std ;

class Student {
    public :
    string name ;
    int marks ;
};

Student createStudent(){
    Student s ;
    s.name ="Kaaley Lutey" ;
    s.marks = 69 ;
    return s ;
}
int main(){
Student s2 = createStudent() ;
cout << s2.name << endl ;
cout << s2.marks <<endl ;
}