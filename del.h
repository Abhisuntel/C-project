void Bookdelete(int did)
{
	struct Book b;
	FILE *fptr, *fptr1;
	fptr=fopen("computerbookdb.txt","r");
	fptr1=fopen("temp.txt","a");
	while(fscanf(fptr,"%d%s%s%d%d%d%d",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1)
	{
		if(b.id!=did)
		{
				fprintf(fptr1,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
		}
	
	}
	
	fclose(fptr);
	fclose(fptr1);
	
	remove("computerbookdb.txt");
	rename("temp.txt","computerbookdb.txt");
	printf("\n Data deleted successfullt\n");
}

