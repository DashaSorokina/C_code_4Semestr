#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */


int main()
{


    int a[N]; /* ������ a ������� N */
    int i,k;    /* ������� */
  srand(time(NULL)); /* ��������� �������� ���������� ��� */




  for(i = 0; i < N; i++){
    a[i] = rand()%10;
    printf("%d\n", a[i]);
  }


 for(i = 0; i < N-1; i++){
    if(a[i]<a[i+1])
    k=k+1;

 }

    if(k==N)
        printf("Sequence rise");
    else
        printf("Sequence do not rise");



    return 0;
}
