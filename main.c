#include"header.h"
#include<stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{   int choice;

    printf("Enter choice \n1.for Prime Probablity\n2.Lucky Numbers\n");
    if( scanf("%d",&choice)== NULL)
     {
        printf("Incorrect format of choice Aborting...");
        exit(0);
    }

    if (argc==1)
         {
        printf("no argument  Aborting...");
        exit(0);
    }


    switch(choice)
    {
       case 2:
             q1(argv[1]);
             break;
       case 1: q2(argv[1]);
             break;
       default: printf("incorrect choice aborting....");


    }
    getch();
    return 0;
}
