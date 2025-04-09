#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void copy_distinct(char *ori, char* out)
{
    int i;
    int j = 0;
    int ori_len = strlen(ori);
    char previous = '\0';

    for(i=0; i<ori_len; i++)
    {
        if (ori[i] != previous)
        {
            out[j]=ori[i];
            previous=ori[i];
            j+=1;
        }        
    }

    out[j]='\0';
    

}

int main()
{
    char left[]="AAla ma kottta, a   kot ma Aale!!";
    char right[1000];

    copy_distinct(left, right);

    printf("%s\n", right);

    return 0;
}
