#include<stdio.h>
//int searchBook(int sid)
//{
//	Book b;
//	FILE *fptr;
//	fptr=fopen("bookdb.txt","r");
//	int flag=0;
//	
//	while(fscanf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1){
//		if(b.id==sid)
//		{
//			flag=1;
//			break;
//		}
//	}
//	if(flag)
//	{
//		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
//		return 1;	
//	}
//	else
//	{
//		return 0;
//	}
//}


int searchBook1(int sid1)
{
	Book b;
	FILE *fptr;
	fptr=fopen("computerbookdb.txt","r");
	int flag=0;
	
	while(fscanf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1){
		if(b.id==sid1)
		{
			flag=1;
			break;9
		}
	}
	if(flag)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
		return 1;	
	}
	else
	{
		return 0;
	}
}

int searchBook2(int sid1)
{
	Book b;
	FILE *fptr;
	fptr=fopen("electricalbookdb.txt","r");
	int flag=0;
	
	while(fscanf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1){
		if(b.id==sid1)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
		return 1;	
	}
	else
	{
		return 0;
	}
}


int searchBook3(int sid1)
{
	Book b;
	FILE *fptr;
	fptr=fopen("civilbookdb.txt","r");
	int flag=0;
	
	while(fscanf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1){
		if(b.id==sid1)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
		return 1;	
	}
	else
	{
		return 0;
	}
}


int searchBook4(int sid1)
{
	Book b;
	FILE *fptr;
	fptr=fopen("electronicbookdb.txt","r");
	int flag=0;
	
	while(fscanf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1){
		if(b.id==sid1)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
		return 1;	
	}
	else
	{
		return 0;
	}
}


int searchBook5(int sid1)
{
	Book b;
	FILE *fptr;
	fptr=fopen("machnicalbookdb.txt","r");
	int flag=0;
	
	while(fscanf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1){
		if(b.id==sid1)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
		return 1;	
	}
	else
	{
		return 0;
	}
}



int searchBook6(int sid1)
{
	Book b;
	FILE *fptr;
	fptr=fopen("architecuturebookdb.txt","r");
	int flag=0;
	
	while(fscanf(fptr,"\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",&b.id,&b.name,&b.auth,&b.quantity,&b.price,&b.count,&b.rackno)!=-1){
		if(b.id==sid1)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.name,b.auth,b.quantity,b.price,b.count,b.rackno);
		return 1;	
	}
	else
	{
		return 0;
	}
}

