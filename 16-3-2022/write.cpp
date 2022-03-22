#include<iostream>
#include<fstream>
using namespace std;

class student{
      public:
       int roll;
       char name[25];
       float marks;

  void getdata(){
       cout<<"enter roll no and name"<<endl;
       cin>>roll>>name;
       cout<<"marks"<<endl;
       cin>>marks;
      }
  void AddRecord(){
      fstream f;
      student stu;
      f.open("student.dat",ios::app|ios::binary);
      stu.getdata();
      f.write((char *)&stu, sizeof(stu));
      f.close();
     }
   void display(){
      fstream f;
      student s;
      f.open("student.dat",ios::in|ios::binary);
      f.read((char *)&s, sizeof(s));
 
      cout<<"Roll: "<<s.roll<<endl<<"Name: "<<s.name<<endl<<"Mark: "<<s.marks<<endl;
      f.close();
     }
};

int main()
{
 student s;
 char ch='n';
do{
 s.AddRecord();
cout<<"want add more?(y/n)"<<endl;
cin>>ch;
}while(ch=='y'||ch=='Y');
cout<<"updated!!!"<<endl;
s.display();
 
return 0;
}
 
