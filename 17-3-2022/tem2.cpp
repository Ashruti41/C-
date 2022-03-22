#include<iostream>
using namespace std;

template <class T,class U> // here we also take <typename T, typename U> or <typename T, class U>
void multiply(T num1, U num2){
    cout<<"result "<<num1*num2<<endl;
}

int main(){
     int a= 11, b =20;
     double x = 2.2, y = 2.7;
     

     multiply(a,b);
     multiply(x,y);
    

     multiply(a,y);
return 0;
}
