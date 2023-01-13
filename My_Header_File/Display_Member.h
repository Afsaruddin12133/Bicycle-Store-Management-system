



void   Display_Member(struct node *root)
{
  if (root != NULL) {
    printf("Name: %s, Bike Type: %s, Age: %d\n", root->name, root->bike_type, root->age);
    Display_Member(root->left);
    Display_Member(root->right);
  }

}
