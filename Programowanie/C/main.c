#include <stdio.h>
#include <stdlib.h>

struct d 
{
    int wiersze;
    int kolumny;
};

int main()
{
    struct d dane;

    printf("Podaj liczbe wierszy: ");
    scanf("%d", &dane.wiersze);
    printf("Podaj liczbe kolumn: ");
    scanf("%d", &dane.kolumny);

    for(int i = 1; i <= dane.wiersze; i++)
    {
        for(int j = 1; j <= dane.kolumny; j++)
        {
            printf("X ");
        }
        printf("\n");
    }

    return 0;
}
