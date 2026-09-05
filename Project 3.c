#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int* x=malloc(3*sizeof(int));
    x[1]=34;
    x[2]=56;
    x[3]=65;
    printf("%i\n",x[1]);
}