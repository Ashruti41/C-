#include<iostream>
using namespace std;

template<class X,class U> 
  void swap(X &a, U &b)
{
    X temp;
    temp = a;
    a = b;
    b = temp;
  
}

void swap(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
  cout<<"Inside int specialization"<<endl;
}

 int main()
{
  cout<<"Inside template swap."<<endl;
  int i=10, j=20;
  double x=10.1, y=23.3;
  char a='x',b = 'y';

  cout<<"Original i,j: "<<i<<" "<<j<<" "<<endl;
  cout<<"Original x,y: "<<x<<" "<<y<<" "<<endl;
  cout<<"Original a,b: "<<a<<" "<<b<<" "<<endl;

   swap(i, j);
   swap(x, y);
   swap(a, b);

  cout<<"Swaped i, j: "<<i<<" "<<j<<" "<<endl;
  cout<<"Swaped x, y: "<<x<<" "<<y<<" "<<endl;
  cout<<"Swaped a, b: "<<a<<" "<<b<<" "<<endl;
return 0;
}
