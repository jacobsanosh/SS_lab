#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int choice,fcnt=0;
	char fn[20],fle[20][20];
	while(1)
	{
		printf("\nEnter ur choice \n1.create\n2.search\n3.delete\n4.display\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nenter the file name\t");
				scanf("%s",fn);
				int flag=0;
				for(int i=0;i<fcnt;i++)
				{
					if(strcmp(fn,fle[i])==0)
					{
						flag=1;
						printf("\nthe file already exists");
						break;	
					}
					
				}
				if(flag==0)
				{
					strcpy(fle[fcnt++],fn);
				}
				break;
				
			case 2:
				printf("\nenter the file name\t");
				scanf("%s",fn);
				int flags=0;
				for(int i=0;i<fcnt;i++)
				{
					if(strcmp(fle[i],fn)==0)
					{
						flags=1;
						break;
						
					}
				}
				if(flags==1)
					printf("\n found");
				else
					printf("\nnot found");	
				break;
			case 3:
				printf("\nenter the file name\t");
				scanf("%s",fn);
				int targ=-1;
				for(int i=0;i<fcnt;i++)
				{
					if(strcmp(fle[i],fn)==0)
					{
						targ=i;
						break;
						
					}
				}
				if(targ!=-1)
				{
					strcpy(fle[targ],fle[fcnt]);
					fcnt--;
				}
				break;
			case 4:
				printf("\nfile name are\t");
				for(int i=0;i<fcnt;i++)
				{
					printf("\n%s",fle[i]);
				}
				
		}
	}
}
