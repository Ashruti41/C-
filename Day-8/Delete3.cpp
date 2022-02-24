#include <iostream>
using namespace std;

class A{
    public:
    int i,j;
    A(){
    cout<<"inside the const \n";
    i=0;
    j=0;
    }
    ~A(){
        cout<<"inside the Disturctor"<<"\n";
    }
};

int main(){
    //declaration of variables
    int *ptr1,*ptr2,sum;
    A a1,*a2,*a3;
    ptr1 = new int;
    cout<<"size of[a1]= "<<sizeof(a1);
    a2 = new A [5];
    a3 = new A;
    a3 = NULL;

    //delete pointer variables
    free(ptr1);
    delete [] a2;
    delete a3;
    
    char *c = (char *)malloc(sizeof(char)*5);
    delete c;
    //free(c);
    return 0;
}
