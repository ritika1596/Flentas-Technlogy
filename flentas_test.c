#include <stdio.h>

#include <stdlib.h>

int comp(const void * a,const void *b)

{

	return (*(int *)a) - (*(int *)b);

}
 

 
int min(int a,int b)

{
       
	 return a < b ? a:b;

}
 

int main()

{
       
	 int t,num;
        
	long answer = 0;
        	
	int *arr;
        
	scanf("%d",&t);

	while(t--)
	
{
        
		scanf("%d",&n);
        
		arr = malloc(sizeof(int)*num);
       
		 int i;
        
		answer = 0;

		for(i = 0; i < num; i++)

			scanf("%d",arr+i);

			qsort(arr,num,sizeof(int),comp);
 
		
while(num > 3)
		
{	
			
answer = answer + min((2*arr[0]+arr[num-1]+arr[num-2]),(arr[0]+2*arr[1]+arr[num-1]));
			
num -= 2;

		}
		
	if (num== 3)
			
answer += (arr[0]+arr[1]+arr[2]);

			else if (num == 2)

			answer += arr[1];
			
else
 answer += arr[0];

			printf("%ld\n",answer);
			
free(arr);

	}	
	
return 0;

}
	