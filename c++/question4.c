#include <stdio.h>
#include <conio.h>

int main()
{
    int n, count = 0, check, k = 0, arr[1000];
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        check = 1;
        for (int j = 2; j <=i / 2; j++)
        {
            if (i % j == 0)
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            arr[k] = i;
            k++;
        }
            
    }

        for (int i = 2; i < k; i++)
        {
            int sum = 0;
            for (int j = 0; j < k; j++)
            {
                sum = sum + arr[j];
                if (sum == arr[i])
                {
                    count++;
                    break;
                }
                if (sum > arr[i])
                {
                    break;
                }
            }
        }
    
    printf("%d", count);
    return 0;
}