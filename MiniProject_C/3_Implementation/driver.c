/**
 * @file driver.c
 * @author Arrijith KM (arrijithkm@gmail.com)
 * @brief Driver file to run the application.
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"

state status=out;
/**
 * @brief Main function to call each and call the feature function
 * 
 * @return int 
 */
int main()
{
    printf("Tourism Management Project\n");
    Customer *p=NULL;
    int ch1,ch2;
    p=List(p);
    while (1)
    {
   
        if(status==out)
        {
       
            printf("\nNew Customer - 1\nLogin Customer - 2\nBrochure - 3\nExit - 4\nEnter:");
            scanf("%d",&ch1);
            switch(ch1)
            {
                case 1:
                    p=NewCustomer(p);
                    break;
                case 2:
                    LoginCustomer(p);
                    break;
                case 3:
                    Brochure();
                    break;
                case 4:
                    exitprog();
                    exit(0);
                    break;
                default:
                    printf("Please enter Correctly Sorry You are exited:(\n");
                    //exitprog();
                    exit(0);
                    break;
            }
        }
        else if(status==in)
        {
            system("CLS");
            printf("\n");
            printf("\nTourism Management Mini Project");
            printf("\nBook Ticket - 1\nCheck Ticket - 2"
                   "\nLogout Customer - 3\nBrochure - 4\nExit - 5\n");
            scanf("%d",&ch2);
            switch(ch2)
            {
                case 1:
                    bookplace(p);
                    system("PAUSE");
                    system("CLS");
                    break;
                case 2:
                    Check(p);
                    system("PAUSE");
                    system("CLS");
                    break;
                case 3:
                    logout();
                    system("PAUSE");
                    system("CLS");
                    break;
                case 4:
                    Brochure();
                    system("PAUSE");
                    system("CLS");
                    break;
                case 5:
                    exitprog();
                    exit(0);
                    break;
                default:
                    printf("Please Enter Correctly Sorry You are Exited:(\n");
                    //exitprog();
                    exit(0);
                    break;
            }
        }
    }
    return 0;
}


