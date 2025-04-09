#include <stdio.h>
#include <string.h>

typedef struct
{
    int money;
    char currency[4];
} Wallet;

void move_money(Wallet *left, Wallet *right, int value)
{
    if (strcmp(left->currency, right->currency) == 0 && left->money >= value) 
    {
        right->money += value;
        left->money -= value;
    }
}

int main()
{
    Wallet first;
    Wallet second;

    first.money = 100;
    strcpy(first.currency, "PLN");

    second.money = 200;
    strcpy(second.currency, "PLN");

    move_money(&first, &second, 75);

    printf("%d\n%d\n", first.money, second.money);

    return 0;
}