///program of number of digit

#include <stdio.h>
int display(int);
int main()
{
    int ivalue = 0, iret = 0;

    printf("entere the numbr\n");
    scanf("%d", &ivalue);

    iret = display(ivalue);
    printf("additon is %d\n", iret);

    return 0;
}
int display(int ino)
{
    int digit = 0;
    int isum = 0;

    while (ino > 0)
    {
        digit = ino % 10;
        isum = isum + digit;
        ino = ino / 10;
    }
    return isum;
}