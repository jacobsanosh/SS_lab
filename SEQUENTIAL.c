#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,start,length,choice=0,avail;
	printf("\nenter the size of the block\t");
	scanf("%d",&size);
	avail=size;
	int block[size];
	for(int i=0;i<size;i++)
		block[i]=0;
	do{
		printf("\nenter the starting address \n");
		scanf("%d",&start);
		if(block[start]==0&&start<size)
		{
			printf("\nEnter the length of the block\t");
			scanf("%d",&length);
			if(avail>=length)
			{
				for(int i=start;i<(start+length);i++)
				{	
					block[i]=1;
				}
				avail-=length;
			}
			else{
			printf("\ncannot be allocated" );
			}
			
		}
		else{
			printf("\nallocated already or out of index");
		}
		printf("\nenter ur choice 1 to continue 0 to exit\t");
		scanf("%d",&choice);
	}while(choice==1);
			
		 
}
