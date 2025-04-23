#include<stdio.h>

int change_i_bit(int x, int i)
{
    return x | (1 << i);
}

int main()
{
    int x;
    int i;

    scanf("%d", &x);
    scanf("%d", &i);

    printf("Przed: %d\nPo: %d\n", x, change_i_bit(x, i));

    return 0;
}