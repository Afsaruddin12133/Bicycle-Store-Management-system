#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<time.h>
//my header file...
#include "../My_Header_file/console_screen.h"
#include "../My_Header_file/bicycle_main_menu.h"
#include "../My_Header_file/authentication.h"
#include "../My_Header_file/ask.h"
#include "../My_Header_file/sale_product.h"
#include "../My_Header_file/total_sale.h"
#include "../My_Header_file/add_stock.h"
#include "../My_Header_file/view_stock.h"
#include "../My_Header_file/employs_attendents.h"
#include "../My_Header_file/view_attendence.h"




// function lists..
void welcome_page();

int main()
{
    //welcome_page();
    bicycle_main_menu();

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
     printf(" *            Welcome To           * ");

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

     printf("\n");
       // To Print < symboles...
     gotocoordinate(20,9);
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
