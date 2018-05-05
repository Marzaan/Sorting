#include<bits/stdc++.h>
using namespace std;
int Min(int A[],int j,int n)
{
    int min,loc,i;
    min=A[j];
    loc=j;
    for(i=j+1; i<=n; i++)
    {
        if(A[i]<min)
        {
            min=A[i];
            loc=i;
        }
    }
    return loc;
}
void selection_sort(int A[], int n)
{
    int j,loc,temp,i;
    for(j=1; j<=n-1; j++)
    {
        loc=Min(A,j,n);
        temp=A[j];
        A[j]=A[loc];
        A[loc]=temp;
    }

}
int main()
{
    int A[1000],n,loc,j,temp,i;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &A[i]);
    }
    selection_sort(A,n);
    for(i=1; i<=n; i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
