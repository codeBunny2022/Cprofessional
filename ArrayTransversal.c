#include <stdio.h>
#define max 10
// taking input of array from user and transversing it
int main()
{
    int size=0;
    int arr[max] = {0};
    printf("Enter the size of an array \n");
    scanf("%d", &size);
    if (size < 10)
    {
        printf("Enter the elemets one  by one\n");
        // taking input
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
        // printing output as array
        printf("Inserted array is...\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d \t \n", arr[i]);
        }
    }
    else
    {
        printf("Size is out of allocated memory!!");
    }
    return 0;
}