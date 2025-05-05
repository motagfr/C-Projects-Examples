# Address Book Program

This address book program allows users to manage their contacts by adding, deleting, and searching for entries. It is a simple command-line application that demonstrates basic data management techniques in C.

## Features

- **Add Contact**: Users can add a new contact by providing the name, street, city, state, and zip code.
- **Delete Contact**: Users can delete an existing contact by specifying the name.
- **Search Contact**: Users can search for a contact by name and view the details.

## Usage

1. Compile the program using a C compiler:
   ```
   gcc address_book.c -o address_book
   ```

2. Run the program:
   ```
   ./address_book
   ```

3. Follow the on-screen instructions to add, delete, or search for contacts.

## Example

- To add a contact, the program will prompt you for the following information:
  ```
  Enter name: John Doe
  Enter street: 123 Elm St
  Enter city: Springfield
  Enter state: IL
  Enter zip code: 62701
  ```

- To search for a contact, simply enter the name when prompted.

## Code Structure

The program is structured with functions to handle each operation (add, delete, search) and uses a simple array to store contact information. The main function manages user interactions and calls the appropriate functions based on user input.

## Limitations

- The current implementation uses a fixed-size array for storing contacts, which limits the number of entries.
- Input validation is minimal; users should ensure they enter valid data.

## Future Improvements

- Implement dynamic memory allocation to allow for an unlimited number of contacts.
- Add input validation to ensure data integrity.
- Enhance the user interface for better usability.