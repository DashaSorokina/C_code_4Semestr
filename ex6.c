#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */


int main()
{


    int a[N]; /* ������ a ������� N */
    int i;    /* ������� */
  srand(time(NULL)); /* ��������� �������� ���������� ��� */




  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf("%d\n", a[i]);
  }


for(i = 0; i < N-1; i++){
    if (abs(a[i]-a[i+1])%2==1)
        printf("%d %d\n", a[i],a[i+1]);

}




    return 0;
}
