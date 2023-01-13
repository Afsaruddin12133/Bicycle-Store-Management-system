void delete_order(char* name) {

  Order* current = front;
  Order* previous = NULL;

  while (current != NULL) {
    if (strcmp(current->name, name) == 0) {
      // Found the order to delete
      if (previous == NULL) {
        // Deleting the first order in the queue
        front = current->next;
      } else {
        previous->next = current->next;
      }
      if (current->next == NULL) {
        // Deleting the last order in the queue
        rear = previous;
      }
      free(current);
      printf("\nSucessfull deleted !\n");
      display_orders();
      return;
    }
    previous = current;
    current = current->next;
  }
  printf("Error: Order not found\n");
   display_orders();
}
