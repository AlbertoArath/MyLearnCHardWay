#include <stdio.h>



int main(int argc, char *argv[])
{

int numbers[4]={0};

char name[4]={'a'};

printf("numbers %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[2]);
printf("Name each: %c %c %c %c",name[0],name[1],name[2],name[3]);

printf("name: %s\n",name);

numbers[0]=1;
numbers[1]=2;
numbers[2]=3;
numbers[3]=4;

name[0]='Z';
name[0]='e';
name[0]='d';
name[0]='\0';

printf("numbers %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[2]);
printf("Name each: %c %c %c %c",name[0],name[1],name[2],name[3]);

printf("name: %s\n",name);


char *another="Zed";
printf("another: %s\n",another);

printf("another each: %c %c %c",another[0],another[1],another[2]);


return 0;
}
