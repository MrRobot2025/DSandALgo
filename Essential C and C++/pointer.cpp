#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a = 10; //data variable
    int *q,*p = &a; //pointer variable

    p=(int *)malloc(5*sizeof(int)); //allocate heap memory to pointer variable

    return 0;
}