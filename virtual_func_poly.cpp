#include<iostream>
#include<string.h>
using namespace std ;
class Animal {
    public :
virtual void sound(){                // sound() is virtual function and it calls Dogs .
    cout<<"Animal Is Danger " <<endl ;
}
};

class Dog : public Animal {
    public :
    void sound() override {
        cout<< "Dogs Bark at Aarush " << endl ; 
    }
};
int main() {
    Animal* a= new Dog() ;
    a->sound() ;
    delete a ; 

}