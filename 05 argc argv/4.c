#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    int stack[1000];
    int i=0;
    int j=0;

    while(j<=argc)
    {
        if(argv[j+1][0]>='0' && argv[j+1][0]<='9')
        {
            stack[i]=atoi(argv[i+1]);
            i+=1;
        }
        else if(argv[j+1][0]=='+')
        {
            stack[i-2]+=stack[i-1];
            i-=1;
        }
        else if(argv[j+1][0]=='x')
        {
            stack[i-2]*=stack[i-1];
            i-=1;
        }

        j+=1;
    }

    printf("%d\n", stack[0]);
    

    
    return 0;
}