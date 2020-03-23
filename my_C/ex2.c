#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */


int main()
{


    int a[N]; /* массив a размера N */
    int i,answ;    /* счетчик */
  srand(time(NULL)); /* начальное значение генератора ПСЧ */
  double min,r;



  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf("%d\n", a[i]);
  }
  scanf("Enter double number%fl\n", &r);

 min=fabs((double)a[0]-r);
 for(i = 0; i < N; i++){
    if(fabs((double)a[i]-r)<min){
        min=fabs((double)a[i]-r);
        answ=a[i];}
 }

    printf("res=%d\n",answ);



    return 0;
}
