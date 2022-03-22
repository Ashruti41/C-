#include<iostream>
using namespace std;

class Test
{
  int mark;
  float spi;
  public:
  void SetData()
  {
    this->mark = 70;
    this->spi=6.5;
  }
  void Display(){
    cout<<"mark= "<<mark<<endl;
    cout<<"SPI= "<<spi;
   }
 /*Test operator +(Test ob2){
  this->mark = mark+ ob2.mark;
  return *this;
}*/
};

int main()
{
  /*Test t,ob2,o3;
  o3 = t.operator +(ob2);*/
  t.SetData();
  t.Display();
}
