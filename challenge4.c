/*Create a program that will generate summaries of the books stocked in a book store and save them in a file.
The book details should be declared as a structure. The book details should include.
Book title
Book author
Quantity
Price

The program should enable the user
1 to add book details
2. Save the book details to a file.
3. View the book details*/

#include<stdio.h>

typedef struct
{
    char title[30];
    char author[30];
    int quant;
    int price;
}book;

int bookstore()
{
    int ans;

    FILE *fptr;
    fptr = fopen("Book_Details.txt","w");

    book store;

    printf("Enter the details of the book below: ");


    printf("\nTitle of the book: ");
    fgets(store.title,100,stdin);


    printf("Book author: ");
    fgets(store.author,100,stdin);

    printf("Quantity: ");
    scanf("%d",&store.quant);

    printf("Price of each: ");
    scanf("%f",&store.price);

    fprintf(fptr,"\n\tLELEI BOOKSTORE\n\t***************");
    fprintf(fptr,"*****************\nBOOK DETAILS: \n*******************");
    fprintf(fptr,"BOOK TITLE: \t%s\nAUTHOR: \t%s\nQUANTITY \t%d\nPRICE: \t%.2f",store.title,store.author,store.quant,store.price);
    fclose(fptr);


}


int main()
{
    bookstore();
    int ans;
    do
    {
        printf("Do you wish enter another book? \n1. Yes\n0. No\t: ");
        scanf("%d",&ans);

        switch(ans)
        {
           case 1:
               bookstore();
               break;
           case 0:
               return 0;
               break;
           default:
            printf("Invalid input!!");
            break;
        }

    }while(ans==1);

}

