#include<stdio.h>
#include<time.h>
int main()
{
	clock_t t;
	t=clock();
	FILE *f1;
	f1=fopen("file.txt","r");
	int sort[5],n,j,i,temp=0;
	printf("Elements :");
	for(i=0;i<5;i++)
	{
		fscanf(f1,"%d",&sort[i]);
		printf("%d ",sort[i]);
	}
	fclose(f1);
	printf("\nSorted elements: ");
   	for(i=0;i<5;i++)
   	{
      	for(j=i+1;j<5;j++)
	  	{
         	if(sort[i]>sort[j])
			{
           		temp=sort[i];
           		sort[i]=sort[j];
           		sort[j]=temp;
         	}
   		}
   	}   
	for(i=0;i<5;i++)
	{
		printf("%d ",sort[i]);
	}
	t=clock()-t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
	printf("\nTime Taken: %f",time_taken);
	return 0;
}
