#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *list=malloc(3*sizeof(int));
    *list=34;
    *(list+1)=56; 
    *(list+2)=65;
    for (int i=0;i<3;i++)
    {
        printf("%i\n",*(list+i));
    }
    free(list);
}