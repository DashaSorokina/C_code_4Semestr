#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */


int main()
{


    int a[N]; /* ������ a ������� N */
    int i,answ;    /* ������� */
  srand(time(NULL)); /* ��������� �������� ���������� ��� */
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
