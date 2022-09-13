

struct employs
{
    char name[30];
    char designation[30];
    char jtimedate[30];
    char ltimedate[30];
};

void employs_attendent()
{


     int v;
      time_t t;
	time(&t);
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

      struct employs data;

       FILE *employs_data;
       employs_data = fopen("employs_data.txt","a");
         if(employs_data == NULL)
        {
        printf("Error at opening File!");
        exit(1);
        }

      printf("\nIs It Your Joining Shift(y/n)? \n");
      if(toupper(getche())=='Y')
    {
        system("CLS");
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


        printf("\nWhat is your name :\n");
        scanf("%s",data.name);

        printf("\nWhat is your Designation  :\n");
        scanf("%s",data.designation);

         strcpy( data.jtimedate, ctime(&t));

      fprintf(employs_data,"%s\n" "%s\n" "%s",data.name,data.designation,data.jtimedate);
      fclose(employs_data);
    printf("\nSuccessfully Attend! \n\n");
     printf("\n\nGo to main menu press any key...");
           getch();
           system("CLS");
           bicycle_main_menu();

    }else{

           strcpy( data.ltimedate, ctime(&t));

        fprintf(employs_data,"%s\n",data.ltimedate);
           fclose(employs_data);

        printf("Successfully Left\n\n");
         printf("\n\nGo to main menu press any key...");
           getch();
           system("CLS");
           bicycle_main_menu();


    }


}
