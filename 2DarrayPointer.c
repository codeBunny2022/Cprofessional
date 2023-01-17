#include <stdio.h>
int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int *ptr;
    ptr =&arr[0][0];
    for (int i = 0; i < 9; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
    return 0;
}