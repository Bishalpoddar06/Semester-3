/*
2. Word Frequency Counter Read a text file and count the frequency of each word.
Save the results in another file in the format: word1 → frequency word2 → frequency
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Word
{
    char word[50];
    int count;
};

int main()
{
    FILE *fp = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    struct Word words[100];
    int n = 0;
    char temp[50];

    if (fp == NULL)
    {
        printf("Input file not found!\n");
        return 1;
    }

    while (fscanf(fp, "%s", temp) != EOF)
    {
        
        for (int i = 0; temp[i]; i++)
            temp[i] = tolower(temp[i]);

        int found = 0;
        for (int i = 0; i < n; i++)
        {
            if (strcmp(words[i].word, temp) == 0)
            {
                words[i].count++;
                found = 1;
                break;
            }
        }
        if (!found)
        {
            strcpy(words[n].word, temp);
            words[n].count = 1;
            n++;
        }
    }
    fclose(fp);

    for (int i = 0; i < n; i++)
    {
        fprintf(out, "%s -> %d\n", words[i].word, words[i].count);
    }
    fclose(out);

    printf("Word frequency written to output.txt\n");
    return 0;
}
