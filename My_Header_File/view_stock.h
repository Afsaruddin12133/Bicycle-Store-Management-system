struct view {

    char date[30];
    int productQuantity;
    char productBrand[30];
    int price;

};



void view_views()
{

        int v;
         gotocoordinate(20,7);
         for (v=1; v<=25; v++)
          {
                printf("*");
          }
         printf(" * View Stock  * ");

         for (v=1; v<=25; v++)
          {
                printf("*");
          }

         int c,sum=0;
        FILE *add_view;

        add_view = fopen("add_stock.txt","r");

           if(add_view == NULL)
            {
            printf("Error at opening File!");
            exit(1);
            }
            //check file is empty or not...
             c = fgetc(add_view);
            if (c == EOF) {
             printf("\n\n\t\tFile Is Empty....");
             return;
            }

            struct view read;


            printf("\n\n\n\t   Date");
            printf("\t\tProduct Brand");
            printf("\tProduct Quentity ");
            printf("\tPrice per pices \n");

        while(1)
        {
             fscanf(add_view,"\n%s\n%s\n%d\n%d\n",read.date,read.productBrand,&(read.productQuantity),&(read.price));

             printf("\n\t%s",read.date);
             printf("\t\t%s",read.productBrand);
             printf("%\t\t%d",read.productQuantity);
             printf("%\t\t    %d",read.price);

            c = fgetc(add_view);
            if (c == EOF) {
             break;
            }
        }

           printf("\n\nGo to main menu press any key...");
           getch();
           system("CLS");
           Owmer_Menu();


}
