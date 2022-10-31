#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int isValid(char number[])
{   int sum = 0, i = 0, rightSum = 0, rightDigits = 0, count = 0;
    char a,b;
    
    for( ;i<4; i++)
        sum += (int)number[i] - 48;
    if(sum == 30)
        rightSum = 1;
 
    a = number[0];
    count++;
    for(i = 2; i<4; i++)
    {   if(count == 1 && number[i] != a)
        {   b = number[i];
            count++;
        }
        else if(count == 2 && number[i] != a && number[i] != b)
            count++;
    }
 
    if(count<=2)
        rightDigits = 1;
 
    return rightSum && rightDigits;
}
 
int main()
{   char buf[6];
    int a = 2*7*11, i = 2, check;
    
    for(;;i++)
    {   check = a*i;
        itoa(check, buf, 10);
        if(strlen(buf) < 4)
            continue;
        else if(strlen(buf)==4 && isValid(buf))
        {   printf("Number: %s", buf);
            break;
        }
    }
 
    getchar();
    return 0;
}
