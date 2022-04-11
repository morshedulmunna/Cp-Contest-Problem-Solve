#include <stdio.h>

int main()
{

    int n, i;
    scanf("%d", &n);

    int arr[n];
    
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] != i)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}