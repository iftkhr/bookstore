#include <stdio.h> //program for storing and printing upto 100 books
struct bookstore //structure of input
{
    char author[30];
    char title[30];
    int cost[10];
    char number[10]; 
};
int main ()
{
    struct bookstore book[100]; //structure array
    int m, n; //variable decleration
    printf ("How many books do you want to store?\n"); //user input
    scanf ("%d%*c", &n); // scan input
    for (m=1;m<=n;m++) //loop for storage of input details
    {
        printf ("Book %d:\n", m);
        printf ("Who's the author?\n");
        scanf ("%[^\n]%*c", &book[m].author);
        printf ("What's the title?\n");
        scanf ("%[^\n]%*c", &book[m].title);
        printf ("What does it cost?\n");
        scanf ("%[^\n]%*c", &book[m].cost);
        printf ("What's the book number?\n");
        scanf ("%[^\n]%*c", &book[m].number);
    }
    printf ("You entered the following details:-\n"); //output for the user input
    printf ("========================================================================================\n");
    printf ("Book                         Author                          Title       Cost     Number\n");
    printf ("========================================================================================\n");
    for (m=1;m<=n;m++) //loop for printing output in columns
    {
        printf ("%4d %30s %30s %10s %10s\n", m, book[m].author, book[m].title, book[m].cost, book[m].number);
    }
    printf ("========================================================================================\n");
    getchar ();
    return 0;
} 


