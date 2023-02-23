#include<stdio.h>
int ppow(int j,int n)
{
    int k=1;
    for(int i=0;i<n;i++){
    k*=j;
    }
    return k;
}
void main()
{
    int a,b;
    printf("%d",ppow(2,3));

}
    