#include<iostream>
using namespace std;

int * CreateDynamicArray(int n)
{
    int *p =new int[n];

    return p;
}
void UpdatingvalueinArray(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        A[i]=i+1;
    }
}
void PrintingArray(int *A,int n )
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int *ptr = CreateDynamicArray(10);
    PrintingArray(ptr,10);
    UpdatingvalueinArray(ptr,10);
    PrintingArray(ptr,10);

    return 0;
}