struct record
{
    char date[30];
    char time[30];
    char productCode[30];
    char productBrand[30];
    char customerName[30];
    int saleRate;
};



void sale_product()
{
    int c,v;

    time_t current_time;
    struct tm *time_info;
    char date[128];
    char times[128];

    time(&current_time);
    time_info = localtime(&current_time);
    strftime(date, 128, "%d-%m-%Y\n\n", time_info);
    strftime(times, 128, "%H:%M:%S", time_info);


      FILE *sale_record;

    sale_record = fopen("add_stock.txt","r+");

       if(sale_record == NULL)
        {
        printf("File open fails");
        }
        //check file is empty or not...
         c = fgetc(sale_record);
        if (c == EOF) {
        printf("Product is Stock Out!!\n\n");
        printf("Please Firstly Add Stock..\n\n");
        printf("Please enter any key to continue Add stock..\n\n");
        getch();
        system("CLS");
        add_stocks();
        }else{

     gotocoordinate(20,7);
     for (v=1; v<=25; v++)
      {
            printf("*");
      }
     printf(" * Sale Product  * ");

     for (v=1; v<=25; v++)
      {
            printf("*");
      }
      // Create a file for store sale data....
      FILE *sale_record;

   struct record sale;

   printf("\n\n\nEnter new record(Y/N)?");
    while(toupper(getche())=='Y')
    {
          system("cls");
          sale_record = fopen("sale_record.txt","a");
         if(sale_record == NULL)
        {
        printf("Error at opening File!");
        exit(1);
        }

        gotocoordinate(20,7);
     for (v=1; v<=25; v++)
      {
            printf("*");
      }
     printf(" * Sale Product  * ");

     for (v=1; v<=25; v++)
      {
            printf("*");
      }

       printf("\nEnter Customer Name :\n");
       scanf("%s",sale.customerName);

      printf("\nEnter Product Code:\n");
      scanf("%s",sale.productCode);

      printf("\nEnter Product Brand:\n");
      scanf("%s",sale.productBrand);

      printf("\nEnter Product sale Money:\n");
      scanf("%d",&(sale.saleRate));

           strcpy( sale.date, date);
           strcpy( sale.time, times);

      fprintf(sale_record," %s\n" "%s\n" "%s\n" "%s\n" "%s\n" "%d\n",sale.date,sale.time,sale.productCode,sale.productBrand,sale.customerName,sale.saleRate);
      fclose(sale_record);

      printf("\nProduct record Successful!\n");
       printf("\nEnter new record(Y/N)?");

    }

      Owmer_Menu();
        }
}
