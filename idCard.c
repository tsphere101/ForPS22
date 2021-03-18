#include <stdio.h>

void print_id_card(char name[], char food[], char color[]);
int countString(char *str);


int main()
{
    /* CODE HERE */

    char name[1024];
    char color[1024];
    char food[1024];

    printf("Enter name, color, food : ");
    scanf("%s", name);
    scanf("%s", color);
    scanf("%s", food);

    if (countString(name) > 19)
        return 0;
    if (countString(color) > 11)
        return 0;
    if (countString(food) > 11)
        return 0;


    

    printf("======================\n");
    printf("| %s", name);

    for(int i = 0 ; i < 19-countString(name);i++)
    {
        printf(" ");
    }
    printf("|\n");



    printf("| ------------------ |\n");
    printf("| Color : %s", color);

    for(int i = 0 ; i<11-countString(color);i++)
    {
        printf(" ");
    }


    printf("|\n");


    printf("| Food  : %s", food);


    for(int i = 0 ; i< 11 -countString(food);i++)
    {
        printf(" ");
    }


    printf("|\n");



    printf("======================\n");
}

int countString(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}