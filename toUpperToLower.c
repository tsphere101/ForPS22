#include <stdio.h>
#include <ctype.h>
int print_my_toupper(char* str);
int print_my_toLower( char * str);

int main()
{
    printf("Enter a string : ");
    char str[1000];


    fgets(str,1000,stdin);

    printf("Capital : ");
    print_my_toupper(str);
    // printf("\n");
    printf("Small : ");
    print_my_toLower(str);


    return 0;
}

int print_my_toupper(char* str)
{
    for(int i = 0 ; str[i] != '\0'; i++)
    {
        printf("%c",toupper(str[i]));
    }
}

int print_my_toLower( char * str)
{
    for(int i = 0 ; str[i] != '\0'; i++)
    {
        printf("%c",tolower(str[i]));
    }
}