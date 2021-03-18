#include <stdio.h>
int root1(int a, int b, int c);
int root2(int a, int b, int c);
int sqrtInt(int a);

int main()
{
    int a, b, c;
    float ans1, ans2;
    printf(" *** Quadratic Solver ***\n");
    printf(" *   ax^2 + bx + c = 0  *\n");
    printf(" ************************\n\n");
    printf("Enter a b c : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0)
    {
        printf("a cannot be zero ! ! !\n");
        return 0;
    }

    int x1 = root1(a, b, c);
    int x2 = root2(a, b, c);

    if (x1 == x2)
    {
        printf("x = %d", root1(a, b, c));
    }
    else if (x1 < x2)
    {
        printf("x1 = %d", x1);
        printf("\nx1 = %d", x2);
    }
    else
    {
        printf("x1 = %d", x2);
        printf("\nx2 = %d", x1);
    }

    return 0;
}

int root1(int a, int b, int c)
{
    return ((-b + sqrtInt(b * b - 4 * a * c)) / (2 * a));
}

int root2(int a, int b, int c)
{
    return ((-b - sqrtInt(b * b - 4 * a * c)) / (2 * a));
}

int sqrtInt(int a)
{
    for (int i = 0; i < a; i++)
    {
        if (i * i == a)
            return i;
    }
}
