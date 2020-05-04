#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island {
	char *name;
	struct island * next;
} island;

void display(island *start){
	island *i = start;
	for ( ; i != NULL; i=i->next){
		printf("Name %s\n", i->name);
	}
}

void release(island *start){
	island *i = start;
	island *next = NULL;
	for ( ; i != NULL ; i = next){
		next = i->next;
		free(i->name);
		free(i->next);
		free(i);
	}
}

void menu()
{
    char s[6][100] = {
        "1)Create the first element",  "2)Add to the end",  "3)Delete last",
        "4)Print list",  "5)Delete all","6)Search element", "7)Exit"
        };
    int i;
    printf("\n%s","Menu:\n");
    for(i=0;i<7;i++)
        printf("%s\n",s[i]);
}


int main()
{
    int a, n, l;
    int node = 0, N=1;
    char t;
    char name[50][50];

    island *arr = (island*)malloc(sizeof(island));
    while(t != '7'){
        do{
            menu();
            scanf("%s",&t);
        }while(t>'7');
        if(t == '1'){
            if(node == 0){
                node = 1;
                do{
                    printf("\n%s","Name:");
                    scanf("%s",&name[0]);
                    l = strlen(name[0]);
                }while(l>50);

                arr[0].name = name[0];
                arr[0].next = NULL;
            }
            else
                printf("\n%s","The first element was created.\n");
            }
        if(t == '2'){
            if(node != 0){
                do{
                    printf("\n%s","Name:");
                    scanf("%s",&name[N]);
                    l = strlen(name[N]);
                }while(l>50);


                arr = (island*)realloc(arr, sizeof(island)*(N+1));
                arr[N].name = name[N];
                arr[N].next = NULL;
                arr[N-1].next = &arr[N];
                N += 1;
            }
            else
                printf("\n%s","First element does not exist. Create the first element.\n");
        }
        if(t == '3'){
            if(N>1){
                arr[N-2].next = NULL;
                N--;
            }
            else{
                free(&arr[0]);
                island *arr = (island*)malloc(sizeof(island));
                node = 0;
            }
        }
        if(t == '4')
            if(node == 0)
                printf("\n%s\n","Empty list.");
            else
                display(&arr[0]);
        if(t == '5'){
            if(node != 0){
                release(&arr[0]);
                N = 1;
                island *arr = (island*)malloc(sizeof(island));
                node = 0;
            }
        }
        if(t == '6'){
            char word[50];
            do{
                printf("\n%s","name:");
                scanf("%s",&word);
                l = strlen(word);
            }while(l>50);
            for(a = 0; a < N; a++){
                if (strcmp (arr[a].name, word)==0)
                    printf("\n%s \n",a);
            }
        }
    }
    return 0;

}

