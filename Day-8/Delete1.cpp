#include <iostream>
using namespace std;

int main(){
    //declaration of variables
    int *ptr1,*ptr2,sum;
    
    //allocated memory space using new operator
    ptr1 = new int;
    ptr2 = new int;
    
    cout<<"ENter first number: ";
    cin>>*ptr1;
    cout<<"Enter second number: ";
    cin>>*ptr2;
    sum = *ptr1 + *ptr2;
    cout<<"Sum of the variables: "<<sum<<endl;
    
    //delete pointer variables
    delete ptr1;
    delete ptr2;
    return 0;
}
