#include<stdio.h>

typedef struct
{
    int money;
    char currency[3];
} Wallet;

void move_money(Wallet *left, Wallet *right, int value)
{
    if (*left->currency == *right->currency && left->money >= value) 
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
    *first.currency = "PLN";
    second.money = 200;
    *second.currency = "PLN";

    move_money(&first, &second, 75);

    printf("%d\n%d\n", first.money, second.money);

    return 0;
}
