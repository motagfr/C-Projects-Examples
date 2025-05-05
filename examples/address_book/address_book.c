#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact {
    char name[30];
    char street[30];
    char city[30];
    char state[3];
    unsigned long zip;
};

struct Contact address_book[MAX_CONTACTS];
int contact_count = 0;

void add_contact() {
    if (contact_count < MAX_CONTACTS) {
        printf("Enter name: ");
        fgets(address_book[contact_count].name, 30, stdin);
        address_book[contact_count].name[strcspn(address_book[contact_count].name, "\n")] = 0; // Remove newline

        printf("Enter street: ");
        fgets(address_book[contact_count].street, 30, stdin);
        address_book[contact_count].street[strcspn(address_book[contact_count].street, "\n")] = 0;

        printf("Enter city: ");
        fgets(address_book[contact_count].city, 30, stdin);
        address_book[contact_count].city[strcspn(address_book[contact_count].city, "\n")] = 0;

        printf("Enter state: ");
        fgets(address_book[contact_count].state, 3, stdin);
        address_book[contact_count].state[strcspn(address_book[contact_count].state, "\n")] = 0;

        printf("Enter zip code: ");
        scanf("%lu", &address_book[contact_count].zip);
        getchar(); // Consume newline left by scanf

        contact_count++;
        printf("Contact added successfully!\n");
    } else {
        printf("Address book is full!\n");
    }
}

void delete_contact() {
    char name[30];
    printf("Enter the name of the contact to delete: ");
    fgets(name, 30, stdin);
    name[strcspn(name, "\n")] = 0; // Remove newline

    for (int i = 0; i < contact_count; i++) {
        if (strcmp(address_book[i].name, name) == 0) {
            for (int j = i; j < contact_count - 1; j++) {
                address_book[j] = address_book[j + 1];
            }
            contact_count--;
            printf("Contact deleted successfully!\n");
            return;
        }
    }
    printf("Contact not found!\n");
}

void search_contact() {
    char name[30];
    printf("Enter the name of the contact to search: ");
    fgets(name, 30, stdin);
    name[strcspn(name, "\n")] = 0; // Remove newline

    for (int i = 0; i < contact_count; i++) {
        if (strcmp(address_book[i].name, name) == 0) {
            printf("Contact found:\n");
            printf("Name: %s\n", address_book[i].name);
            printf("Street: %s\n", address_book[i].street);
            printf("City: %s\n", address_book[i].city);
            printf("State: %s\n", address_book[i].state);
            printf("Zip Code: %lu\n", address_book[i].zip);
            return;
        }
    }
    printf("Contact not found!\n");
}

void list_contacts() {
    if (contact_count == 0) {
        printf("No contacts in the address book.\n");
        return;
    }
    printf("Contacts in the address book:\n");
    for (int i = 0; i < contact_count; i++) {
        printf("%d. %s\n", i + 1, address_book[i].name);
    }
}

int main() {
    int choice;
    do {
        printf("\nAddress Book Menu:\n");
        printf("1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. Search Contact\n");
        printf("4. List Contacts\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline left by scanf

        switch (choice) {
            case 1:
                add_contact();
                break;
            case 2:
                delete_contact();
                break;
            case 3:
                search_contact();
                break;
            case 4:
                list_contacts();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}