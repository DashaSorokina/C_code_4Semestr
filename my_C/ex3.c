#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20 /* ���������� ��������� ������� */


int main()
{


    int a[N]; /* ������ a ������� N */
    int i,j,s,max=0;    /* ������� */
  srand(time(NULL)); /* ��������� �������� ���������� ��� */




  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf("%d\n", a[i]);
  }

 for(j = 0; j < N; j++){
        s=0;
        for(i = 0; i < N; i++){
            if(a[i]==a[j])
                s=s+1;
               }
            if(max<s)
            max=s;
}



    printf("max=%d\n",max);






    return 0;
}
