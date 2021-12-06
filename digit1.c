///program to reverse a digit 

#include <stdio.h>
void display(int);

int main()
{
    int ivalue = 0;

    printf("entere the numbr\n");
    scanf("%d", &ivalue);

    display(ivalue);

    return 0;
}
void display(int ino)
{
    int digit = 0;
    

    while (ino > 0)
    {
        digit = ino % 10;
        printf("%d\n", digit);
        ino = ino / 10;
    }
}