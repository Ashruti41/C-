#include<iostream>
using namespace std;

class convert{
    protected:
    double val1;
    double val2;
    public:
    convert(double i){
        val1 = i;
      }
     double getconv()
    {
       return val2;
    }
    double getinit(){
      return val1;
     }
    virtual void compute()=0;
};

//liters to gallons

class l_to_g:public convert{
     public:
      l_to_g(double i):convert(i){}
      void compute(){
      val2=val1/3.7854;
       }
};

class f_to_c:public convert{
      public:
      f_to_c(double i):convert(i){}
      void compute(){
      val2=(val1-32)/1.8;
       }
};

int main(){
      convert *p;
      l_to_g lgob(4);
      f_to_c fcob(70);

      p=&lgob;
      cout<<"liters = "<<p->getinit()<<endl;
      p->compute();

      cout<<"gallons= "<<p->getconv()<<endl;
      p=&fcob;
     
      cout<<"in fahrenheit is "<<p->getinit()<<endl;
      p->compute();
      cout<<"Celsius= "<<p->getconv();
return 0;
}
