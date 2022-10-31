#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
#define N 1000
 
int main()
{
    for (int t = N + 100; t <= N + 999; t++)
    {
        int val = abs(t - 1000);
        for (int k = val; k <= 999 && val >= 100; k++)
        {
            int n = (k * 10) + 1;
            if ((n / t) == 3 && (n % t) == 0) printf("%d ",t);
        }
    }
 
    printf("\n");
        
    _getch();
 
    return 0;
}