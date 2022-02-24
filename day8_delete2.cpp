#include <iostream>
using namespace std;

class A{
    public:
    int i,j;
    A(){
    cout<<"inside the const \n";
    i=0;
    for(i=0;i<5;i++)
    {
        cout<<i;
    }
    }
};

int main(){
    //declaration of variables
    int *ptr1,*ptr2,sum;
    
    A a1,*a2;
  //  int arr[5]={0};
    //A a[5];
    //allocated memory space using new operator
    ptr1 = new int;
    ptr2 = new int [5];
    
    a2 = new A [5];

    //delete pointer variables
    delete ptr1;
    delete ptr2;
    return 0;
}
