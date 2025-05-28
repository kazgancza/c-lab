#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct
{
    char symbol;
    int second_arg; // True for 2 args
    float (*func)(float, float);

} Operation;


typedef struct
{
    float current_value;
    Operation* operations;
    int operations_quantity;
} Calculator;

float calculate(Calculator Calc, char symbol, float num)
{
    int i;
    float current_value = Calc.current_value;
    
    for(i=0; i< Calc.operations_quantity; i++)
    {
        if(Calc.operations[i].symbol == symbol)
        {
            return Calc.operations[i].func(Calc.current_value, num);
        }
    }

    return 0; // todo wrong operation error

}

float add(float a, float b)
{
    return a + b;
}

float minus(float a, float b)
{
    return a - b;
}

float multi(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        return 0; // todo 0 div error
    }

    return a / b;
}

float power(float a, float b) // b?
{
    return a * a;
}

int main(int argc, char* argv[])
{
    Calculator Calc1;
    Operation* ptr = malloc(sizeof(Operation) * 5);
    
    // Adding operations
    ptr[0].symbol = '+';
    ptr[0].second_arg = 1;
    ptr[0].func = add;
    
    ptr[1].symbol = '-';
    ptr[1].second_arg = 1;
    ptr[1].func = minus;

    ptr[2].symbol = 'x';
    ptr[2].second_arg = 1;
    ptr[2].func = multi;

    ptr[3].symbol = '/';
    ptr[3].second_arg = 1;
    ptr[3].func = divide;

    ptr[4].symbol = '^';
    ptr[4].second_arg = 1;
    ptr[4].func = power;

    Calc1.current_value = 0;
    Calc1.operations = ptr;
    Calc1.operations_quantity = 5;

    printf("Value: 0\n");

    while (1)
    {
        int i;
        char* in;
        float num;
        scanf("%s", &in);
        char symb = in[0];
        in[0] = '0';
        num = atof(in);

        calculate(Calc1, symb, num);

        printf("Value: %d\n", Calc1.current_value);
    }


    free(ptr);
    ptr = NULL;
    
    return 0;
}