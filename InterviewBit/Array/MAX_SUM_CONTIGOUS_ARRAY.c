#include<stdio.h>
int maxSubArray(const int* A, int n1) {
     int sum=0,result=A[0],i=0,pos_flag=0;
     // checking all values negative
     for(i=1;i<n1;i++)
     {
        if(A[i]>result){result=A[i];}
        if(A[i]>0){pos_flag=1;break;}
     }
     //if some positive element exist
     if(pos_flag==1){
         result=0;
     for(i=0;i<n1;i++)
     {
         if(sum+A[i]>0)
         {
             sum=sum+A[i];
             if(sum>=result){result=sum;}
         }
         else{
             if(sum>=result){result=sum;}
             sum=0;
         }
     }
          if(sum>=result){result=sum;}
     }
     return result;
    
}
int main()
{
	int A[]={-2,1,-3,4,-1,2,1,-5,4};
	int n1=9;
	int result=maxSubArray(A,n1);

		printf("%d",result);
	
	return 0;
}

