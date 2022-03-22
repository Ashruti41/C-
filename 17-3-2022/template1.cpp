#include<iostream>
using namespace std;

template<typename T>

T sum(T n1,T n2){
   T rs;
   rs = n1 +n2;
   return rs;
}

int main()
{
  float A=10.2,B = 20.1, C;
  long a=11, b=22, c;
  
 C = sum<int>(A,B);
  cout<<"Add of int: "<<C<<endl;
  c= sum(a,b);

  cout<<"the sum of long: "<<c<<endl;
  return 0;
}

