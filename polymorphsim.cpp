#include<iostream>
#include<string.h>
using namespace std;
class Person
{
        string name;
        int age;
    public:
        Person(){}
        Person(string n,int a)
        {
            name=n;
            age=a;
        }

        Person elder(Person P)
        {
            if(age>P.age)
            {
                return *this;
            }
            else
            {
                    return P;
            }
        }
        void show()
        {

            cout<<name<<" age is greater"<<endl;
        }
};
int main()
{
    Person P1("Ram",28),P2("Shyam",90),P3;
    P3=P1.elder(P2);
    P3.show();
return 0;
}
