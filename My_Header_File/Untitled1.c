#include<stdio.h>
#include<string.h>


int main()
{
    int i;
    char email[] = "afsaruddin@gmail.com";
    int length = strlen(email);

    for( i=0;i<length;i++)
    {
        if(email[i]== "@")
        {
            printf("found similar Char\n");
        }else
        {
            printf("don't find similar char\n");
        }
    }
}
