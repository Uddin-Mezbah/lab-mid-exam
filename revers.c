#include <stdio.h>
#include <string.h>
int main()
{
    char str[40]; // declare the size of character string
    //printf ("Enter a string to be reversed: ");
    scanf ("%s", str);

    // use strrev() function to reverse a string
    printf ("Reverse string: %s ", strrev(str));
    return 0;
}
