#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"C:\Users\Arrijith\Desktop\LTTS\MiniProject_C\3_Implementation\inc\header.h"

void bookplace(Customer *p)
{
    Customer *t=p;
    
    while(p!=NULL)
    {
        if(!strcmp(p->name,currentCustomer))
            break;
        p=p->next;
    }
    if(p==NULL)
        return;
    if(p->price!=0.0)
    {
        printf("You already bought tickets\n");
        return;
    }
    Brochure();
    float ratearray[]={4000.0,60000.0,2500.0,3800.0,12000.0,1000.0,3000.0,3200.0,4500.0,25000.0};
    fflush(stdin);
    booking:
    	printf("\nEnter place code (eg: LL, AS)\n");
    	scanf(" %[^\n]s",place);
    if(corona(place))
    {
    char choice;
    fflush(stdin);
    printf("\nWould You Like to Confirm Booking?\n1 - Yes\n2 - No\n");
    scanf("%c",&choice);
    float price;
    if(choice!='1')
        return;
    if(strcmp(place,"LL")==0)
        price=ratearray[0];
    else if(strcmp(place,"AS")==0)
        price=ratearray[1];
    else if(strcmp(place,"SK")==0)
        price=ratearray[2];
    else if(strcmp(place,"SHM")==0)
        price=ratearray[3];
    else if(strcmp(place,"AND")==0)
        price=ratearray[4];
    else if(strcmp(place,"BHB")==0)
        price=ratearray[5];
    else if(strcmp(place,"AG")==0)
        price=ratearray[6];
    else if(strcmp(place,"ND")==0)
        price=ratearray[7];
    else if(strcmp(place,"RJ")==0)
        price=ratearray[8];
    else if(strcmp(place,"SI")==0)
        price=ratearray[9];
    else
    {
        printf("That tour code doesn't exist\n");
        return;
    }
    printf("Enter the number of tickets you want to book?\n");
    scanf("%d",&p->tick);
    if(p->tick==0)
        return;
    strcpy(p->place,place);
    p->price=price;
    writefile(t);
    printf("Bookings Done!!\n");
    system("PAUSE");
	}
	else
	{
		if(strcmp(place,"AS")==0)
		{
			printf("Assam is a CORONA affected area.. \n");
			//return 0;
		}
		else if(strcmp(place,"BHB")==0)
		{
			printf("Bhubaneshwar is a CORONA affected area.. \n");
			//return 0;
		}
			
		else if(strcmp(place,"AG")==0)
		{
			printf("Akash Ganga is a CORONA affected area.. \n");
			//return 0;
		}
		else if(strcmp(place,"ND")==0)
		{
			printf("New Delhi is a CORONA affected area.. \n");
			//return 0;
		}
			
		else if(strcmp(place,"SHM")==0)
		{
			printf("Shimla is a CORONA affected area.. \n");
			//return 0;
		}
		goto booking;
	}
   
}

int corona(char *place)
{
		if(strcmp(place,"AS")==0)
		{
			//printf("Assam is a CORONA affected area.. \n");
			return 0;
		}
		else if(strcmp(place,"BHB")==0)
		{
			//printf("Bhubaneshwar is a CORONA affected area.. \n");
			return 0;
		}
			
		else if(strcmp(place,"AG")==0)
		{
			//printf("Akash Ganga is a CORONA affected area.. \n");
			return 0;
		}
		else if(strcmp(place,"ND")==0)
		{
			//printf("New Delhi is a CORONA affected area.. \n");
			return 0;
		}
			
		else if(strcmp(place,"SHM")==0)
		{
			//printf("Shimla is a CORONA affected area.. \n");
			return 0;
		}
		else
			return 1;
		
			
}


