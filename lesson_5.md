## uninstall software 

sudo apt-get remove --purge + packagename

sudo apt-get purge + package name
vimtutor   a vim book;

##man 3 < about c language connector (接口)in vim > 
        man 3 printf     man 3 scanf 

        sometimes you can use K to check it 

##where software install
        cd /etc/apt/

        vim sourse.list

        dpkg -L tree (check where tree install)

new and vnew
        you can view serval files in a teminal use vim 

## a book about git

http://progit.org/

git checkout -b +name
        back-up a master


#include<stdio.h>
void collect(int a, unsigned char c);
int d;
int main(int argc, const char *argv[])
{
   /* unsigned int a , c;*/
    collect(127,4);
    printf("d = %d\n", d);

    return 0;
}


void collect(int a, unsigned char c)
{  
    unsigned char b =0x0f;
    d = a & (b<<c);
    d >>= c;
}
