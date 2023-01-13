void Customer_Menu()
{
    int a;
    char* menu[]= {"  Order bicycle","  Display Order","  Order Cancel","  Bicycle club",  "Exit"};
    system("cls");
    console_screen(40,85,23,33);
    gotocoordinate(60,20);
    printf("MAIN MENU");
    for (a=0; a<=4; a++)
    {
        gotocoordinate(55,23+a+1);
        printf("%s\n\n\n\n\n\n\n\n\n",menu[a]);
    }
    curser1(1);

}


void curser1(int number)
{
    int count = 1;
    int curmove = 0;

    while(1)
    {
        switch(curmove)
        {
        case 80:
            count++;
            if(count == 6)
            {
                count=1;
            }
            break;
        case 72:
            count--;
            if(count == 0)
            {
                count =5;
            }
            break;
        }


        hilightor1(number,count);
        curmove = getch();


        if(curmove == 13)
        {
           if(number==1)
           {
                if (count==1)
                {
                    system("CLS");
                    order_bicycle();
                    break;

                }else if(count == 2)
                {
                    system("CLS");
                  display_orders();
                    break;
                }else if(count == 3)
                {
                    system("CLS");
                  char name[100];
                     printf("Enter customer name: ");
                      fgets(name, sizeof(name), stdin);
                      name[strcspn(name, "\n")] = 0;
                    delete_order(name);
                    break;
                }else if(count == 4)
                {
                    system("CLS");
                   Bicycle_club();
                    break;
                }

                else{
                 exit(0);
                }
           }
        }
    }
}


void hilightor1 (int number,int count)
{
    if(number==1)
    {

        gotocoordinate (55,24);
        printf("  Order bicycle");
        gotocoordinate (55,25);
        printf("  Display Order");
        gotocoordinate (55,26);
        printf("  Order Cancel");
        gotocoordinate (55,27);
        printf("  Bicycle club");
        gotocoordinate (55,28);
        printf("  Exit");
    }

        switch(count)
        {
        case 1:
            gotocoordinate (55,24);
            printf("=>Order bicycle");
            break;
        case 2:
            gotocoordinate (55,25);
            printf("=>Display Order");
            break;
        case 3:
            gotocoordinate (55,26);
            printf("=>Order Cancel");
            break;
        case 4:
            gotocoordinate (55,27);
            printf("=>Bicycle club");
            break;

        case 5:
            gotocoordinate (55,28);
            printf("=>Exit");
            break;
        }
    }





