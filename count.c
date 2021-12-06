///program to write a sum of even digit numbers
#include <stdio.h>
int counteven(int);
int main()
{
    int ivalue = 0, iret = 0;
    printf("ebter the number\n");
    scanf("%d", &ivalue);
    iret = counteven(ivalue);
    printf("number of even didgits%d\n", iret);
    return 0;
}

int counteven(int ino)
{
    int icnt = 0;
    int idigit = 0;

    while (ino > 0)
    {

        if (ino < 0)
        {
            ino = -ino;
        }
        while (ino > 0)
        {
            idigit = ino % 10;
            if (idigit % 2 == 0)
            {
                icnt++;
            }
            ino = ino / 10;
        }
        return icnt;
    }
}