#include <stdio.h>
void main(){
    int t, N ,k ,v,n;
  N=1000;
	for (t = N + 100; t <= N + 999; t++)
	{
	v = abs(t - 1000);	
	for ( k = v; k <= 999 && v >= 100; k++)
        {
            n = (k * 10) + 1;
            if ((n / t) == 3 && (n % t) == 0) printf("%d ",t);
        }
	}
    printf("\n");
}
