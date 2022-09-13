
struct athentication
{
    char fname[30];
    char lname[30];
    char email[30];
    char username[30];
    char password[30];
};


void registation()
{
     int v;
        gotocoordinate(20,6);
     for (v=1; v<=25; v++)
      {
            printf("*");
      }
     printf(" *            Registation From           * ");

     for (v=1; v<=25; v++)
      {
            printf("*");
      }
      // Registation from

      FILE *fptr;
    fptr=fopen("registation.txt","w");
    if(fptr == NULL)
    {
        printf("Error at opening File!");
        exit(1);
    }

      struct athentication reg;

      printf("\nEnter First Name:\n");
      scanf("%s",reg.fname);

      printf("\nEnter Last Name:\n");
      scanf("%s",reg.lname);

      printf("\nEnter email address:\n");
      scanf("%s",reg.email);


      printf("\nEnter user Name:\n");
      scanf("%s",reg.username);

      printf("\nEnter password:\n");
      scanf("%s",reg.password);

      fprintf(fptr,"%s\n" "%s\n" "%s\n" "%s\n" "%s\n",reg.fname,reg.lname,reg.email,reg.username,reg.password);
      fclose(fptr);
      printf("\nConfirming details...\n...\nWelcome, %s!\n\n",reg.fname);
      printf("\nRegistration Successful!\n");

      getchar();
      system("cls");

      login();

}



void login()
{
     int v;
        gotocoordinate(20,6);
     for (v=1; v<=25; v++)
      {
            printf("*");
      }
     printf(" *            Login From           * ");

     for (v=1; v<=25; v++)
      {
            printf("*");
      }
      // login from

      char username[30],password[30];

    FILE *fptr;
    fptr = fopen("registation.txt","r");

    if(fptr == NULL)
    {
         printf("Error at opening File!");
        exit(1);
    }

      struct athentication reg;

      printf("\nEnter user Name:\n");
      scanf("%s",&username);

      printf("\nEnter password:\n");
      scanf("%s",&password);

    fscanf(fptr,"%s\n%s\n%s\n%s\n%s\n",reg.fname,reg.lname,reg.email,reg.username,reg.password);

    if(strcmp(username,reg.username)==0 && strcmp(password,reg.password)==0)

            {
                printf("\nSuccessful Login!\n");
                printf("Press any key to continue & move on main menu ...");
                getch();
                system("cls");
                bicycle_main_menu();
            }
        else
            {
                printf("\nIncorrect Login Details\nPlease enter the correct credentials\n\n\t\t\tOR\n");

                printf("Please enter any key to try again...");
                getch();
                system("cls");
                login();
            }
}
