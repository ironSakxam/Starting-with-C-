#include<iostream>
using namespace std;
class Father
{
      protected:
         int income;
     public:
        Father(int x)
        {
            income=x;
        }
};
class Mother
{
     protected:
        int income;
    public:
        Mother(int x)
        {
            income=x;
        }
};
class Child:public Father, public Mother
{
        float expenses;
     public:
        Child(int x, int y):
        Father(x),Mother(y)
        {
        }
        void calc()
        {
             expenses = Father::income*0.25+Mother::income*0.15;
            cout<<"Expenses = "<<expenses<<endl;
        }
};
int main()
{
   Child C(50000,25000);
   C.calc();
return 0;
}
