#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record
{
    char name[20];
    int roll;
    int marks;
};

int main ()
{
        FILE *infile;
        struct record input[10],temp;
        char path[100];
        printf("Enter file path to read (if it in the same directory enter the name) : ");
        scanf("%[^\n]%*c", path);
        if ((infile = fopen(path,"r")) == NULL)
        {
            printf("Error opening file!");
            exit(1);
        }

        int count = 0;
        while(fread(&input[count], sizeof(struct record), 1, infile))
            count+=1;

       fclose(infile);

       for(int i=0;i<count;i++)
       {
           for(int j=0;j<count-1;j++)
           {
               if(strcmp(input[j].name,input[j+1].name)>0)
               {
                   temp = input[j];
                   input[j] = input[j+1];
                   input[j+1] = temp;
               }
           }
       }
      /* for(int i=0;i<count;i++)
       {
           printf ("name = %s roll = %d marks = %d\n", input[i].name,
                           input[i].roll, input[i].marks);
       }*/                                                                              //To print data after sorting

       FILE *outfile;
       printf("\nEnter file path to write (if it in the same directory enter the name) : ");
       scanf("%[^\n]%*c", path);
       if ((outfile = fopen(path,"w")) == NULL)
       {
           printf("Error opening file!");
           exit(1);
       }

       fwrite(&input, sizeof(struct record), count, outfile);

       fclose(outfile);
      return 0;
}
