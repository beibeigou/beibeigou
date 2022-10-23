#include<stdio.h>
int main()
{
    int a,b,c,max;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b&&a>c)
       {
           max=a;
       }

       //printf("max=%d,a");}
    else if(b>a&&b>c)
       {
           max=b;
       }

       // printf("max=%d",b);}
         else
         {
             max=c;
         }
//{);}
         printf("max=%d",max);
    return 0;
}
