
struct view_attan {

    char ldate[30];
    char date[30];
    char name[30];
    char degination[30];

};

void view_attendences()

{
    int v,c;
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

       FILE *employs_data;
       employs_data = fopen("employs_data.txt","r");
         if(employs_data == NULL)
        {
        printf("Error at opening File!");
        exit(1);
        }
          c = fgetc(employs_data);
            if (c == EOF) {
             printf("\n\n\t\tFile Is Empty....");
             return;
            }

            struct view_attan attand;
            printf("\n\n\n\t   Date");
            printf("\t\tEmploys Name");
            printf("\tEmploys Designation ");
            printf("\tJoining Time ");
            printf("\t\t\tLeving Time \n\n\n");


             while(1)
        {
             fscanf(employs_data,"\n%s\n%s\n%s\n%s",attand.name,attand.degination,attand.date,attand.ldate);

             printf("    %s",attand.date);
               printf("\t%s",attand.name);
             printf("\t   %s",attand.degination);
             printf("\t\t%s",attand.ldate);


            c = fgetc(employs_data);
            if (c == EOF) {
             break;
            }
        }

         printf("\n\nGo to main menu press any key...");
           getch();
           system("CLS");
           bicycle_main_menu();

}
