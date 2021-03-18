#include <stdio.h>
#include <stdbool.h>

bool has_lower_case(char string[]);
bool has_upper_case(char string[]);
bool has_number(char string[]);
bool check_length(char string[], int length);

int main()
{
    char password[20];
    printf("Enter password : ");
    scanf("%s", &password);
    /* CODE OUTPUT HERE */

    printf("verifying . . .\n");

    if (check_length(password, 8))
    {
        if (has_lower_case(password) && has_upper_case(password) && has_number(password))
        {
            printf("> Your password is strong!");
        }

        else
        {
            printf("> Your password is weak!");
        }
    }
    else
    {
        printf("> Your password is weak!");
    }
}

bool has_lower_case(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i])
            return 1;
    }
    return 0;
}

bool has_upper_case(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            return 1;
    }
}

bool has_number(char str[])
{
    int check_status = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
            return 1;
    }
    return 0;
}

bool check_length(char str[], int length)
{

    int i = 0;
    while (str[i] != 0)
        i++;

    if (i >= length)
        return 1;
    else
        return 0;
}