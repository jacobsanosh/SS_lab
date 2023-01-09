#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *f1,*f2,*f3,*output;
	int lc,sa,oper,opt;
	char la[20],op1[20],op2[20],op3[20],opt1[20];
	f1=fopen("input.txt","r");
	f2=fopen("optab.txt","r");
	f3=fopen("symtab.txt","r");
	output=fopen("inter.txt","w");
	fscanf(f1,"%s%s%d",op1,op2,&oper);
	printf("value is %s",op2);
	if(strcmp(op2,"START")==0)
	{	
		
		sa=oper;
		lc=sa;
		fprintf(output,"%s\t%s\t%d",op1,op2,oper);
	}
	else{
		lc=0;
	}
	//fseek(f1,0,SEEK_END);
	fscanf(f1,"%s%s%s",op1,op2,op3);
	while(!feof(f1))
	{
		if(strcmp(op1,"-")==0)
		{
			if(strcmp(op2,"END")==0)
			{
				fprintf(output,"\n_\t%s\t%d",op2,sa);
				break;
			}
			fscanf(f2,"%s%d",opt1,&opt);
			while(!feof(f2))
			{
				//printf("\noptab %s",opt1);
				if(strcmp(opt1,op2)==0)
				{
					lc=lc+3;
					fprintf(output,"\n%d\t%s\t%s",lc,op2,op3);
					break;
				}
				fscanf(f2,"%s%d",opt1,&opt);
			}
			fseek(f2,0,SEEK_SET);
		}
		else{
			if(strcmp(op2,"WORD")==0)
				lc+=3;
			else if(strcmp(op2,"RESW")==0)
				lc+=3*(atoi(op3));
			else if(strcmp(op2,"BYTE")==0)
				lc+=strlen(op3)-3;
			else if(strcmp(op2,"RESB"))
				lc+=atoi(op3);
			fprintf(output,"\n%d\t%s\t%s",lc,op2,op3);
		}
				
		fscanf(f1,"%s%s%s",op1,op2,op3);		
		printf("\n new %s %s",op1,op2);
	}
		
	
}
	


