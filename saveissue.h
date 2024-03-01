#include <stdio.h>
void issue_book_list()
{
	FILE *fptr;
	
	struct issued_book_list b1;
	
	fptr=fopen("issue.txt","r");
	
	
	while(fscanf(fptr,"%d%s%s%s%s%s",&b1.id,&b1.stname,&b1.name,&b1.cate,&b1.issued_dd,&b1.due_dd)!=-1)
	{

	printf("%d\t%s\t%s\t%s\t%s\t%s\n",b1.id,b1.stname,b1.name,b1.cate,b1.issued_dd,b1.due_dd);
	
	}
	
	fclose(fptr);
}
