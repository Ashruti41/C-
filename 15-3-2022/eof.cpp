#include<iostream>
#include<fstream>
using namespace std;

int main()
{
fstream input;
string str,str2;
input.open("data.txt");
if(!input)
cout<<"file did not open"<<endl;
else{
	
while(!input.eof())
{
while(input>>str){
cout<<str<<"\t"<<str2<<endl;
}
}
}
input.close();
}
