//hybrid inheritant
#include<iostream>
using namespace std;

class car{
    public:
    void disp1()
    {
        cout<<"car class"<<endl;
    }
};
class fuelcar: public car
{
    public:
    void disp2()
    {
        cout<<"fuelcar class"<<endl;
    }
};

class electriccar: public car
{
    public:
    void disp3()
    {
        cout<<"electriccar class"<<endl;
    }
};

class hybridcar: public fuelcar,public electriccar
{
    public:
    void disp4()
    {
        cout<<"hybridcar class"<<endl;
    }
};

int main()
{
    car c;
   // c.disp1();
    fuelcar f;
    //f.disp2();
    //f.disp1();
    electriccar e;
   // e.disp3();
   // e.disp1();
    hybridcar h;
    h.disp4();
    h.disp3();
    h.disp2();
   // h.disp1();
    return 0;
}
