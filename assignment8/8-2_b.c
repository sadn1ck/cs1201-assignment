#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Usage: $ ./a.out <filename>\n");
        return 0;
    }
    else
    {
        FILE *file;
        file = fopen(argv[1], "r");
        if (file == NULL)
        {
            //  check if file exists or not
            printf("File not found!\n");
            return 0;
        }
        char ch;
        int characters, words, lines;

        characters = words = lines = 0;
        while ((ch = fgetc(file)) != EOF)
        {
            characters++;

            // Check new line
            if (ch == '\n' || ch == '\0')
                lines++;

            //  Check word
            if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
                words++;
        }

        if (characters > 0)
        {
            words++;
            lines++;
        }
        printf("\n");
        printf("Total characters = %d\n", characters);
        printf("Total words      = %d\n", words);
        printf("Total lines      = %d\n", lines);

        //  Close file
        fclose(file);
    }
    return 0;
}