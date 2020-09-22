#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int i;
    int j;
    int x;
    int w;
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
            for (w = Height; w > i; w--)
            {
                printf(" ");
            }
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
