//#include"addbook.h"
//#include<stdio.h>

 void addElectric(Book b)
 {
 	FILE *fptr;
 	fptr=fopen("electricalbookdb.txt","a");
 	fprintf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
 	fclose(fptr);
 	printf("\n ______________Data saved Succesfully--------\n\n");
 }
 
