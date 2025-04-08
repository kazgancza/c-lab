#include<stdio.h>
#include<stdlib.h>

/*
Utwórz strukturę reprezentującą rachunek (dalej Rachunek).
Ma on posiadać tytuł (na przykład nazwę sklepu, w którym został zrealizowany) oraz
kwotę jaką zapłacono.
a. Dynamicznie zaalokuj tablicę 10ciu Rachunków i przypisz im wartości.
b. Napisz funkcję, która przyjmie tablicę Rachunków i zwróci nowy Rachunek o tytule
"Rachunek zbiorczy" i kwocie będącą sumą kwot wszystkich Rachunków z tablicy. 
c. Napisz funkcję, która przyjmie Rachunek i wypisze jego parametry w następujący sposób:
Rachunek "nazwa_rachunku": kwota  gdzie nazwa_rachunku i kwota to wartości pól ze struktury.
Zwróć uwagę, że nazwa_rachunku znajduje się pomiędzy symbolami "", je też należy wypisać.
d. Wypisz wszystkie rachunki oraz rachunek zbiorczy. 
*/

typedef struct
{
        char *name;
        int cost;


} Bill;

Bill total_bill(Bill* bills, int n)
{
        int i;
        int total=0;

        for(i=0; i<n; i++)
        {
                total+=bills->cost;
                bills+=1;
        }

        Bill result_bill;
        result_bill.cost = total;

        return result_bill;
}

void print_bill(Bill bill)
{
        char *a = bill.name;
        int b = bill.cost;

        printf("Rachunek \"%s\": %d\n", a, b);
}

int main()
{
        int i;
        Bill *bills = malloc(10*sizeof(Bill));

        for(i=0; i<10; i++)
        {
                bills[i].name="JYSK";
                bills[i].cost=5;
        }

        Bill total = total_bill(bills, 10);
        printf("%d\n", total.cost);

        for(i=0; i<10; i++)
        {
                print_bill(bills[i]);
        }
        print_bill(total);



        free(bills);
        bills=NULL;
        return 0;
}
