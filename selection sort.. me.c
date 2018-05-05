#include<stdio.h>
int main ()
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    selection(a,n);
    return 0;
}
int min(int a[],int i,int n)
{
    int temp,j,loc;
    temp=a[i];
    loc=i;
    for(j=i+1;j<=n;j++){
        if(a[j]<temp){
            temp=a[j];
            loc=j;
        }
    }
    return loc;
}
void selection(int a[],int n)
{
    int x,i,temp;
    for(i=1;i<=n-1;i++){
        x=min(a,i,n);
        temp=a[i];
        a[i]=a[x];
        a[x]=temp;
    }
    for(i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
