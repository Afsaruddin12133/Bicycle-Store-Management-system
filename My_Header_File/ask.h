void ask()
{
    int v;
        gotocoordinate(20,6);
     for (v=1; v<=25; v++)
      {
            printf("*");
      }
     printf(" * Bicycle Store Management System * ");

     for (v=1; v<=25; v++)
      {
            printf("*");
      }
      // To ask Registade or not..

     gotocoordinate(45,10);
     printf("Are You Already Registade(Y/N)?");
     if(toupper(getche())=='Y')
    {
     system("cls");
      login();
    }else
    {

      system("cls");
     registation();
    }
}
