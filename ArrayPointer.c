#include <stdio.h>
#define max 10
// taking input of array from user and transversing it
int main()
{
    int size=0;
    int arr[max] = {0};
    int *ptr = & arr[0];
    printf("Enter the size of an array \n");
    scanf("%d", &size);
    if (size < 10)
    {
        printf("Enter the elemets one  by one\n");
        // taking input
        for (int i = 0; i < size; i++)
        {
            scanf("%d", ptr+i);
        }
        // printing output as array
        printf("Inserted array is...\n");
        int * ptr =  & arr[0];
        for (int i = 0; i < size; i++)
        {
            printf("%d \t \n", *ptr);
            ptr++;
        }
    }
    else
    {
        printf("Size is out of allocated memory!!");
    }
    return 0;
}