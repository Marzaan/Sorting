#include<stdio.h>
void insertion(int a[],int n)
{
    int i,temp,ptr;
    a[0]=-10000;
    for(i=2;i<=n;i++){
        temp=a[i];
        ptr=i-1;
        while(temp<a[ptr]){
            a[ptr+1]=a[ptr];
            ptr--;
        }
        a[ptr+1]=temp;
    }
    for(i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
}
int main ()
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    insertion(a,n);
    return 0;
}
