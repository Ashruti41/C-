#include<iostream>
#include<fstream>
using namespace std;

int main()
{
     fstream fp;
     char buf[100];
     int pos;

     fp.open("data2.txt");//,ios::out|ios::ate);
     cout<<"Writing to a file"<<endl;
     fp<<"line one "<<endl;
     fp<<"line two "<<endl;
     
     pos = fp.tellp();
     cout<<"current position: "<<pos<<endl;
     fp.seekp(-7,ios::cur);
     fp<<endl<<"random data";
     fp.seekp(10,ios::beg);

     fp<<"hello world";
     fp.close();
     cout<<"Done writing."<<endl;
     fp.open("data2.txt");
     cout<<"Reading the file"<<endl;
     fp.seekg(0);
     while(fp.getline(buf,100))
     cout<<buf<<endl;
     pos = fp.tellg();
    cout<<"pos pointer is at: "<<pos<<endl;
return 0;
}
