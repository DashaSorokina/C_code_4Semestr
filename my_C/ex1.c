#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */


int main()
{


    int a[N]; /* ������ a ������� N */
    int i;    /* ������� */
  srand(time(NULL)); /* ��������� �������� ���������� ��� */
  int min_1=1000, max_1=-1000;
    int s,c;

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
    printf("min=%d\n",min_1);
    printf("max=%d\n",max_1);


    for(i = 0; i < N; i++){
        if(i==c)
            a[i]=max_1;
        if(i==s)
            a[i]=min_1;



    }
   for(i = 0; i < N; i++){

    printf("%d\n", a[i]);
  }

    return 0;
}
