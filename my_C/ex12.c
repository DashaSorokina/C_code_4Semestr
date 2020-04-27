/*Функция, возвращающая строку, "склеенную" из двух строк: f("ab", "cd") должна вернуть "abcd"*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* join(char *s1, char *s2)
 {   int i=0;
     int len1 = strlen(s1);
     int len2 = strlen(s2);
     char *str = malloc((len1+len2)*sizeof(char));
     while(i<len1){
        str[i]=s1[i];
        i++;
     }
    i=0;
     while(i<len2){
         str[i+len1] = s2[i];
         i++;
     }
     return str;
 }

int main()
{
    char* s1 = "ab";
    char* s2 = "cd";
    printf("%s", join(s1,s2));

    return 0;
}
