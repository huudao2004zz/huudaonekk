#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
 char hotelname1[15] = "Sea View";
 char hotelname2[15] = "Sea Breeze";
 
 printf("The old name is %s\n", hotelname1);
 strcpy(hotelname1, hotelname2);
 /* Changes the hotel name */
 printf("The new name is %s\n", hotelname1);
 /* Displays the new name */
}
