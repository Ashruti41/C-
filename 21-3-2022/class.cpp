#include<iostream>
using namespace std;

template <class T1,class T2>
class sample{
    T1 a; 
     T2 b;

   public:
    void fun(const T1 &x, const T2 &y){
      static int i=10,j=20;
     cout<<++i<<" "<<++j<<endl;
     return;
}
    void getdata(){
     cout<<"Enter A & B"<<endl;
     cin>>a>>b;
  }

  void display(){
   cout<<"the values: "<<endl;
  cout<<"a: "<<a<<" b: "<<b<<endl;
 }
};

int main()
{
 sample<int,int>s1;
 sample<int, double>s2;
 sample<double,double>s3;
 cout<<"integer data: "<<endl;
 s1.fun(2,3);
 s1.getdata();
 s1.display();

 s1.fun(4,5);
 //s1.getdata();
 s1.display();

 s1.fun(5,6);
//s1.getdata();
 s1.display();

  cout<<"int and double data: "<<endl;
  s2.getdata();
  s2.display();

  cout<<"Double and double data: "<<endl;
 
  s3.getdata();
  s3.display();
 
return 0;
}
