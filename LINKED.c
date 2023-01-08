#include<stdio.h>
#include<stdlib.h>
struct block{
	int alloc;
};
typedef struct block blk;
int main()
{
	int choice=0,nb,start,length;
	do{
	
		printf("\nEnter the no of blocks\t");
		scanf("%d",&nb);
		blk b[nb];
		for(int i=0;i<nb;i++)
			b[i].alloc=0;
		printf("\nEnter the starting block\t");
		scanf("%d",&start);
		if(b[start].alloc==0)
		{
			printf("\nEnter the length of the blocks\t");
			scanf("%d",&length);
			printf("\nEnter the blocks\t");
			for(int i=0;i<length;i++)
			{
				int temp;
				back:scanf("%d",&temp);
				if(b[temp].alloc==0)
				{
					b[temp].alloc=1;
				}
				else{
					printf("\nalready taken please choose another one\t");
					goto back;
				}
			}
		}
		else{
		printf("\nalready taken");
		}
		printf("\nDo you want to continue press any number other than 0\t");
		scanf("%d",&choice);
	}while(choice!=0);	
		
}
