
struct view_attan {

    char name[30];
    char degination[30];
    char jtime[30];
    char jdate[30];
    char ltime[30];

};

void view_attendences()

{
    int v,c;
     gotocoordinate(20,7);
     for (v=1; v<=25; v++)
      {
            printf("*");
      }
     printf(" * View Attendence  * ");

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
            printf("\t\tEmploys Designation ");
            printf("\t\tJoining Time");
            printf("\t\tLeving Time \n\n\n");


             while(1)
        {

             fscanf(employs_data,"%s\n%s\n%s\n%s\n",attand.jdate,attand.name,attand.degination,attand.jtime);

             fscanf(employs_data,"%s\n",attand.ltime);


              printf("\n\t%s\t%s\t\t\t%s   \t\t  %s\t\t  %s",attand.jdate,attand.name,attand.degination,attand.jtime,attand.ltime);



            c = fgetc(employs_data);
            if (c == EOF) {
                     printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t   ");
             break;
            }
        }

         printf("\n\nGo to main menu press any key...");
           getch();
           system("CLS");
           Owmer_Menu();

}
