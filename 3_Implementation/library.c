
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"

int main()
{
	int j=0;


printf("\n\n## Library Management ##\n");
while(j!=5)
{
printf("\n1. Add book information\n");
printf("2. Display All Books Available \n");
printf("3. Display Highest Price Book\n");
printf("4. Display list of Publishers\n");
printf("5. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&j);

switch (j)
{
case 1 :Book_name();break;
case 2 :Disply_all();break;
case 3 :Highest_price();break;
case 4 : List_Publishers();break;
case 5 : exits();

}
}
return 0;
}