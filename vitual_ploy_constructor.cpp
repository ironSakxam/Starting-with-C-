#include<iostream>
using namespace std ;
class Person{
public :
   Person() {
    cout <<"Person constructor called :" <<endl ;
   }
  virtual  void work() {
    cout <<" Worked  " <<endl ;
 }
};

class Teacher : public Person {
    public :
 Teacher() {
    cout<<"Teacher constructer " <<endl ;
}
    void work()  override {
        cout <<"Teacher Worked "  <<endl ;

    }
};

int main() {
    Teacher t ;
   t.work() ;
return 0 ;
}