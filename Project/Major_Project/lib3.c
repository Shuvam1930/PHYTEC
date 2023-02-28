#include<stdio.h>
#include<string.h>

struct book {
    char title[10];
    char author[10];
    int id;
    int quantity;
};

struct book library[20];
int count = 0;

void addBook() {
    printf("\n Add Book ");
    printf("\n-----------------------------------------------------------------\n");

    printf("Enter Book Title: ");
    scanf("%s", library[count].title);

    printf("Enter Book Author: ");
    scanf("%s", library[count].author);

    printf("Enter Book ID: ");
    scanf("%d", &library[count].id);

    printf("Enter Book Quantity: ");
    scanf("%d", &library[count].quantity);

    count++;
}

void displayBooks() {
    printf("\n List of Books \n");

    for(int i=0; i<count; i++) {
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("ID: %d\n", library[i].id);
        printf("Quantity: %d\n\n", library[i].quantity);
    }
}

void deleteBook() {
    int id;
    printf("\n Delete Book \n");

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for(int i=0; i<count; i++) {
        if(library[i].id == id) {
            for(int j=i; j<count-1; j++) {
                strcpy(library[j].title, library[j+1].title);
                strcpy(library[j].author, library[j+1].author);
                library[j].id = library[j+1].id;
                library[j].quantity = library[j+1].quantity;
            }

            count--;
            printf("Book deleted successfully.\n");
            return;
        }
    }

    printf("Book not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n Library Management System \n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Delete Book\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                deleteBook();
                break;
            case 4:
                printf("Exit !!! \n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 4);

    return 0;
}