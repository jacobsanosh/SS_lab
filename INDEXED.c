#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,alloc,nb,choice;
	printf("\nEnter the size of block\t");
	scanf("%d",&size);
	int avail=size,block[size];
	for(int i=0;i<size;i++)
		block[i]=0;
	printf("\nenter how many of them are allocated already\t");
	scanf("%d",&alloc);
	printf("\nEnter the location that already allocated one by one\t");
	for(int i=0;i<alloc;i++)
	{
		int temp;
		scanf("%d",&temp);
		block[temp]=1;
	}
	avail-=alloc;
	do{
	
		printf("\nEnter the no of block\t");
		scanf("%d",&nb);
		if(nb<=avail)
		{
		
			printf("\nEnter the blocks\t");
			for(int i=0;i<nb;i++)
			{
				x:int temp;
				scanf("%d",&temp);
				if(block[temp]==0&&temp<size)
				{
					block[temp]=1;
					avail-=1;			
				}				
				else
				{
					printf("\nplease enter an new block bcz it already taken\t");
					goto x;
				}
			}
		}
		else{
			printf("\nspecified size is out of range\t");
		}
		printf("\nDo you want to continue press any number other than 0\t");
		scanf("%d",&choice);
	}while(choice!=0);
}	
		 
