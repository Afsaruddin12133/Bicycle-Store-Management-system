

typedef struct Order {
  char* name;
  char* address;
  char* model;
  struct Order* next;
} Order;

// Define a linked list to store the orders
Order* front = NULL;
Order* rear = NULL;
void enqueue(Order* order) {

}


void order_bicycle() {

    printf("\n\n\nEnter new order(Y/N)?");
    while(toupper(getche())=='Y')
     {
         system("cls");
    char name[100];
      char address[100];
      char model[100];

      printf("Enter customer name: ");
      fgets(name, sizeof(name), stdin);
      name[strcspn(name, "\n")] = 0;

      printf("Enter shipping address: ");
      fgets(address, sizeof(address), stdin);
      address[strcspn(address, "\n")] = 0;

      printf("Enter model of bicycle: ");
      fgets(model, sizeof(model), stdin);
      model[strcspn(model, "\n")] = 0;
      // Create a new order
      Order* new_order = (Order*)malloc(sizeof(Order));
      new_order->name = strdup(name);
      new_order->address = strdup(address);
      new_order->model = strdup(model);
      new_order->next = NULL;

      // Add the new order to the queue
      if (rear == NULL) {
        front = rear = new_order;
      } else {
        rear->next = new_order;
        rear = new_order;
  }
    printf("\nSuccessful added order ! ");
   printf("\n\n\nEnter new order(Y/N)?");
     }


           printf("\n\nGo to main menu press any key...");
           getch();
           system("CLS");
           Customer_Menu();
}
