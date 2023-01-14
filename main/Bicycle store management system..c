#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

//my header file...
#include "../My_Header_file/console_screen.h"
#include "../My_Header_file/owner_menu.h"
#include "../My_Header_file/authentication.h"
#include "../My_Header_file/ask.h"
#include "../My_Header_file/sale_product.h"
#include "../My_Header_file/total_sale.h"
#include "../My_Header_file/add_stock.h"
#include "../My_Header_file/view_stock.h"
#include "../My_Header_file/employs_attendents.h"
#include "../My_Header_file/view_attendence.h"
#include "../My_Header_file/sale_search.h"
#include "../My_Header_file/customar_owner.h"
#include "../My_Header_file/customer_menu.h"
#include "../My_Header_file/order bicycle.h"
#include "../My_Header_file/display order.h"
#include "../My_Header_file/cancel order.h"
#include "../My_Header_file/bicycl_club.h"
#include "../My_Header_file/Display_Member.h"




// All function lists..
void welcome_page();

int main()
{
    welcome_page();

    return 0;
}


void welcome_page()
{
    int v,i;
    // To print welcome massage...
     gotocoordinate(20,6);
     for (v=1; v<=25; v++)
      {
            printf("*");
      }
     printf(" *            Welcome To            * ");

     for (v=1; v<=25; v++)
      {
            printf("*");
      }
      // To Print Bicycle Store Management System massage...

     gotocoordinate(20,7);
     for (v=1; v<=25; v++)
      {
            printf("*");
      }
     printf(" * Bicycle Store Management System  * ");

     for (v=1; v<=25; v++)
      {
            printf("*");
      }
      gotocoordinate(20,8);
        for (v=1; v<=25; v++)
      {
            printf("*");
      }
     printf(" *         Name : Md.Afsar Uddin    * ");

     for (v=1; v<=25; v++)
      {
            printf("*");
      }
         gotocoordinate(20,9);
        for (v=1; v<=25; v++)
      {
            printf("*");
      }
     printf(" *         Id : 221002241           * ");

     for (v=1; v<=25; v++)
      {
            printf("*");
      }
         gotocoordinate(20,10);
        for (v=1; v<=25; v++)
      {
            printf("*");
      }
     printf(" *         Secton : D11             * ");

     for (v=1; v<=25; v++)
      {
            printf("*");
      }

     printf("\n");
       // To Print < symboles...
     gotocoordinate(20,12);
        for(i=0;i<80;i++)
		  {
		      printf("<");
		  }
		  // For press something..

      printf("\n\n\t\t\t\t\t\t Press any key to continue...");

         getch();
         system("cls");

         // call ask function
        ask();

}
