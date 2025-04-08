#include<stdio.h>

int slen(char *text)
{
    int len=0;
    while(1)
    {
        if(text[len]==0)
        {
            return len;
        }
        len+=1;
    }
}

char scpy(char *dest, const char *src)
{
    int i;
    for(i=0; i<slen(src)+1; i++)
    {
        dest[i]=src[i];
    }

    return dest;
}

char scat(char *dest, const char *src)
{
    int i;
    int j=0;
    for(i=slen(dest); i<slen(dest)+slen(src)+1; i++)
    {
        dest[i]=src[j];
        j++;
    }

    return dest;
}

int scmp(char *left, char *right)
{
    int i;
    int n;
    
    if(slen(left)>slen(right))
    {
        n=slen(left);
    }
    else
    {
        n=slen(right);
    }

    for(i=0; i<n; i++)
    {
        if(left[i]>right[i])
        {
            return 1;
        }
        if(left[i]<right[i])
        {
            return -1;
        }
    }

    return 0;
}

int main()
{
    char t1[100]="Tekst";
    char t2[59];
    
    printf("slen: %d\n", slen(t1));

    scpy(t2, t1);
    printf("scpy: %s\n", t2);

    scat(t1, t2);
    printf("scat: %s\n", t1);

    printf("%d\n", scmp(t1, t2));

    return 0;
}