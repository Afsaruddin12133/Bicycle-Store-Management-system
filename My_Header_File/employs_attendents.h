

struct employs
{
    char name[30];
    char designation[30];
    char jtime[30];
    char jdate[30];
    char ltime[30];
};

void employs_attendent()
{


     int v;

    time_t current_time;
    struct tm *time_info;
    char date[128];
    char times[128];

    time(&current_time);
    time_info = localtime(&current_time);
    strftime(date, 128, "%d-%m-%Y\n\n", time_info);
    strftime(times, 128, "%H:%M:%S", time_info);
     gotocoordinate(20,7);
     for (v=1; v<=25; v++)
      {
            printf("*");
      }
     printf(" * Employs Attendents  * ");

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
     printf(" * Employs Attendents  * ");

     for (v=1; v<=25; v++)
      {
            printf("*");
      }


        printf("\nWhat is your name :\n");
        scanf("%s",data.name);

        printf("\nWhat is your Designation  :\n");
        scanf("%s",data.designation);

         strcpy( data.jdate, date);

         strcpy(data.jtime, times);



       fprintf(employs_data," %s\n""%s\n""%s\n""%s\n",data.jdate,data.name,data.designation,data.jtime);
      fclose(employs_data);
    printf("\nSuccessfully Attend! \n\n");
     printf("\n\nGo to main menu press any key...");
           getch();
           system("CLS");
           Owmer_Menu();

    }else{

           strcpy(data.ltime, times);


           fprintf(employs_data,"%s\n",data.ltime);
           fclose(employs_data);

        printf("Successfully Left\n\n");
         printf("\n\nGo to main menu press any key...");
           getch();
           system("CLS");
           Owmer_Menu();


    }


}
