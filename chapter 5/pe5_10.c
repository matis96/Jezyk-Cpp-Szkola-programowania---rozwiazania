//zad10.c
#include <stdio.h>

int main()
{
    int wiersze;
    printf("Podaj liczbe wierszy: ");
    scanf("%d", &wiersze);
    for (int i = 0; i< wiersze; i++)
    {
        for (int k = 0; k < wiersze - i-1; k++)
            printf(".");
        for (int j = 0; j<i+1; j++)
            printf("*");
        printf("\n");
    }
}
