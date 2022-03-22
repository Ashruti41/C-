#include<iostream>
using namespace std;

template<class T,int N>
class mySequence{
    T memblock[N];
    public:
      void setMember(int x,T value);
          T getMember(int x);
};

template<class T,int N>
void mySequence<T,N> :: setMember(int x,T value)
  {
     memblock[x] = value;
    }

template<class T,int N>
  T mySequence<T,N> :: getMember(int x){
    return memblock[x];
}

int main()
{
  mySequence<int , 5>m1;
  mySequence<double,10>m2;

   m1.setMember(0,100);
   m2.setMember(3,3.14);

  cout<<m1.getMember(0)<<endl;
  cout<<m2.getMember(3)<<endl;
  

 return 0;
}
     
