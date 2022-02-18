//this is for time and date
#include<iostream>
#include<ctime>
using namespace std;

class Time
{
  private:
  int hours;
  int minutes;
  int seconds;

 public:
     void setTime(){
        time_t now = time(0);
        tm *local_Time = localtime(&now);
        hours = local_Time->tm_hour;
        minutes =local_Time->tm_min;
        seconds =local_Time->tm_sec;
       }
       Time getTime()
       {
           cout<<"Current Time = "<<hours<<":"<<minutes<<":"<<seconds;
       }
       Time sleepTime(int h,int m,int s)
       { 
        cout<<"\nsleep time is:"<<h-hours<<":"<<m-minutes<<":"<<s-seconds<<"\n";
        }
};

class Date
{
  public:
   int d,m,y;
   void setDate(){
    time_t now = time(0);
    tm *local_time = localtime(&now);
    d = local_time->tm_mday;
    m = 1+local_time->tm_mon;
    y = 1900+local_time->tm_year;  
   }
    Date getDate()
    {
       cout<<d<<"/"<<m<<"/"<<y;
    }
    Date setDob(int day,int month,int year){
       Date obj;
       obj.d = day;
       obj.m = month;
       obj.y = year;
      return obj;
     }
   Date findAge(int birth)
   {
     Date obj;
     obj.setDate();
     cout<<"\nDifference is "<<endl;
     cout<<"\nDate: "<<obj.y-birth<<endl;
  }
     
};
 



int main(){
 
  Time obj1;
 obj1.setTime();
 obj1.getTime();
 obj1.sleepTime(11,2,2);

 Date ob1,ob2;
 ob1.setDate();
 ob1.getDate();

 ob2 = ob2.setDob(04,01,2001);
 cout<<"\nSetting Dob is:";
 ob2.getDate();

 Date ob3;
ob3=ob3.findAge(2001);
return 0;
}
      
