/*
3. Merge Two Files Take two text files as input and merge their contents into a third file.
 Add line numbers while writing into the new file.
*/
#include <stdio.h>

int main()
{
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");
    FILE *f3 = fopen("merged.txt", "w");

    char line[200];
    int lineNo = 1;

    if (!f1 || !f2)
    {
        printf("Error opening input files!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), f1))
    {
        fprintf(f3, "%d: %s", lineNo++, line);
    }
    while (fgets(line, sizeof(line), f2))
    {
        fprintf(f3, "%d: %s", lineNo++, line);
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    printf("Files merged into merged.txt\n");
    return 0;
}
