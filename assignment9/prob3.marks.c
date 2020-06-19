//sanandita001: Please note file name "records.dat" should be same as filename in assignment9/prob2.c
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
        
        infile = fopen("records.dat","r");
      
        int count = 0;
        while(fread(&input[count], sizeof(struct record), 1, infile))
            count+=1;
       
       fclose(infile);

       for(int i=0;i<count;i++)
       {
           for(int j=0;j<count-1;j++)
           {
               if(input[j].marks>input[j+1].marks)
               {
                   temp = input[j];
                   input[j] = input[j+1];
                   input[j+1] = temp;
               }
           }
       }
       for(int i=0;i<count;i++)
       {
           printf ("name = %s roll = %d marks = %d\n", input[i].name, 
                           input[i].roll, input[i].marks);
       }

       FILE *outfile;
       outfile = fopen ("sorted_records_marks.dat", "w"); 

       fwrite(&input, sizeof(struct record), count, outfile);
      
       fclose(outfile);
      return 0;
} 
