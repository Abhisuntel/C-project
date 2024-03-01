void computerviewBookList()
{
	FILE *fptr;
	Book b;
	fptr=fopen("computerbookdb.txt","r");
	while(fscanf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
	}
}

 void electricalviewBookList()
{
	FILE *fptr;
	Book b;
	fptr=fopen("electricalbookdb.txt","r");
	while(fscanf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
	}
}


 void CivilviewBookList()
{
	FILE *fptr;
	Book b;
	fptr=fopen("civilbookdb.txt","r");
	while(fscanf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
	}
}

  
  void ElectronicviewBookList()
{
	FILE *fptr;
	Book b;
	fptr=fopen("electronicbookdb.txt","r");
	while(fscanf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
	}
}

void  MachnicalviewBookList()
{
	FILE *fptr;
	Book b;
	fptr=fopen("machnicalbookdb.txt","r");
	while(fscanf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
	}
}

void  ArchitectureviewBookList()
{
	FILE *fptr;
	Book b;
	fptr=fopen("architecuturebookdb.txt","r");
	while(fscanf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
	}
}

