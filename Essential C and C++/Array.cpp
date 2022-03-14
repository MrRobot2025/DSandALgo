#include<iostream>
using namespace std;
int main()
{
    int A[5] = {1,2,3,4,5};
    int B[] = {1,2,3,4,5,4,3,2,1};   //can be used for array of any size
    int C[5] = {};
  

    int n = sizeof(A)/sizeof(A[0]);
    printf("%d\n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",C[i]);
    }
    
   
    return 0;

}