
struct stock {

    char date[30];
    int productQuantity;
    char productBrand[30];
    int price;

};


void add_stocks()
{

    int v;

     time_t current_time;
    struct tm *time_info;
    char date[128];
    char times[128];

    time(&current_time);
    time_info = localtime(&current_time);
    strftime(date, 128, "%d-%m-%Y\n\n", time_info);
     gotocoordinate(20,7);
     for (v=1; v<=25; v++)
      {
            printf("*");
      }
     printf(" * Add Stock  * ");

     for (v=1; v<=25; v++)
      {
            printf("*");
      }
      // Create a file for store sale data....
      FILE *add_stock;

   struct stock product;

   printf("\n\n\nEnter new record(Y/N)?");
    while(toupper(getche())=='Y')
    {
          system("cls");
          add_stock = fopen("add_stock.txt","a");
         if(add_stock == NULL)
        {
        printf("Error at opening File!");
        exit(1);
        }

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

      printf("\nEnter Product Brand:\n");
      scanf("%s",product.productBrand);

      printf("\nEnter Product Quantity:\n");
      scanf("%d",&(product.productQuantity));

      printf("\nEnter Product per pices Buy Price:\n");
      scanf("%d",&(product.price));


           strcpy( product.date, date);

      fprintf(add_stock," %s\n" "%s\n" "%d\n" "%d\n",product.date,product.productBrand,product.productQuantity,product.price);
      fclose(add_stock);

      printf("\nProduct Stock Record Successful!\n");
       printf("\nEnter new record(Y/N)?");
    }

    Owmer_Menu();



}
