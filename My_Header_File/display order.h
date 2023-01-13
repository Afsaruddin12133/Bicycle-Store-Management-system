void display_orders() {
  printf("Displaying orders...\n");

  Order* current = front;
  while (current != NULL) {
    printf("  Name: %s\n", current->name);
    printf("  Address: %s\n", current->address);
    printf("  Model: %s\n\n", current->model);
    current = current->next;
  }

   printf("\n\nGo to main menu press any key...");
           getch();
           system("CLS");
           Customer_Menu();
}




