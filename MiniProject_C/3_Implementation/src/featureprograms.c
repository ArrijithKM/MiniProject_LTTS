#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"C:\Users\Arrijith\Desktop\LTTS\MiniProject_C\3_Implementation\inc\header.h"

//char currentCustomer[100];

Customer* List(Customer *p)
{
    Customer* t,*ptr,temp;
    FILE *fp;
    int cc=0,x;
    float ff;
    fp=fopen("Customers.txt","r");

    if(fp==NULL)
        return NULL;

    if(fgetc(fp)==EOF)
        return NULL;

    rewind(fp);
while(fscanf(fp,"%s %s %s %f %d",temp.name,temp.pwd,temp.place,&temp.price,&temp.tick)!=EOF)
{
ptr=(Customer*)malloc(sizeof(Customer));
strcpy(ptr->name,temp.name);
strcpy(ptr->pwd,temp.pwd);
strcpy(ptr->place,temp.place);
ptr->price=temp.price;
ptr->tick=temp.tick;
ptr->next=NULL;

if(p==NULL)
            p=t=ptr;
else
{
p->next=ptr;
p=ptr;
}
}
fclose(fp);
    return t;
}

void writefile(Customer *p)
{
    FILE *fp;
    fp=fopen("Customers.txt","w");
    while(p!=NULL)
    {
        fprintf(fp,"%s %s %s %f %d\n",p->name,p->pwd,p->place,p->price,p->tick);
        p=p->next;
    }
    fclose(fp);
}

Customer* NewCustomer(Customer* p)
{
    Customer *t;
    t=p;
    Customer *nw;
    nw=(Customer*)malloc(sizeof(Customer));
    fflush(stdin);
    printf("Enter name\n");
    scanf("%s",nw->name);
    while(p!=NULL)
    {
        if(!strcmp(p->name,nw->name))
        {
            printf("That email already exists\n");
            return t;
        }
        p=p->next;
    }
    p=t;
    fflush(stdin);
    printf("Enter pwd\n");
    scanf(" %[^\n]s",&nw->pwd);
    nw->next=NULL;
    strcpy(nw->place,"N/A");
    nw->price=0.0;
    nw->tick=0;

    if(p==NULL)
    {
        p=t=nw;
    }
    else
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=nw;
    }
    writefile(t);
    return t;
}

void Brochure()
{
    system("CLS");
    printf("\tPRICE LIST\n=============================\n1. LL - Leh Ladakh - Rs 40000\n2. AS - Assam - Rs 60000\n3. SK - Sri Lanka - Rs 25000\n4. SHM - Shmila - Rs 38000\n"
       "5. AND - Andaman and Nicobar - Rs 120000\n6. BHB - Bhubaneshwar - Rs 10000\n7. AG - Akash Ganga - Rs 30000\n8. ND - New Delhi - Rs 32000\n9. RJ - Rajastan - Rs 45000\n10. SI - South India - Rs 250000\n");
}
void Check(Customer *p)
{
    while(p!=NULL)
    {
        if(!strcmp(p->name,currentCustomer))
            break;
        p=p->next;
    }
    if(!strcmp(p->place,"\0") || p->price==0.0 || p->tick==0)
    {
        printf("No Ticket Booked\n");
        return;
    }
    float total=0.0;
    total=(p->price)*(p->tick);
    printf("You have booked %d tickets\nSo total amt is %0.2f\n",p->tick,total);
}

void LoginCustomer(Customer* p)
{
    char name[100];
    char pwd[100];
    fflush(stdin);
    printf("\n\n");
    printf("Customername:\n");
    scanf("%s",name);
    fflush(stdin);
    printf("\npwd:\n");
    scanf(" %[^\n]s",pwd);
    while(p!=NULL)
    {
        if((!strcmp(p->name,name)) && (!strcmp(p->pwd,pwd)))
        {
            status=in;
            strcpy(currentCustomer,name);
           
            printf("\nYou are in :)\n");
            system("PAUSE");
            return;
        }
        else if((!strcmp(p->name,name)) && (strcmp(p->pwd,pwd)))
        {
            printf("Please Check your pwd :(\n");
            return;
        }
        p=p->next;
    }
    printf("You are a new Customer so you should create a new account!! \n");
}

//char place[100];





void logout()
{
    if(status==out || strcmp(currentCustomer,"\0")==0)
    {
        printf("You must be logged in to logout\n");
        return;
    }
    strcpy(currentCustomer,"\0");
    status=out;
    printf("You have been successfully logged out\n");
}

void exitprog()
{
    printf("Exiting...\nPress Enter to exit");
    char exitprog;
    fflush(stdin);
    scanf("%c",&exitprog);
}

