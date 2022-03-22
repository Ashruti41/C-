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

class C: public A
{
public:
void displayC(){
 cout<<"3"<<endl;
}
};

class D: public B
{
public:
void displayD(){
 cout<<"4"<<endl;
}
};

class E: public A,public B
{
public:
void displayA(){
 cout<<"5"<<endl;
}
};

class F: public E
{
public:
void displayA(){
 cout<<"6"<<endl;
}
};

int main()
{
A a;
B b;
C c;
D d;
E e;
F f;
a.displayA();
b.displayB();
//e.displayE();
return 0;
}
