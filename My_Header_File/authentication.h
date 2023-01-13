
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

      int length = strlen(reg.email);
      int flag = 0;

      /// Linear Search ...
      for(int i = 0; i < length; i++)
      {
          if(reg.email[i] == '@')
          {
              flag = 1;

          }
      }

      if(flag == 0)
      {
                 printf("\nWarning:This Email address is not correct!\n");
                printf("\nEnter email address:\n");
                scanf("%s",reg.email);
      }

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
                printf("\nSuccessful Login!\n\n");
                ///Ask user are you customar or owner?
                 system("cls");
                askUser();
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
