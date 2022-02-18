//Program for Return output in object
#include<iostream>
using namespace std;

class Calculator{
 public:

    int input1,input2;
     void setInput(int a,int b)
     {
       input1 = a;
       input2 = b;
     }
      int add(){
      return input1+input2;
     }
       
      int sub(){
       return input1-input2;
      }
     int mul(){
       return input1*input2;
      }
      
      int div(){
       return input1/input2;
      }
      int mod(){
      return input1%input2;
     }
  
     Calculator add1(Calculator obj1,Calculator obj2){
       Calculator obj3;
       obj3.input1 = obj1.input1 + obj2.input2;
       return obj3;
      }
          
};

 int main()
{
  Calculator obj1,obj2,obj3;
  obj1.setInput(10,2);
 
  cout<< "The input is: "<<obj1.input1<<" "<<obj1.input2<<endl;
  cout<< "The sum is: " <<obj1.add()<<"\n";
  cout<< "The sub is: "<<obj1.sub()<<"\n";
  cout<< "The mul is: "<<obj1.mul()<<"\n";
  cout<< "The div is: "<<obj1.div()<<"\n";
  cout<< "The mod is: "<<obj1.mod()<<"\n";
 
  obj2.setInput(20,2);
  cout<< "The input is: "<<obj2.input1<<" "<<obj2.input2<<endl;
  cout<< "The sum is: "<<obj2.add()<<"\n";
  cout<< "The sub is: "<<obj2.sub()<<"\n";
  cout<< "The mul is: "<<obj2.mul()<<"\n";
  cout<< "The div is: "<<obj2.div()<<"\n";
  cout<< "The mod is: "<<obj2.mod()<<"\n";
 
  
  obj3 = obj1.add1(obj1,obj2);
  cout<<"the output:"<<obj3.input1<<"\n";

 return 0;
}
