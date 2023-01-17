#include <stdio.h>
int main()
{
    printf("Enter elements one by one\n");
    int arr[2][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("Inserted array is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}