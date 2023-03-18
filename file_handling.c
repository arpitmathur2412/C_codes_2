#include<stdio.h>
int main()
{
       FILE *fptr;
    char fname[50];
    printf("Enter file name: ");
    gets(fname);
    input(fname);
    int array[1000];
    int i = 0;
    // char tmp[100000], *pEnd;
    char tmp[1000];
    fptr = fopen(fname, "r+");
    // while (fscanf(fptr,"%s",tmp) > 0)
    // {
    //     //if( !(array[i] = strtol(tmp, &pEnd,10)))
    //      array[i] = tmp[0];
    //     i++;
    // }
    if (fptr != NULL)
    {
        while (fgets(array, 1000, fptr))
        {
            tmp[i] = array[i];
            i++;
        }
    }
    int size = sizeof(tmp) / sizeof(tmp[0]);
    struct node *root = constructTree(array, strlen(array));
    printf("Below is Encrypted Data from your file: \n");
    printInorder(root);

    printf("\nEnter a password to Decrypt your Data: ");
    int pass;
    scanf("%d", &pass);
    if (pass == 1234)
    {
        fptr = fopen(fname, "r");
        char content[1000];
        if (fptr != NULL)
        {
            while (fgets(content, 1000, fptr))
            {
                printf("%s", content);
            }
        }
        else
        {
            printf("error while opening file !");
        }
        fclose(fptr);
    }

    return 0;
    return 0;
}