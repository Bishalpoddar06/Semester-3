/*
4. Copy File with Case Conversion Read contents of a file and copy them into another file.
While copying: Convert all lowercase letters to uppercase. Convert all uppercase letters to lowercase.
*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("copy.txt", "w");
    char ch;

    if (!in)
    {
        printf("Input file not found!\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF)
    {
        if (islower(ch))
            fputc(toupper(ch), out);
        else if (isupper(ch))
            fputc(tolower(ch), out);
        else
            fputc(ch, out);
    }

    fclose(in);
    fclose(out);
    printf("File copied with case conversion into copy.txt\n");
    return 0;
}
