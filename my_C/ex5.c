#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */


int main()
{


    int a[N]; /* массив a размера N */
    int i,c,s,total=0,min_1=1000,max_1=-1000;    /* счетчик */
  srand(time(NULL)); /* начальное значение генератора ПСЧ */




  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf("%d\n", a[i]);
  }

 for(i = 0; i < N; i++){
            if(a[i]<min_1)
                {min_1=a[i];
                c=i;
                }
}
  for(i = 0; i < N; i++){
            if(a[i]>max_1)
                {max_1=a[i];
                s=i;
                }
}
 if (c<s){
    for(i = c+1; i < s; i++){
         total=total+a[i];}
 }
if (s<c){
    for(i = s+1; i < c; i++){
      total=total+a[i];}
 }
    printf("min=%d\n",min_1);
    printf("max=%d\n",max_1);
     printf("res=%d\n",total);





    return 0;
}
