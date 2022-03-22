#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class student{

public:
       int roll;
       char name[25];
       float marks;
     string str;
    void getdata(){
       cout<<"enter roll no and name"<<endl;
       cin>>roll>>name;
       cout<<"marks"<<endl;
       cin>>marks;
      }
  void display(){
      fstream f;
      student s;
      
      f.open("student.dat",ios::in|ios::binary);
         while(!f.eof()){
           //while(f>>str){
     f.read((char *)&s, sizeof(s));
      
      cout<<"Roll: "<<s.roll<<endl<<"Name: "<<s.name<<endl<<"Mark: "<<s.marks<<endl;
}
//}
 
      f.close();
     }
};

int main(){
student s;
s.display();
//s1.display();
}
       
