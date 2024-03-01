#include<stdio.h>
//#include"addbook.h"
#include"addbooksave.h"
#include"computersave.h"
#include"searchBook.h"
#include"viewbook.h"
#include<stdlib.h>
#include"computerviewBook.h"
#include<string.h>
//#include"issuebooklist.h"
#include"del.h"
#include"issuenewbook.h"
int main()
{
	int choice,i;
	int bid,result,did;
    struct Book *b;
	char username[10];
	char password[10];
	printf("Enter username");
	scanf("%s",&username);
	printf("\n Enter password");
	scanf("%s",&password);
	
	if(strcmp(username,"a")==0)
	{
		if(strcmp(password,"1")==0)
		{
			printf("\n\n\n Login ----sucessfully------\n\n\n\n\n");

		int size;
	
		printf("\n------------>Welcome to the library management system<------------\n");
		printf("***The only thing that you absolutely have to know, is the location of the library**\n");
		
	do{
		printf("\n 1 case : Add Books");
		printf("\n 2 case : Delete Books ");
		printf("\n 3 case : Search Books");
		printf("\n 4 case : View Book List");
		printf("\n 5 case : Issue Books");
		printf("\n 6 case : Edit Book Record");
		printf("\n 0 case : Close the application");
		
		printf("\n Enter your Choice");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 0:
				exit(0);
				break;
			case 1:
					char username1[10];
							char password1[10];
							printf("Enter username");
							scanf("%s",&username1);
							printf("\n Enter password");
							scanf("%s",&password1);
							
							if(strcmp(username1,"a")==0)
							{
								if(strcmp(password1,"1")==0)
								{
									printf("\n\n\n Login ----sucessfully------\n\n\n\n\n");
									printf("\n");
				int ch;
				do{
					printf("\n 1 CASE : COMPUTER SCIENCE");
					printf("\n 2 CASE : ELECTRICAL ");
					printf("\n 3 CASE : CIVIL");
					printf("\n 4 CASE : MACHANICAL"); 
					printf("\n 5 CASE : ELECTRONICS");
					printf("\n 6 CASE : ARCHITECTURE");
					printf("\n 7 case : BACK TO MAIN MENU");
					printf("\n Enter your choice");
					scanf("%d",&ch);
					
					switch(ch)
					{
						
					    case 1:
					     		
						                printf("\n Enter the size of add Book");
						                scanf("%d",&size);
						                b=(struct Book *)malloc(sizeof(Book)*size);
						                printf("\n Enter Id<->Book Name<->Book Auther<->Book Quantity<->Price<->Book Count<->Rack Number->");
						                	for(i=0;i<size;i++)
							                {
								               scanf("%d\t%s\t%s\t%d\t%d\t%d\t%d",&b[i].id,&b[i].name,&b[i].auth,&b[i].quantity,&b[i].price,&b[i].count,&b[i].rackno);
						                		addComputer(b[i]);
											}
								
					       break;
					  	case 2:
										
						                printf("\n Enter the size of add Book");
						                scanf("%d",&size);
						                b=(struct Book *)malloc(sizeof(Book)*size);
						                printf("\n Enter Id<->Book Name<->Book Auther<->Book Quantity<->Price<->Book Count<->Rack Number->");
					                	for(i=0;i<size;i++)
						                {
							               scanf("%d\t%s\t%s\t%d\t%d\t%d\t%d",&b[i].id,&b[i].name,&b[i].auth,&b[i].quantity,&b[i].price,&b[i].count,&b[i].rackno);
					                		addElectric(b[i]);
										}
								
					  		break;
					  	case 3:
							  		  	printf("\n Enter the size of add Book");
						                scanf("%d",&size);
						                b=(struct Book *)malloc(sizeof(Book)*size);
						                printf("\n Enter Id<->Book Name<->Book Auther<->Book Quantity<->Price<->Book Count<->Rack Number->");
					                	for(i=0;i<size;i++)
						                {
							               scanf("%d\t%s\t%s\t%d\t%d\t%d\t%d",&b[i].id,&b[i].name,&b[i].auth,&b[i].quantity,&b[i].price,&b[i].count,&b[i].rackno);
					                		addCivil(b[i]);
										}
								
								
					  		break;
					  	case 4:
							  			printf("\n Enter the size of add Book");
						                scanf("%d",&size);
						                b=(struct Book *)malloc(sizeof(Book)*size);
						                printf("\n Enter Id<->Book Name<->Book Auther<->Book Quantity<->Price<->Book Count<->Rack Number->");
					                	for(i=0;i<size;i++)
						                {
							               scanf("%d\t%s\t%s\t%d\t%d\t%d\t%d",&b[i].id,&b[i].name,&b[i].auth,&b[i].quantity,&b[i].price,&b[i].count,&b[i].rackno);
					                		addMachnical(b[i]);
										}
									
					  		break;
					  	case 5:
					  		 	printf("\n Enter the size of add Book");
				                scanf("%d",&size);
				                b=(struct Book *)malloc(sizeof(Book)*size);
				                printf("\n Enter Id<->Book Name<->Book Auther<->Book Quantity<->Price<->Book Count<->Rack Number->");
			                	for(i=0;i<size;i++)
				                {
					               scanf("%d\t%s\t%s\t%d\t%d\t%d\t%d",&b[i].id,&b[i].name,&b[i].auth,&b[i].quantity,&b[i].price,&b[i].count,&b[i].rackno);
			                		addElectronic(b[i]);
								}
									
					  		break;
					  	case 6:
					  			
								  			 printf("\n Enter the size of add Book");
							                scanf("%d",&size);
							                b=(struct Book *)malloc(sizeof(Book)*size);
							                printf("\n Enter Id<->Book Name<->Book Auther<->Book Quantity<->Price<->Book Count<->Rack Number->");
						                	for(i=0;i<size;i++)
							                {
								               scanf("%d\t%s\t%s\t%d\t%d\t%d\t%d",&b[i].id,&b[i].name,&b[i].auth,&b[i].quantity,&b[i].price,&b[i].count,&b[i].rackno);
						                		addArch(b[i]);
											}
											
					  		break;
					  		
					  	case 7: main();
								break;
				
					  	default :
					  		printf("\n Wrong choice");
					}
				}while(1);
					}	
				}
				else{
					printf("\n Wrong choice");
				}
			
				break;
				
			case 2:	
			        struct Book b;
					printf("\n Enter id to delete->");
					scanf("%d",&did);
					Bookdelete(did);
					break;
			case 3:	
				do{
					int ch2;
					printf("\n 1 CASE : COMPUTER SCIENCE");
					printf("\n 2 CASE : ELECTRICAL ");
					printf("\n 3 CASE : CIVIL");
					printf("\n 4 CASE : ELECTRONICS ");
					printf("\n 5 CASE : MACHANICAL");
					printf("\n 6 CASE : ARCHITECTURE");
					printf("\n 7 CASE : Back to main menue->");
					printf("\n Enter your choice");
					scanf("%d",&ch2);
					
					switch(ch2)
					{
						case 1:
								printf("\n Enter book id to search\n");
				            	scanf("%d",&bid);
					           result=searchBook1(bid);
					           	if(result)
								{
									printf("\n Book found");
								}
								else
								{
									printf("\n Book not found\n");
								}
							
							break;
						case 2:	
								printf("\n Enter book id to search\n");
				            	scanf("%d",&bid);
					           result=searchBook2(bid);
					           	if(result)
								{
									printf("\n Book found");
								}
								else
								{
									printf("\n Book not found\n");
								}
								
							break;
						case 3:	
								printf("\n Enter book id to search\n");
				            	scanf("%d",&bid);
					           result=searchBook3(bid);
					           	if(result)
								{
									printf("\n Book found");
								}
								else
								{
									printf("\n Book not found\n");
								}
							break;
						case 4:
								printf("\n Enter book id to search\n");
				            	scanf("%d",&bid);
					           result=searchBook4(bid);
					           	if(result)
								{
									printf("\n Book found");
								}
								else
								{
									printf("\n Book not found\n");
								}
							break;
						case 5:
								printf("\n Enter book id to search\n");
				            	scanf("%d",&bid);
					           result=searchBook5(bid);
					           	if(result)
								{
									printf("\n Book found");
								}
								else
								{
									printf("\n Book not found\n");
								}
							break;
						case 6:
								printf("\n Enter book id to search\n");
				            	scanf("%d",&bid);
					           result=searchBook6(bid);
					           	if(result)
								{
									printf("\n Book found");
								}
								else
								{
									printf("\n Book not found\n");
								}
							break;
						case 7:	main();
							break;
								
					}
				}while(1);
				
					break;
			 case 4:
			 	  int ch1;
						do{
					printf("\n 1 CASE : COMPUTER SCIENCE");
					printf("\n 2 CASE : ELECTRICAL ");
					printf("\n 3 CASE : CIVIL");
					printf("\n 4 CASE : ELECTRONICS ");
					printf("\n 5 CASE : MACHANICAL");
					printf("\n 6 CASE : ARCHITECTURE");
					printf("\n 7 CASE : Back to main menue->");
					printf("\n Enter your choice");
					scanf("%d",&ch1);
					
					switch(ch1)
					{
						case 0:
							exit(0);
							break;
					    case 1:
					               computerviewBookList();
					       break;
					  	case 2:
					  		      electricalviewBookList();
					  		break;
					  	case 3:
					  		CivilviewBookList();
					  		break;
					  	case 4:
					  		ElectronicviewBookList();
					  		break;
					  	case 5:
					  	    MachnicalviewBookList();
					  		break;
					  	case 6:
					  		 ArchitectureviewBookList();
					  		break;
					  	case 7:
					  			main();
					  	default :
					  		printf("\n Wrong choice");
					}
				}while(1);
					break;
			case 5:	
			       printf("Issue your book here\n\n");
					printf("------------------------------------------------------- \n");
					printf("Enter the size of the book to be issue");
					scanf("%d",&size);
					struct issued_book_list *b1;
					b1=(struct issued_book_list*)malloc(sizeof(struct issued_book_list)*size); 
					
					printf("Enter id\nstname\nname\nCategory\nIssue date\nDuedat\n");
					
					for(i=0;i<size;i++)
					{
						scanf("%d%s%s%s%s%s",&b1[i].id,&b1[i].stname,&b1[i].name,&b1[i].cate,&b1[i].issued_dd,&b1[i].due_dd);
						
						issued_book(b1[i]);
					}
					break;
			case 6:
				break;
			
			case 7: int main();
				break;
			
			default:
					printf("Wrong choice");
					break;
		}
	
	}while(choice!=7);
	
	
			}
	}
	else
	{
		printf("\n Wrong Password");
	}

	return 0;
}




