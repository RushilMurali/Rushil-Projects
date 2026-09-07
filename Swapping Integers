#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int*b)
{
        int temp=*a;
        *a=*b;
        *b=temp;
}
int main(void)
{
    int *a=malloc(sizeof(int));
    *a= 1;
    int *b=malloc(sizeof(int));
    *b= 2;
    printf("Before swapping %i\n",*a,*b);
    swap(a,b);
    printf("After swapping %i\n",*a,*b);
free(a);
free(b);
}
