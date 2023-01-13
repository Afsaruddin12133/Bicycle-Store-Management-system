COORD coordinates = {0,0};
void gotocoordinate(int x,int y)
{
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}





void console_screen(int a,int b,int c,int d)
{
    int v;
    system("cls");

    gotocoordinate(20,13);
    for (v=1; v<=25; v++)
      {
            printf("*");
      }
    printf(" * Bicycle Store Management System * ");
    for (v=1; v<=25; v++)
      {
            printf("*");
      }
      gotocoordinate(20,14);
    for (v=1; v<=25; v++)
      {
            printf("*");
      }
    printf(" * For User * ");
    for (v=1; v<=25; v++)
      {
            printf("*");
      }

    for (v=a; v<=b; v++)
    {
        gotocoordinate(v,17);
        printf("\xcd");
        gotocoordinate(v,19);
        printf("\xcd");
        gotocoordinate(v,c);
        printf("\xcd");
        gotocoordinate(v,d);
        printf("\xcd");
    }
}
void console_screen1(int a,int b,int c,int d)
{
    int v;
    system("cls");

    gotocoordinate(20,13);
    for (v=1; v<=25; v++)
      {
            printf("*");
      }
    printf(" * Bicycle Store Management System * ");
    for (v=1; v<=25; v++)
      {
            printf("*");
      }
      gotocoordinate(20,14);
    for (v=1; v<=25; v++)
      {
            printf("*");
      }
    printf(" * For Shop Owner & Employs * ");
    for (v=1; v<=25; v++)
      {
            printf("*");
      }

    for (v=a; v<=b; v++)
    {
        gotocoordinate(v,17);
        printf("\xcd");
        gotocoordinate(v,19);
        printf("\xcd");
        gotocoordinate(v,c);
        printf("\xcd");
        gotocoordinate(v,d);
        printf("\xcd");
    }
}
