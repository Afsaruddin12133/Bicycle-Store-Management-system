

struct product {

    char date[30];
    char time[30];
    char productCode[30];
    char productBrand[30];
    char customerName[30];
    int saleRate;

};

void total_sale()
{
     int v;
     gotocoordinate(20,7);
     for (v=1; v<=25; v++)
      {
            printf("*");
      }
     printf(" * Total Sale  * ");

     for (v=1; v<=25; v++)
      {
            printf("*");
      }

     int c,sum=0;
    FILE *sale_record;

    sale_record = fopen("sale_record.txt","r");

       if(sale_record == NULL)
        {
        printf("Error at opening File!");
        exit(1);
        }
        //check file is empty or not...
         c = fgetc(sale_record);
        if (c == EOF) {
         printf("\n\n\t\tFile Is Empty....");
         return;
        }

        struct product read;


        printf("\n\n\n\t   Date");
        printf("\t\t Time");
        printf("\t\t    Product Code");
        printf("\t   Product Brand");
        printf("\tCustomer Name ");
        printf("\tProduct Price \n");
        while(1)
        {
             fscanf(sale_record,"\n%s\n%s\n%s\n%s\n%s\n%d\n",read.date,read.time,read.productCode,read.productBrand,read.customerName,&(read.saleRate));

         printf("\n\t%s",read.date);
         printf("\t%s",read.time);
         printf("\t\t%s",read.productCode);
         printf("\t\t\t%s",read.productBrand);
         printf("%\t\t%s",read.customerName);
         printf("%\t\t%d",read.saleRate);


        sum += read.saleRate;
        c = fgetc(sale_record);
        if (c == EOF) {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t   ");
         break;
        }
        }

         for (v=1; v<=10; v++)
      {
            printf("-");
      }
       printf("\n\t\t\t\t\t\t\t\t\t\t\t\t   Total Money: %d TK \n\n\n\n",sum);



       printf("Go to main menu press any key...");
       getch();
       system("CLS");
       Owmer_Menu();







}
