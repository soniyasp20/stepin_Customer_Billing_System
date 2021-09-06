
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct library
{
char bk_name[30];
char publisher[30];
float price;
};
struct library l[100];
char pb_nm[30],bk_nm[30];
int i, keepcount=0;
i=0;
int T=0,F=0;

Book_name(){
	printf ("Enter book name = ");
	scanf ("%s",l[i].bk_name);
	
	printf ("Enter publisher name = ");
	scanf ("%s",l[i].publisher);

	printf ("Enter price = ");
	scanf ("%f",&l[i].price);
	keepcount++;
	
	

    return 0;
}

 Disply_all(){
	printf("Display All Books Available\n");
	
	for(i=0;i<keepcount;i++)
	{
	printf ("\n book name = %s",l[i].bk_name);
	
	printf ("\t author name = %s",l[i].publisher);

	printf ("\t  price = %f",l[i].price);
	}

 }
 Highest_price(){
	
	printf ("Highest Price Book : ");
float temp = 0;
	for (i=0;i<keepcount;i++)
	{
	    if(temp < l[i].price)
	        temp = l[i].price;
	}
	printf("%f", temp);

 }

List_Publishers(){
	printf ("List of Publishers : ");
	for (i=0;i<keepcount;i++)
	{
	    printf ("\n %s ",l[i].publisher);
	}
}
exits(){
exit (0);
} 