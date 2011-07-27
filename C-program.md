##将十进制数换成十六进制数

 #include<stdio.h>

 int main(void)

 {
     unsigned int a = 88;

     unsigned int mask = 0x0f;
    
     unsigned int i = 0, move = 28;
    
     char str[16] = "0123456789abcdef";

     printf("0x");
     
     for(i=0; i<8; i++)
     {
         printf("%c",str[((a >> move) & mask)]);
        
         move -= 4;
     }

     printf("\n");
 }

##将一个十进制数转换成二进制数


 #include<stdio.h>

 int main(int argc, const char *argv[])
 
 {
     unsigned int a =100;

     unsigned int mask = (1<<31);
    
     for(; mask>0 ; mask >>= 1)
     {
         printf("%c",((a & mask) > 0) ? '1':'0');
     }
     printf("\n");
     
     return 0;
 }



##待修该代码

 #include<stdio.h>

 int main(int argc, const char *argv[])
 
 {
 
     int i,b=10,a;
 
     unsigned int mask = 1;
     
     for(i=31 ; i>=0 ;i--)
     
     {
     
         a = (b >> i) & mask;
         
         printf("%d",a);
     }

     printf("\n");
   
     return 0;
 }  



 #include<stdio.h>

 int main(int argc, const char *argv[])
 
 {
 
     unsigned int a = 88,c,i ;
     
     unsigned int mask = (0xf << 28);
 
     printf("0x");
     
     for(i=0; i<8; i++)
     
     {
        
        mask >>= 4;
        
        printf("%d",c);
     }

     printf("\n");
     
     return 0;
 
 
 }
