#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct dir
{
	int fcnt;
	char fname[20][20];
};
typedef struct dir dirs;
int main()
{
	int nd,dir_n;
	printf("\nenter how many directory are there\t");
	scanf("%d",&nd);
	dirs d[nd];
	for(int i=0;i<nd;i++)
		d[i].fcnt=0;
	while(1)
	{
		back:printf("\nEnter the dir number \t");
		scanf("%d",&dir_n);
		do{
			char fn[20];
			int choice;
			printf("\nEnter ur option \n1.create \n2.search\n3.delete\n4.display\n5.to exit\n");
			scanf("%d",&choice);
			
			switch(choice)
			{
				
				case 1:
					int flg=0;
					printf("\nEnter the file name\t");
					scanf("%s",fn);
					
					for(int i=0;i<d[dir_n].fcnt;i++)
					{
						if(strcmp(d[dir_n].fname[i],fn)==0)
						{
							flg=1;
							break;
						}
					}
					if(flg==0)
					{
						strcpy(d[dir_n].fname[d[dir_n].fcnt++],fn);
						
					}
					else
					{
						printf("\nFile already exists");
					}
					break;
				case 2:
					int flgs=0;
					printf("\nenter the file name\t");
					scanf("%s",fn);
					printf("\nFile names are \n");
					for(int i=0;i<d[dir_n].fcnt;i++)
					{
						if(strcmp(d[dir_n].fname[i],fn)==0)
						{
							flgs=1;
							break;
						}	
					}
					if(flgs==1)
						printf("\n found");
					
					else
						printf("\nnot found");
					break;
				case 3:
					int targ=-1;
					printf("\nenter the file name\t");
					scanf("%s",fn);
					for(int i=0;i<d[dir_n].fcnt;i++)
					{
						if(strcmp(d[dir_n].fname[i],fn)==0)
						{
							targ=i;
							break;
						}	
					}
					if(targ!=-1)
					{
						strcpy(d[dir_n].fname[targ],d[dir_n].fname[--d[dir_n].fcnt]);
					}
					else
						printf("\nnot found");
					break;
				case 4:
					printf("\nFile names are \n");
					for(int i=0;i<d[dir_n].fcnt;i++)
					{
						printf("\n%s",d[dir_n].fname[i]);
					}
					break;
				case 5:
					goto back;
					break;
			}
						
		}while(1);
	}
}
