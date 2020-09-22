#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int test = 0;
    int i;
    int j;
    int x;
    int Height;
    Height = get_int("Select a height between 1 and 8\n");
    while (Height < 1 || Height > 8)
    {
        Height = get_int("Select a height between 1 and 8\n");
    }
    if (Height >= 1 && Height <= 8)
    {
        for (i = 1; i <= Height; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("#");
            }
            printf("  ");
            for (x = 1; x <= i; x++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}
