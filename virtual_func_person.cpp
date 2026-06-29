#include<iostream>
using namespace std ;
class Person {
public:
    virtual void work() {
        cout << "Person works"  <<endl ;
    }
};

class Doctor : public Person {
public:
    void work() override {
        cout << "Doctor treats patients"  <<endl;
    }
};

class Teacher : public Person {
public:
    void work() override {
        cout << "Teacher teaches students" <<endl ;
    }
};

int main() {
    Person* p ;
    Doctor d ;
    Teacher t ;

    p =&d ;
    p->work() ;

    p = &t ;
    p->work() ;
return 0 ;

}