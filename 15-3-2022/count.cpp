#include<iostream>
#include<fstream>
using namespace std;

int main()
{
      fstream fin;
      int count=0;
      char word[30];

      fin.open("data.txt");
  if(!fin)
      cout<<"file did not open"<<endl;
else{
      while(!fin.eof())
     {
           fin>>word;
           count++;
     }
  
    }
      cout<<"total words: "<<count<<endl;
      fin.close();
}
