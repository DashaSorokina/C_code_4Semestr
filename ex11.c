#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* twix(char* str) {
    int length=3;
    char *p=NULL;
    p=(char*) malloc(2*length);
    int i;
    for(i=0; i <length; i++){
        p[i] = str[i];
        p[i+length]= str[i];


    }
    printf("%s\n",p);
}


int main()
{
    char s[] = "abc";
    printf("%s\n",twix(s));
    return 0;
}
