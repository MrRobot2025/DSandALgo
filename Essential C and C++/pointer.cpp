#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    /**
    int a = 10; //data variable
    int *q,*p = &a; //pointer variable
    int A[10]={2,3,4};
    p=(int *)malloc(5*sizeof(int)); //allocate heap memory to pointer variable
    q= new int[5]; //allocate heap memory to pointer variable

    //print array A
    for(int i=0;i<10;i++)
    {
        cout<<A[i]<<" ";
    }
    p=A; //assign address of array A to pointer variable p
    p=&A[0]; //assign address of array A to pointer variable p
    //printing array A using pointer variable p
    cout<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<*p<<" ";
        p++;
    }
    **/

//    int *p ;
//    p = (int *)malloc(5*sizeof(int)); //allocate heap memory to pointer variable in C way
//    p=new int[5]; //allocate heap memory to pointer variable in C++ way


//     for(int i=0;i<5;i++)
//     {
        
//         cin>>p[i]; //assign value to array
//     }
//     cout<<endl;
//     for(int i=0;i<5;i++)
//     {
//         cout<<*(p+i)<<" ";
//     }


    // free(p); //free heap memory for c 
    // delete [] p; //free heap memory for cpp

    int *p1;
    char *p2;
    float *p3;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    


    return 0;
}