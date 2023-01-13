

void askUser() {
  printf("Are you a customer or an owner?\n");
  printf("Enter 1 for owner or 2 for customer: ");

  int choice;
  scanf("%d", &choice);

  switch (choice) {
    case 1:
      Owmer_Menu();
      break;
    case 2:
      Customer_Menu();
      break;
    default:
      printf("Invalid choice.\n");
      askUser();
  }
}

