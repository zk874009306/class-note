#include<stdio.h>

int main(int argc, const char *argv[])
 
{
 
    unsigned int a = 90 , c;
     
    int mask = 0x0f , i;
 
    printf("0x");
     
    for(i=7; i>=0; i--)
     
    {
        
       c = (a >> (4*i)) & mask;

       if(c < 10)
       
       {
           printf("%d",c);
       }
       
       else
       {
            if(c == 10)
            printf("a");

            if(c == 11);
            printf("b");

            if (c == 12)
            printf("c");

            if (c == 13)
            printf("d");

            if (c == 14)
            printf("e");

            if (c == 15)
            printf("f");
       }

     }

    printf("\n");
     
    return 0;
 
 
 }
