#include <cs50.h>
#include <stdio.h>

int prompt_user();
void print_brackets();

int main(void) {
    const int height = prompt_user();
    const char space = ' ';
    // Builds the rows, based on the height.
    for (int row_iterator = 0; row_iterator < height; row_iterator++) {
        // Builds the indentation at the beginning of each row.
        for (int space_iterator = 1; space_iterator < height - row_iterator; space_iterator++) {
            printf("%c", space);
        }
        // Prints the first part of the brackets.
        print_brackets(row_iterator);
        // Take a break, in between the two bracket parts.
        printf("%c%c", space, space);
        // Prints the second part of the brackets.
        print_brackets(row_iterator);
        // Tadaa! End of the program.
        printf("\n");
    }
}

// Prompts the User with for the height. If the given height is less than 0 or bigger than 8, 
// then repeats the action till the user gives proper value
int prompt_user() {
    int temp_height = 0;
    while (temp_height < 1 || temp_height > 8) {
        temp_height = get_int("Height: ");
    } return temp_height;
}

// Prints the brackets based on the row number.
void print_brackets(int row_number) {
    const char bracket = '#';
    const int bracket_number = row_number + 1;
    for (int bracket_iterator = 0; bracket_iterator < bracket_number; bracket_iterator++) {
        printf("%c", bracket);
    }
}

