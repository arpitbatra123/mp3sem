#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void fav(FILE *f);
int nc(FILE *f);
int q1(char * fn)
{
int ch;
FILE *f;
f=fopen(fn,"r");

if(f==NULL)
{
    printf("There is some problem with file ");
    exit(1);
}
   fav(f);
   return 0 ;
}
void fav(FILE *f)
{
int r=0,t=0,sop=0,maxdif=0,temp=0,n=0,limit=0,a=1,size=0,m;
char ch;
m=nc(f);
m--;
fscanf(f,"%d",&limit);
if(m==limit)
{

//validation:
size=ftell(f);
if(size==0)
{
    printf("There is no data in file : ");
    exit(0);
}
else
{
while(a<=limit)    //looping condition
{
r=0;t=0;sop=0;maxdif=0;
if(fscanf(f,"%d",&n))
{

if(n<10)
{
    printf("%d,%d \n",n,0);
    a++;
}
else
{
while(n>0)
{
if(r>=t)
{

r=n%10;

n=n/10;
t=n%10;
sop=sop+r;
if(t!=0)
{
temp=r-t;
if(temp>maxdif)
{
    maxdif=temp;
}
}
if(n==0)
    {
    printf("%d,%d \n",maxdif,sop);
    a++;
    }
}
else
{
printf(" \nNA\n");
n=n/10;
a++;
break;
}
}


}
}

else               //error removing for character input
    {
        printf("wrong input \n");

while(1)
{
    ch=fgetc(f);
    if(ch=='\n')
        break;

}
a++;
}}
}}
else
    printf("Not enough data for your limit \n ");
}
int nc(FILE *f)
{
    int counter=0;
    char ar[200];
    f=fopen("new.txt","r");
    while(fgets(ar,200,f)!=NULL)
    {
        counter++;
    }
return counter;
}
