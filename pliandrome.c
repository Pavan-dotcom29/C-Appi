#include <stdio.h>
#include <stdbool.h>
int reverse(int);
bool checkplaindrome(int);
int main()
{
    int ivalue = 0;
    bool bret = false;
    printf("enter the number\n");
    scanf("%d", &ivalue);
    bret = checkplaindrome(ivalue);
    if (bret == true)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not palinderome");
    }
    return 0;
}
int reverse(int ino)
{
    int idigit = 0, irev = 0;
    while (ino != 0)
    {
        idigit = ino % 10;
        irev = (irev * 10) + idigit;
        ino = ino / 10;
    }
    return irev;
}

bool checkplaindrome(int iInput)
{
    int Inumber = 0;
    Inumber = reverse(iInput);
    {
        if (Inumber == iInput)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
