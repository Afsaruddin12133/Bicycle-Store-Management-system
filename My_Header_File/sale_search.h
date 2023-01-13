


void sale_search(){

       FILE* stockdata = fopen("sale_record.txt", "r");

        if(stockdata == NULL)
        {
        printf("Error at opening File!");
        exit(1);
        }


    char value[100];
    char item[100];

    printf("Please give me Product code which you want to find :");
    scanf("%s",&item);

    while (fscanf(stockdata, "%s", &value) == 1) {


        if ( strcmp(value ,item)==0) {
            printf("\n\nProduct exist in sale product record!  %s!\n\n",item);
            goto start;
        }
    }



     printf("Product not exist in sale product record!\n\n");

    start:
    fclose(stockdata);

     printf("Go to main menu press any key...");
       getch();
       system("CLS");
       Owmer_Menu();

}
