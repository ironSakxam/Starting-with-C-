/* Write a C++ program to demonstrate multilevel inheritance. Create a base class Animal with a method eat) .
 Derive a class Dog from Animal that adds a method bark). 
Further derive a class Puppy from Dog that adds a method play. 
In main, create a Puppy object and call all three methods.*/

#include<iostream>
using namespace std ;
class Animal {
    public :
    void Eat() {
        cout<<"Animal Eats" <<endl ;
    }
};
class Dog : public Animal {
    public :
    void bark() {
        cout<<"Dog barks" <<endl ;
    }
};
class  Puppy : public Dog {
    public : 
    void Play(){
        cout<<"Puppy plays "<<endl ;
    }
};
               int main(){
                Puppy p1 ;
                cout<<"Animal : " <<endl ;
                p1.Eat();
                p1.bark();
                p1.Play();

return 0 ;
               }