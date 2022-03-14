#include<iostream>
using namespace std;

// int sum(int a, int b);
// int * fun(int n)
// {
//     int *p = new int[n];
//     return p;
// }
int * game(int *A,int n)
{
    for (int i = 0; i < n; i++)
    {
        A[i] = i;
    }

    return 0;
    
}



int main()
{
    // int *q;
    // q = fun(5);
    // for (int i = 0; i < 5; i++)
    // {
    //    cin>>q[i];
    // }
    
    // for (int i = 0; i < 5; i++)
    // {
    //    cout<<q[i]<<" ";
    // }
    
    int B[5]={2,2,2,2,2};
    game(B,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<B[i]<<" ";
    }


    return 0;
}

// int sum(int a, int b)
// {
//     return a + b;
// }