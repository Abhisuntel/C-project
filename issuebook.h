#include<stdio.h>
#include"issue.h"
void issued_book(struct issued_book_list b1)
{
	
	FILE *fptr;
	
	fptr=fopen("issue.txt","a");
	
	fprintf(fptr,"%d\t%s\t%s\t%s\t%s\t%s\n",b1.id,b1.stname,b1.name,b1.cate,b1.issued_dd,b1.due_dd);

	fclose(fptr);
	
	printf("Data has been saved...\n");
 

}
