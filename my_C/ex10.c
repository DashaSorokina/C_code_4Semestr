#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int counter(char *str) {
    int i = 0;
    int n = 0;
    while (str[i] != '\0')
        {
        if ('0' <= str[i] && str[i] <= '9')
            n=n+1;
        i++;
       }
    return n ;
}

int main()
{
    char s[] = "Hello45wor1d";
    printf("%d\n", counter(s));
    return 0;
}
