//#include"addbook.h"
//#include<stdio.h>

 void addComputer(Book b)
 {
 	FILE *fptr;
 	fptr=fopen("computerbookdb.txt","a");
 	fprintf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
 	fclose(fptr);
 	printf("\n ______________Data saved Succesfully--------\n\n");
 }
 
 void addElectronic(Book b)
 {
 	FILE *fptr;
 	fptr=fopen("electronicbookdb.txt","a");
 	fprintf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
 	fclose(fptr);
 	printf("\n ______________Data saved Succesfully--------\n\n");
 }
 
 //#include"addbook.h"
//#include<stdio.h>

 void addCivil(Book b)
 {
 	FILE *fptr;
 	fptr=fopen("civilbookdb.txt","a");
 	fprintf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
 	fclose(fptr);
 	printf("\n ______________Data saved Succesfully--------\n\n");
 }
 
 
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
 
 
 //#include"addbook.h"
//#include<stdio.h>

 void addMachnical(Book b)
 {
 	FILE *fptr;
 	fptr=fopen("machnicalbookdb.txt","a");
 	fprintf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
 	fclose(fptr);
 	printf("\n ______________Data saved Succesfully--------\n\n");
 }
 
 
 void addArch(Book b)
 {

 	FILE *fptr;
 	fptr=fopen("architecuturebookdb.txt","a");
 	fprintf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
 	fclose(fptr);
 	printf("\n ______________Data saved Succesfully--------\n\n");
 	
 	
 }
