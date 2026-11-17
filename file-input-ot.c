
#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    // Open file in write mode
    fp = fopen("student.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write into file: ");
    fgets(text, sizeof(text), stdin);

    // Write data into file
    fprintf(fp, "%s", text);

    fclose(fp);

    printf("\nData written successfully!\n");

    // Open file in read mode
    fp = fopen("student.txt", "r");

    if(fp == NULL)
    {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\nContents of the file:\n");

    while(fgets(text, sizeof(text), fp) != NULL)
    {
        printf("%s", text);
    }

    fclose(fp);

    return 0;
}
