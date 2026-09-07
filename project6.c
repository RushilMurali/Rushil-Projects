#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int numbers[3];
    numbers[0]=45;
    numbers[1]=65;
    numbers[2]=95;
    for (int i=0;i<3;i++)
    {
        printf("%i\n",numbers[i]);
    }
}