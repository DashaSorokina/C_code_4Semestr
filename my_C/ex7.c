#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */


int main()
{


    int a[N]; /* ������ a ������� N */
    int i,s=0;    /* ������� */
  srand(time(NULL)); /* ��������� �������� ���������� ��� */




  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf("%d\n", a[i]);
  }


        for(i = 0; i < N/2; i=i+1){
            if (a[i]==a[N-i])
                s=s+1;

}
if (s==N/2)
printf("Symmetric");
else
printf("No");







    return 0;
}
