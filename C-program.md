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


1.实参把值传给形参

2.float 型的数3.14 和双精度 double 型的3.14值不同

3.当 unsigned int  和 int 型数据发生关系，运算或比较大小时，有符号数要向无符号数靠拢

 #include<stdio.h>

 void main(void)
 {
    int a = -10;
    unsigned int b = 6;

    if((a+b)<b)
    {
        printf("hello\n");
    }
    else
    {    
        printf("world\n");
    }
    return(0);

 }

 运行结果 world

 ## 定义指针变量

 int * ptr

 * 取内容

 & 取地址


 存放字符串到字符数组中要保证字符数组比字符串多一位存放'\0'

'\0'是字符串结束的标志


#include<stdlib.h>
int rand(void); 



函数递归调用：

打印地址： %p

##The address of two-dimensional array :

    array [0];
    array;
    &array[0];
    &array[0][0];


##{ int (*p)[N]  }
    
    指向一维数组的一维数组（二维数组）


## struct date 
    struct date
    {
        int a;
        int c;


    }   只定义了一个类型，不占内存


## sizeof() 

    ()中可写变量和字符类型

结构体类型指针；

    p -> a

extern 声明一个变量已存在，可以用在本文件

static int a；定义一个变量a ，只能用于本文件（条件a为全局变量）

若 a 为局部变量只能用于本函数；

## about file 

        FILE *pf

        a pointer point a file 

        FILE *fopen ("" "")

        fp = fopen("1.txt","r");

        you can input file or a path and a file in first "",

        r,r+ w,w+ ,a,a+ in second "".

        w+ can creat a file not exsit,r+ cannot.

        r+ can read and write , covered you need using. a and a+ not cover.

        fprintf (fp,"%s",str); write the content of the string which first address is str to file pionted fp;

        fscanf(fp,"%s",str);   read file , space or enter is a flag means end. storethe content to the string ,str is the first address of the string.

        fgets(str,1023,fp);  read file include spade and store it to the string pointed str . read bits number less than 1023 .

        fputs(str, fp);   write the string pointed by str  

        a and a+ does‘t covered the oringinal content.
   
   The four functions are include <stdio.h>.
