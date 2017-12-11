#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char temp;
    int count_del=0;
    char* a = (char *)malloc(512000 * sizeof(char));
    scanf("%s",a);
    char* b = (char *)malloc(512000 * sizeof(char));
    scanf("%s",b);
    int *a_s =(int *)malloc(26*sizeof(int));
    int *b_s =(int *)malloc(26*sizeof(int));
    for(int i=0;i<strlen(a);i++)
    {
        a_s[a[i]-97]+=1;
    }
    for(int i=0;i<strlen(b);i++)
    {
        b_s[b[i]-97]+=1;
    }
    for(int i=0;i<26;i++)
    {
        if(a_s[i]!=b_s[i])
        {
            if(a_s[i]>b_s[i])
            {
                count_del+=(a_s[i]-b_s[i]);
            }
            else
            {
                count_del+=(b_s[i]-a_s[i]);
            }
        }
    }
    printf("%d",count_del);
    return 0;
}