#include <stdio.h>
#define max 10
// taking input of array from user and transversing it
int main()
{
    int size, pos, i;
    int arr[max] = {0};
    printf("Enter the size of an array \n");
    scanf("%d", &size);
    if (size < 10)
    {
        printf("Enter the elemets one  by one\n");
        // taking input
        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
        // deleting an element from given position
        printf("Enter the position from where you want to delete the element.\n");
        scanf("%d", & pos);
        for (i = pos - 1; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        size = size - 1;
        printf("The element is deleted from position %d\n",pos);

        // printing output as array
        printf("Modified array is...\n");
        for (i = 0; i < size; i++)
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