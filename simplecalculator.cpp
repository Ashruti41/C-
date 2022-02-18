//Program for Simple Calculator
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
     
};

 int main()
{
  Calculator obj1;
  char op;
  obj1.setInput(10,2);
  cout<< "The input is: "<<obj1.input1<<" "<<obj1.input2<<endl;
  cin>>op;

  switch(op){
   case '+':
   cout<< "The sum is: "<<obj1.add()<<"\n";
   break;

   case '-':
  cout<< "The sub is: "<<obj1.sub()<<"\n";
   break;
 
   case '*':
   cout<< "The mul is: "<<obj1.mul()<<"\n";
   break;

   case '/':
  cout<< "The div is: "<<obj1.div()<<"\n";
  break;

   case '%':
  cout<< "The mod is: "<<obj1.div()<<"\n";
  break;

  default:
  cout<<"Error!";
  break;
}

 return 0;
}
