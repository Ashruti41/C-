// public,private,protected check
/*1. both public then output is correct
2.add= public and mul= private (error)
3.add=public and mul= protected (error)
4.add=private and mul=private (error)
5.add=private and mul = protected (error)



*/
#include<iostream>
using namespace std;

class Calculator{

 public:
   int input1;
   int input2;
 
  void setInput(int a, int b){
   input1 = a;
   input2 = b;
      }
   // int add(){
     // mul();
    //return input1+input2;
     }
     int sub(){
       return input1-input2;
      }
      //int mul(){
       //return input1*input2;
      //}
      int div(){
       return input1/input2;
      }
 /*  int add(){
      mul();
    return input1+input2;
     }
    private:
     int mul(){
       return input1*input2;
      }
    */
/*
     int add(){
      mul();
    return input1+input2;
     }
    protected:
     int mul(){
       return input1*input2;
      }
*/
/* private:
    int add(){
      mul();
    return input1+input2;
     }
     int mul(){
       return input1*input2;
      }
*/
 
/* protected:
    int add(){
      mul();
    return input1+input2;
     }
     int mul(){
       return input1*input2;
      }
*/
    
};
 
int main()
{
  Calculator obj1;
  obj1.setInput(10,2);

  cout<<"The inputs: "<<obj1.input1<<" "<<obj1.input2<<endl;
  cout<<"The sum of the input is:"<<obj1.add();
  cout<<"\nThe sub is: "<<obj1.sub()<<"\n";
  cout<<"The mul is: "<<obj1.mul()<<"\n";
  cout<<"The div is: "<<obj1.div()<<"\n";

return 0;
}
