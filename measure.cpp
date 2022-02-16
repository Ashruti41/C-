#include<iostream>
using namespace std;

class Measure{
 public:
 
      int input1,input2,input3;

      void setInput(int h,int l,int w)
      {
          input1 = h;
          input2 = l; 
          input3 = w;
       }

      int area(){
         return input2*input3;
      }
      int volume(){
          return input1*input2*input3;
    }
};

 int main()
{
     Measure obj1;
     obj1.setInput(2,3,4);
     cout<< "The input is:" <<obj1.input1<<" "<<obj1.input2<<" "<<obj1.input3<<endl;
     cout<< "The area of the input is:" <<obj1.area()<<"\n";
     cout<< "The volume of the input is: "<<obj1.volume();
return 0;
}
