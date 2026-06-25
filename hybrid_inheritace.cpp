#include<iostream>
using namespace std ;
class A {
public :
 A() {
    cout <<"A is good " <<endl ;

 }
} ;
 class B : virtual  public A {
    public :
    B(){
        cout<<"B is nice" <<endl ;
    }
};

class C : virtual public A {
    public :
    C(){
        cout<<"C is bad " <<endl ;

    }
};

class D : public B , public C {
    public :
    D(){
        cout<< "D is Danger " << endl ;

    }
};

int main() {
    D d;
    return 0 ;

}