#include<iostream>
using namespace std;

class A
{
 public:
void displayA(){
 cout<<"1"<<endl;
}
};

class B 
{
  public:
void displayB(){
 cout<<"2"<<endl;
}
};

class C: public B
{
public:
void displayC(){
 cout<<"3"<<endl;
}
};

class D: public B,public C
{
public:
void displayD(){
 cout<<"4"<<endl;
}
};


int main()
{
A a;
B b;
C c;
D d;

d.displayC();
return 0;
}
