#include<iostream>
#include<string.h>
using namespace std;

template <typename T,typename U>
void swap(T &num1,U &num2)
{
   U temp;
   temp = num1;
   num1 = num2;
   num2 = temp;
}

int main()
{
    int a =3,b =2;
    float x= 3.2, y=4.3;
    string w = "abc", h= "xyz";

    cout<<"before swaping : "<<endl<<a<<endl<<b<<endl;
    cout<<"before swaping : "<<endl<<x<<endl<<y<<endl;
    cout<<"before swaping : "<<endl<<w<<endl<<h<<endl;
    
    swap(a,b);
    swap(x,b);
    swap(w,h);

    cout<<"swap num1 and num2 is: "<<endl<<a<<endl<<b<<endl;
    cout<<"swap num1 and num2 is: "<<endl<<x<<endl<<y<<endl;
    cout<<"swap num1 and num2 is: "<<endl<<w<<endl<<h<<endl;
return 0;
}
