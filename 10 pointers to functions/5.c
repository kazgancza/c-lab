#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum
{
    ROCK,
    POP,
    OTHER
} SONG_TYPE;

typedef struct
{
    char* title;
    float length;
    SONG_TYPE type;
} Song;

void f1(Song* songs_in, int* songs_quantity_in,
        Song* songs_out, int* songs_quantity_out,
        int (*func)(Song* song))
{
    int i;
    int j = 0;

    for (i=0; i<*songs_quantity_in; i++)
    {
        if (func(&songs_in[i]))
        {
            songs_out[j] = songs_in[i];
            j += 1;
        }
    }

    *songs_quantity_out = j;
}

int fa(Song* song)
{
    if (song->length > 60)
    {
        return 1;
    }

    return 0;
}

int fb(Song* song)
{
    int len = strlen(song->title);
    int i;
    for (i=0; i<len; i++)
    {
        if (song->title[i] >= '0' && song->title[i] <= '9')
        {
            return 0;
        }
    }

    return 1;
}

int fc(Song* song)
{
    if(song->type == POP)
    {
        return 1;
    }
}


int main(int argc, char* argv[])
{
    Song songs[2];
    int songs_len = 2;
    songs[0].length = 181.5;
    strcpy(songs[0].title, "Highway to Hell");
    songs[0].type = ROCK;

    songs[1].length = 59.4;
    strcpy(songs[1].title, "Met you");
    songs[1].type = OTHER;

    Song songs_out[2];
    int songs_out_len;

    f1(songs, &songs_len, songs_out, &songs_out_len, fa);

    printf("%d\n", songs_out_len);


    return 0;
}