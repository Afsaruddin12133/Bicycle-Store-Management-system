struct node {
  char name[50];
  char bike_type[50];
  int age;
  struct node *left;
  struct node *right;
};


void Bicycle_club()
{
   struct node *root = NULL;

  // Insert data into the tree by prompting the user for input
  char name[50];
  char bike_type[50];
  int age;
  char input[5];
      printf("\n\n\nEnter new member(Y/N)?");
    while(toupper(getche())=='Y')
    {
          printf("\nEnter name: ");
    scanf("%s", name);
    printf("Enter bike type: ");
    scanf("%s", bike_type);
    printf("Enter age: ");
    scanf("%d", &age);
    insert(&root, name, bike_type, age);
      Display_Member(root);
     printf("\nSuccessful added! ");
   printf("\n\n\nEnter new member(Y/N)?");
    }

   printf("\n\nGo to main menu press any key...");
           getch();
           system("CLS");
           Customer_Menu();

}


struct node* create_node(char name[], char bike_type[], int age) {
  struct node *new_node = (struct node*)malloc(sizeof(struct node));
  strcpy(new_node->name, name);
  strcpy(new_node->bike_type, bike_type);
  new_node->age = age;
  new_node->left = NULL;
  new_node->right = NULL;
  return new_node;
};

void insert(struct node **root, char name[], char bike_type[], int age) {
  if (*root == NULL) {
    *root = create_node(name, bike_type, age);
  } else if (age < (*root)->age) {
    insert(&((*root)->left), name, bike_type, age);
  } else {
    insert(&((*root)->right), name, bike_type, age);
  }
};
