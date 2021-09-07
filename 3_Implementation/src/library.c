
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct library
{
char bk_name[100];
char publisher[100];
float price;
};
struct library l[100];
char pb_nm[100],bk_nm[100];
int i, keepcount=0;


int Book_name(){
	printf ("\nEnter book name = ");
	scanf ("%s",l[i].bk_name);
	
	printf ("Enter publisher name = ");
	scanf ("%s",l[i].publisher);

	printf ("Enter price = ");
	scanf ("%f",&l[i].price);
	keepcount+=1;
 return 0;
}

int Display_New(){
	printf("\n Display New Book Available\n");
	
	
	printf ("\n book name = %s",l[i].bk_name);
	
	printf ("\t author name = %s",l[i].publisher);

	printf ("\t  price = %f\n",l[i].price);
  
   return 0;
 }



 int Highest_price()
 {
	
	printf ("\n Highest Price Book :");
           float temp = 0;
	for (i=0;i<keepcount;i++)
	{
	    if(temp < l[i].price)
	        temp = l[i].price;
	}
	   printf("%f\n\n", temp);
    
    return 0;
 }

int Number_of_Books()
{
printf("\n No of books in library : %d\n", keepcount);
return 0;
}

int exits()
{
exit (0);
return 0;
} 

