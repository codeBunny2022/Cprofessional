#include <stdio.h>
#define max 10
// taking input of array from user and transversing it
int main()
{
    int size = 6, ele, i, pos;
    int arr[max] = {1, 2, 3, 4, 5, 6};
    printf("Enter the element you want to enter\n");
    scanf("%d", &ele);
    printf("Enter the position at which you want to enter\n");
    scanf("%d", &pos);
    // inserting element inside array at specified position
    for (i = size - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = ele;
    // printing output as array
    printf("Modified array is...\n");
    for (i = 0; i < 7; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
    // this code is to insert element at first position
    /*for(i=size-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=ele;
    size++;*/
    // here comes the code to insert element inside an unsorted array
    /*arr[size]=arr[pos-1];
    arr[pos-1]=ele;*/
}