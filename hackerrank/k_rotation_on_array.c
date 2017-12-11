#include <math.h>
#include <stdio.h>
#include <string.h>

int main(){
    int n; 
    int k,j=0; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    int *b= malloc(sizeof(int)*n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    for(int a_i=k;a_i<n;a_i++)
    {
        b[j]=a[a_i];
        j++;
    }
    for(int a_i=0;a_i<k;a_i++)
    {
        b[j]=a[a_i];
        j++;
    }
    for(int a_i=0;a_i<n;a_i++)
    {
        printf("%d ",b[a_i]);
    }
    return 0;
}