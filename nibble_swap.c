/*
Program	:	Nibble Swapping using function
Author	:	Anish Kumar
Date	:	18-04-2018
*/
/*Header File include*/
#include<stdio.h>
/*Macro Definition	optional	*/
#define swap(x)	(((x&0x0f)<<4)	|	((x&0xf0)>>4))
/*Function Declaration*/
unsigned int swap_nibble(unsigned int);
/*Main function*/
int main()
{	
	/*Variable declaration*/
	unsigned int num=0;
	unsigned int swaped_num=0;

	/*Reading input here*/
	printf("\nEnter a number	:");
	scanf("%d",&num);
	
	/*Function swaped_nibble(unsigned int ) calling  */
	swaped_num=swap_nibble(num);
	/*Printing Result*/
	printf("\nEntered Number is 	decimal:	%d\n",num);
	printf("\nSwapped Number is 	decimal:	%d\n",swaped_num);
	/*Macro swap(x) Calling*/
	printf("\nSwapped Number (Macro Call):		%d\n",swap(num));
	return(0);

}/*main*/

/*Function Definition*/
unsigned int swap_nibble(unsigned int num)
{
/*
eg: input :	2
binary format :	0000 0010	--> 2
*/
	unsigned int temp=0;
	temp	=	((num&0x0f)<<4);
/*
temp	=	(0000 0010 & 0000 1111)<<4
	=	(0000 0010)<<4
	=	(0010 0000)	left shift by 4
*/
	temp	|=	((num&0xf0)>>4);
/*
temp		|=	((0000 0010 & 1111 0000)>>4)	-->	|= [ or equal] 	similar to-->	(temp	=	temp | (num&0xf0)>>4)
		|=	((0000 0000)>>4)
		|=	(0000 0000)	right shift by 4
temp		=	(0010 0000)	|	(0000 0000)
		=	0010 0000	swapped nibble.
		=32

*/
	return(temp);
}/*swap_nibble*/
/*EOF*/

