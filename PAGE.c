#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void main()
{
    int pages[10],p,f,n,off,pno,choice=0;
    printf("\nEnter the no of pages in memory\t");
    scanf("%d",&n);
    printf("\nEnter the page size \t");
    scanf("%d",&p);
    printf("\nEnter the frame size \t");
    scanf("%d",&f);
    for(int i=0;i<n;i++)
    	pages[i]=-1;
    printf("\nEnter the page table\t");
    printf("\nenter -1 if not present\t");
    printf("\npage no\tframe no\n-----------------------");
    for(int i=0;i<n;i++)
    {
    	printf("\n%d\t",i);
    	scanf("%d",&pages[i]);
    }
    do
    {
      	printf("\nEnter the logical address page no offset\t");
      	scanf("%d%d",&pno,&off);
      	if(pages[pno]==-1)
      	{
      		printf("\n the required page is not available");
      	}
      	else{
      		printf("\nphysical address is frame no and offset %d \t%d",pages[pno],off);
      	}
      	printf("\ndo u want to continue");
      	scanf("%d",&choice);
      }while(choice==1);
      	
}
