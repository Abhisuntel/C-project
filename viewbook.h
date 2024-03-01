void viewBookList()
{
	FILE *fptr;
	Book b;
	fptr=fopen("bookdb.txt","r");
	while(fscanf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
	}
}
	
