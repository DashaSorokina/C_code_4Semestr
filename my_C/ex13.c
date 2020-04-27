/*Функция, которая принимает параметром строку и символ
 и возвращает адрес первого вхождения этого символа в строку.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *strTo(char *s, char c) {
    int i ;
    char *res;
    i=0;
    while (s[i] != c && s[i] != '\0'){

    if (i == strlen(s))
        return -1;
    else
       return  res=&s[i+1];

    i++;}
}


int main()
{
    char a[] = "abcd";
    char b = 'c';
    printf("%d", strTo(a, b));
    return 0;
}
