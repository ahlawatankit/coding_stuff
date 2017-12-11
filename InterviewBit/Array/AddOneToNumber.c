#include<stdio.h>
int* plusOne(int* A, int n1, int *length_of_array) {
	// SAMPLE CODE
        /*
         * *length_of_array = n1 + 1; // length of result array
         * int *result = (int *) malloc(*length_of_array * sizeof(int));
         * // DO STUFF HERE. NOTE : length_of_array can be n1 OR n1 + 1. 
         * return result;
         */
       int number=0,carry=1,i=0,j=0;
       int X[n1+1];
       int *result;
       
       for(i=n1-1;i>=0;i--)
       {
           // getting carry 
             number=(A[i]+carry)%10;
             carry=(A[i]+carry)/10;
             X[i+1]=number;
             //printf("%d",X[i+1]);
       }
       X[0]=carry;
       //printf("%d",X[0]);
       i=0;
       while(X[i]==0){i++;}
      *length_of_array=n1+1-i;
       //printf(" %d",*length_of_array);
       result = (int *) malloc(*length_of_array * sizeof(int));
       for(i=n1-*length_of_array+1;i<n1+1;i++)
	    {
	    	
	    	result[j]=X[i];
	    	//printf("%d",X[i]);
	    	j++;
		 } 
        return result;
}

int main()
{
	int A[]={0},i;
	int n1=1;
	int *b=(int *)malloc(sizeof(int));
	int *result=plusOne(A,n1,b);
	for(i=0;i<(*b);i++)
	{
		printf("%d",result[i]);
	}
	return 0;
}

