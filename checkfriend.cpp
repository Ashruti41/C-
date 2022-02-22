#include<iostream>
using namespace std;

class Complex
{
  int real,img;

   public:
      Complex(){
       real=0;
       img = 0;
      }

     //parameter const
      Complex(int x,int y){
       real= x;
       img =y;
      }

     //display
      void Display(){
      cout<<"The value for real part: "<<real<<" and imginary part: "<<img<<endl<<endl;
      }

      friend Complex operator %(Complex obj1,Complex obj2);
};

       Complex operator ^(Complex obj1,Complex obj2){
          Complex temp;
          temp.real = obj1.real ^ obj2.real;
          temp.img = obj1.img ^ obj2.img;
          return temp;
        }
     int main(){
      
     Complex c1(1,1),c2(5,10);
     Complex c3;
     c1.Display();
     c2.Display();
     c3.Display();

    cout<<"The action stars here: "<<endl;
      c3 = c1 ^ c2;
       c3.Display();

return 0;
}   
