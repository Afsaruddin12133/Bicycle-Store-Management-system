void Owmer_Menu()
{
    int a;
    char* menu[]= {"  Sale Product","  Total Sale","  Sale Search","  Add Stock","  View Stock","  Employs Attendents","   View Attendents" ,"  Exit"};
    system("cls");
    console_screen1(40,85,23,33);
    gotocoordinate(60,20);
    printf("MAIN MENU");
    for (a=0; a<=5; a++)
    {
        gotocoordinate(55,23+a+1);
        printf("%s\n\n\n\n\n\n\n\n\n",menu[a]);
    }
    curser(1);

}


void curser(int number)
{
    int count = 1;
    int curmove = 0;

    while(1)
    {
        switch(curmove)
        {
        case 80:
            count++;
            if(count == 9)
            {
                count=1;
            }
            break;
        case 72:
            count--;
            if(count == 0)
            {
                count =8;
            }
            break;
        }


        hilightor(number,count);
        curmove = getch();


        if(curmove == 13)
        {
           if(number==1)
           {
                if (count==1)
                {
                    system("CLS");
                    sale_product();
                    break;

                }else if(count == 2)
                {
                    system("CLS");
                  total_sale();
                    break;
                }else if(count == 3)
                {
                    system("CLS");
                    sale_search();
                    break;
                }else if(count == 4)
                {
                    system("CLS");
                    add_stocks();
                    break;
                }else if(count == 5)
                {
                    system("CLS");
                   view_views();
                    break;
                }else if(count == 6)
                {
                    system("CLS");
                   employs_attendent();
                    break;
                }else if(count == 7)
                {
                    system("CLS");
                  view_attendences();
                    break;
                }
                 else if(count == 8)
                {
                    system("CLS");
                    welcome_page();
                    break;
                }

                else{
                 exit(0);
                }
           }
        }
    }
}


void hilightor (int number,int count)
{
    if(number==1)
    {

        gotocoordinate (55,24);
        printf("  Sale Product");
        gotocoordinate (55,25);
        printf("  Total Sale");
        gotocoordinate (55,26);
        printf("  Sale Search");
        gotocoordinate (55,27);
        printf("  Add Stock");
        gotocoordinate (55,28);
        printf("  View Stock ");
        gotocoordinate (55,29);
        printf("  Employs Attendents");
        gotocoordinate (55,30);
        printf("  View Attendents");
        gotocoordinate (55,31);
        printf("  Exit");
    }

        switch(count)
        {
        case 1:
            gotocoordinate (55,24);
            printf("=>Sale Product");
            break;
        case 2:
            gotocoordinate (55,25);
            printf("=>Total Sale");
            break;
        case 3:
            gotocoordinate (55,26);
            printf("=>Sale Search");
            break;
        case 4:
            gotocoordinate (55,27);
            printf("=>Add Stock");
            break;
        case 5:
            gotocoordinate (55,28);
            printf("=>View Stock ");
            break;
        case 6:
            gotocoordinate (55,29);
            printf("=>Employs Attendents");
            break;

        case 7:
            gotocoordinate (55,30);
            printf("=>View Attendents");
            break;
        case 8:
            gotocoordinate (55,31);
            printf("=>Exit");
            break;
        }
    }





