// n = 123
// rev = 321 // not a palindrome
// n = 121
// rev = 121 // it is a palindrome

#include <stdio.h>
int main()
{
    int n = 2324, rev = 0;
    int org = n;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    // printf("%d %d", n, rev);
    if (org == rev)
    {
        printf("It is a palindrome..");
    }
    else
    {
        printf("It isn't palindrome..");
    }
    return 0;
}