#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
    char typeChosed[] = "";
    char types[4][4] = {"+", "-", "*", "/"};
    int n1, n2, sum, loop = 0;
    void invalidOption()
    {
        printf("===============================\n");
        printf("invalid option. try again.\n");
        printf("===============================\n");
    }
    while (loop == 0)
    {

        Sleep(1000);
        printf("choose: +, -, * or /.\n");
        scanf("%s", typeChosed);

        if (strcmp(typeChosed, types[0]) == 0 || strcmp(typeChosed, types[1]) == 0 || strcmp(typeChosed, types[2]) == 0 || strcmp(typeChosed, types[3]) == 0)
        {
            printf("choose number one: \n");
            if (scanf("%d", &n1) == 1)
            {
                printf("choose number two: \n");
                if (scanf("%d", &n2) == 1)
                {
                    if (strcmp(typeChosed, types[0]) == 0)
                    {
                        sum = n1 + n2;
                        printf("%d + %d = %d\n", n1, n2, sum);
                        break;
                    }
                    if (strcmp(typeChosed, types[1]) == 0)
                    {
                        sum = n1 - n2;
                        printf("%d - %d = %d\n", n1, n2, sum);
                        break;
                    }
                    if (strcmp(typeChosed, types[2]) == 0)
                    {
                        sum = n1 * n2;
                        printf("%d * %d = %d\n", n1, n2, sum);
                        break;
                    }
                    if (strcmp(typeChosed, types[3]) == 0)
                    {
                        sum = n1 / n2;
                        printf("%d / %d = %d\n", n1, n2, sum);
                        break;
                    }
                    else
                    {
                        invalidOption();
                    }
                }
                else
                {
                    invalidOption();
                }
            }
            else
            {
                invalidOption();
            }
        }
        else
        {
            invalidOption();
        }
    }

    return 0;
}