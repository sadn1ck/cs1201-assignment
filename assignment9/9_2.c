#include<stdio.h>
#include<stdlib.h>

struct student {
    char name[20];
    int rno;
    int marks;
};

void main(){
    int n;
    char path[100];
    FILE *fptr;
    printf("Enter file path (if it in the same directory enter the name) : ");
    scanf("%[^\n]%*c", path);
    if ((fptr = fopen(path,"ab")) == NULL){
           printf("Error opening file!");
           exit(1);
    }
    struct student stud;
    printf("How many records do you want to enter: ");
    scanf("%d",&n);
    while(n--){
    	printf("Enter Student Data:\nEnter Roll No. : ");
        scanf("%d",&stud.rno);
        printf("Enter Name: ");
        scanf(" %[^\n]%*c", stud.name);
        printf("Enter Marks: ");
        scanf("%d",&stud.marks);

        fwrite(&stud,sizeof(stud),1,fptr);
    }
    fclose(fptr);
}

