#include <iostream>
#include<string>
using namespace std;

class student
{
    public:
    char name[20]="hello";
    int rollno;
    
    void get_info()
    {
        cin>>rollno;
        cout<<"Roll No.: "<<rollno<<"Name: "<<name<<endl;
    }
};

class test
{
    public:
    int marks[5],i;
    void mar(){
    for(i=0; i<5; i++)
    {
        cin>>marks[i];
        //cout<<"The marks: "<<marks[i];
    }
    //cout<<i;
    }
};

class result: public student,public test
{
    public:
    int result=0,ans;
    void total()
    {
       for(i=0; i<5; i++)
       {
        result = result + marks[i];
       }
        cout<<"total: "<<result;   
    }
    void percentage()
    {
        ans = result/500 * 100;
    }
};

int main()
{
    student s1;
    s1.get_info();
    test t;
    t.mar();
    result r1;
    r1.mar();
    r1.total();
    r1.percentage();
    return 0;
}
