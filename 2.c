#include<stdio.h>
int isPrime(int x)
{ int i=0,c=0;
    if(x==1)
        return 1;
    if(x==2)
        return 0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
            c++;
    }
    if(c==2)
    return 0;
    else
    return 1;
}
int q2(char *fn)
{
    FILE *fl; int i=0,a[100]={0},f,s=0,j,size=0,elements=0;
    float x;
    long int l,n;
     fl=fopen(fn,"r");
    fscanf(fl,"%d",&a[0]);
    size=ftell(fl);
    if(size==0)
    {
        printf("The file is empty or an invalid character was read. Double Check the input file and try again. Aborting....\n");
        exit(0);

    }
    if(fl == NULL )
          { printf(" The file does not exist");
            exit(0);
          }
       rewind(fl);


    while(fscanf(fl,"%d",&a[i++])!= EOF)
    {
        elements++;
    }
     if(elements !=(2*a[0]+1))
     {   printf("The Number of test cases are invalid.... aborting");
         exit(0);

     }
    f=1;
    for(i=1;i<=a[0];i++)
    {
        s=0;
        l=a[f];
        n=a[f+1];
        if(n<l)
        {
             printf("Skipping Test Case... Starting Limit cannot be greater than ending limit.\n");
             f=f+2;
             continue;
        }

      {
          for(j=l;j<=n;j++)
        {
            if (!isPrime(j))
            {
                s++;
            }
        }
        x=(float)s/(float)((n-l)+1);
        printf("%f\n",x);
        f=f+2;
      }


  }
  return 0;
}

