#include<iostream>
#include<fstream>
using namespace std;

int main()
{
fstream fin,fout;
fin.open("data.txt");
fout.open("data1.txt");

string str;
while(getline(fin,str)){
fout<<str<<endl;
}
cout<<"copy done!!"<<endl;
fin.close();
fout.close();
}
