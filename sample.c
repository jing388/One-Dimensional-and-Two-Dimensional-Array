#include <stdio.h>
#define MAX_SIZE 100

// Function prototypes
void displayMainMenu();
int handle1DArrayChoice(int choice);
int handle2DArrayChoice(int choice);
int handleExitChoice();

// Function prototypes for 1D array operations
void traverse1D();
void insertSorted1D();
void insertUnsorted1D();
void removeElement1D();

// Function prototypes for 2D array operations
void traverse2D();
void implementStack();

int main()
{
    int choice;
    int continueProgram = 1; // Flag to control program flow

    while (continueProgram)
    {
        displayMainMenu();

        // Check if input is an integer
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter an integer.\n");
            // Clear the input buffer
            while (getchar() != '\n')
                ;
            continue;
        }

        // Handle the user's choice based on the group
        if (choice == 1)
        {
            system("cls");
            continueProgram = handle1DArrayChoice(choice);
        }
        else if (choice == 2)
        {
            system("cls");
            continueProgram = handle2DArrayChoice(choice);
        }
        else if (choice == 3)
        {
            continueProgram = handleExitChoice();
        }
        else
        {
            printf("Invalid choice! \n");
        }
    }

    return 0;
}

// Function to display the main menu
void displayMainMenu()
{
    printf("\nMain Menu:\n");
    printf("1. 1D Array Operations\n");
    printf("2. 2D Array Operations\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
}

// Function to display the main menu without getting arguments
void handle1DArrayChoiceNoArgument()
{
    int choice;

    do
    {
        // Display the 1D array operations menu
        printf("\n 1D Array Operations:\n");
        printf("1. Traverse\n");
        printf("2. Insert Sorted\n");
        printf("3. Insert Unsorted\n");
        printf("4. Remove Element\n");
        printf("5. Back to Main Menu\n");
        printf("Enter your choice: ");

        // Check if input is an integer
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter an integer.\n");
            // Clear the input buffer
            while (getchar() != '\n')
                ;
            continue;
        }

        // Perform the corresponding operation for 1D array
        switch (choice)
        {
        case 1:
            system("cls");
            traverse1D();
            break;
        case 2:
            system("cls");
            insertSorted1D();
            break;
        case 3:
            system("cls");
            insertUnsorted1D();
            break;
        case 4:
            system("cls");
            removeElement1D();
            break;
        case 5:
            system("cls");
            displayMainMenu();
        default:
            printf("Invalid choice for 1D Array Operations! \n");
            break;
        }

    } while (1);
    return 1;
}

// Function to handle the user's choice for 1D array operations
int handle1DArrayChoice(int choice)
{
    printf("\n 1D Array Operations:\n");
    printf("1. Traverse\n");
    printf("2. Insert Sorted\n");
    printf("3. Insert Unsorted\n");
    printf("4. Remove Element\n");
    printf("5. Back to Main Menu\n");
    printf("Enter your choice: ");

    // Check if input is an integer
    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        // Clear the input buffer
        while (getchar() != '\n')
            ;
        return 1; // Continue the program
    }

    // Perform the corresponding operation for 1D array
    switch (choice)
    {
    case 1:
        traverse1D();
        break;
    case 2:
        insertSorted1D();
        break;
    case 3:
        insertUnsorted1D();
        break;
    case 4:
        removeElement1D();
        break;
    case 5:
        system("cls");
        break;
    default:
        printf("Invalid choice for 1D Array Operations\n");
        break;
    }

    return 1; // Continue the program
}

// Function to handle the user's choice for 2D array operations
int handle2DArrayChoice(int choice)
{
    printf("\n 2D Array Operations:\n");
    printf("1. Traverse\n");
    printf("2. Implement Stack\n");
    printf("3. Back to Main Menu\n");
    printf("Enter your choice: ");

    // Check if input is an integer
    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        // Clear the input buffer
        while (getchar() != '\n')
            ;
        return 1; // Continue the program
    }

    // Perform the corresponding operation for 2D array
    switch (choice)
    {
    case 1:
        traverse2D();
        break;
    case 2:
        implementStack();
        break;
    case 3:
        // Back to the main menu
        break;
    default:
        printf("Invalid choice for 2D Array Operations\n");
        break;
    }

    return 1; // Continue the program
}

// Function to handle the user's choice for exiting the program
int handleExitChoice()
{
    // Exit confirmation loop
    while (1)
    {
        printf("Are you sure you want to exit? (1 for Yes, 0 for No): ");
        int exitChoice;
        scanf("%d", &exitChoice);

        if (exitChoice == 1)
        {
            printf("Exiting program.\n");
            return 0; // Terminate the program
        }
        else if (exitChoice == 0)
        {
            // Continue with the loop to display the main menu again
            printf("Returning to the main menu.\n");
            return 1; // Continue the program
        }
        else
        {
            // Invalid choice for exit confirmation
            printf("Invalid choice for exit confirmation. Please enter 1 or 0.\n");
        }
    }
}

// Function prototypes for 1D array operations
void traverse1D()
{
    system("cls");
    int numArrays = 0;

    while (1)
    {
        int size;
        printf("CHOSEN 1D OPERATION: TRAVERSE \n\n");
        printf("Enter the size of array: ", numArrays + 1);

        // Check if input is an integer
        while (scanf("%d", &size) != 1 || size <= 0)
        {
            printf("Invalid input. Please enter a positive integer for array size: ");

            // Clear the input buffer
            while (getchar() != '\n')
                ;
        }

        int array[size];

        // Ask for array elements
        printf("Enter elements for array:\n", size, numArrays + 1);
        for (int i = 0; i < size; ++i)
        {
            printf("Element %d: ", i + 1);

            // Check if input is an integer
            while (scanf("%d", &array[i]) != 1)
            {
                printf("Invalid input. Please enter an integer: ");

                // Clear the input buffer
                while (getchar() != '\n')
                    ;
            }
        }

        // Print the array
        printf("Array elements: ", numArrays + 1);
        for (int i = 0; i < size; ++i)
        {
            printf("%d ", array[i]);
        }
        printf("\n");

        // Option to create another array
        char createAnother;
        printf("Do you want to create another array? (y/n): ");
        while (scanf(" %c", &createAnother) == 1 && (createAnother == 'y' || createAnother == 'Y'))
        {
            system("cls");
            numArrays++;
            break;
        }

        if (createAnother != 'y' && createAnother != 'Y')
        {
            // Go back to handle1DArrayChoice
            handle1DArrayChoice(numArrays);
            break;
        }
    }
}

void insertSorted1D()
{
    int size;
    printf("Enter the size of the array: ");

    // Check if input is an integer
    while (scanf("%d", &size) != 1 || size <= 0 || size > MAX_SIZE)
    {
        printf("Invalid input. Please enter a positive integer less than or equal to %d for array size: ", MAX_SIZE);

        // Clear the input buffer
        while (getchar() != '\n')
            ;
    }

    int array[MAX_SIZE];

    // Ask for array elements
    printf("Enter elements to be Sorted:\n", size);
    for (int i = 0; i < size; ++i)
    {
        printf("Element %d: ", i + 1);

        // Check if input is an integer
        while (scanf("%d", &array[i]) != 1)
        {
            printf("Invalid input. Please enter an integer: ");

            // Clear the input buffer
            while (getchar() != '\n')
                ;
        }
    }

    // Print the original sorted array
    printf("Original Array: ");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Sort the array in ascending order
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (array[j] > array[j + 1])
            {
                // Swap elements if they are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Option to insert another element
    char insertAnother;
    do
    {
        int elementToInsert;

        printf("Do you want to insert another element? (y/n): ");
        while (scanf(" %c", &insertAnother) == 1 && (insertAnother == 'y' || insertAnother == 'Y'))
        {
            printf("Enter the element to insert: ");
            while (scanf("%d", &elementToInsert) != 1)
            {
                printf("Invalid input. Please enter an integer: ");
                while (getchar() != '\n')
                    ;
            }

            // Find the correct position to insert the new element
            int insertPosition = 0;
            while (insertPosition < size && elementToInsert > array[insertPosition])
            {
                insertPosition++;
            }

            // Shift elements to make space for the new element
            for (int i = size; i > insertPosition; --i)
            {
                array[i] = array[i - 1];
            }

            // Insert the new element at the specified position
            array[insertPosition] = elementToInsert;

            // Update the size of the array
            size++;

            // Print the updated sorted array
            printf("Updated Sorted Array: ");
            for (int i = 0; i < size; ++i)
            {
                printf("%d ", array[i]);
            }
            printf("\n");

            // Option to insert another element
            printf("Do you want to insert another element? (y/n): ");
        }
    } while (insertAnother != 'n' && insertAnother != 'N');
    handle1DArrayChoiceNoArgument();
    ;
}

// Function to insert an element into an unsorted 1D array
void insertUnsorted1D() {
    int size;
    printf("Enter the size of the array: ");

    // Check if input is an integer
    while (scanf("%d", &size) != 1 || size <= 0 || size > MAX_SIZE) {
        printf("Invalid input. Please enter a positive integer less than or equal to %d for array size: ", MAX_SIZE);

        // Clear the input buffer
        while (getchar() != '\n')
            ;
    }

    int array[MAX_SIZE];

    // Ask for array elements
    printf("Enter elements for Unsorted array:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);

        // Check if input is an integer
        while (scanf("%d", &array[i]) != 1) {
            printf("Invalid input. Please enter an integer: ");

            // Clear the input buffer
            while (getchar() != '\n')
                ;
        }
    }

    // Print the original unsorted array
    printf("Original Unsorted Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Option to insert another element
    char insertAnother;
    do {
        int elementToInsert, positionToInsert;

        printf("Do you want to insert another element? (y/n): ");
        while (scanf(" %c", &insertAnother) == 1 && (insertAnother == 'y' || insertAnother == 'Y')) {
            printf("Enter the element to insert: ");
            while (scanf("%d", &elementToInsert) != 1) {
                printf("Invalid input. Please enter an integer: ");
                while (getchar() != '\n')
                    ;
            }

            printf("Enter the position to insert (1 to %d): ", size + 1);
            while (scanf("%d", &positionToInsert) != 1 || positionToInsert < 1 || positionToInsert > size + 1) {
                printf("Invalid input. Please enter a valid position: ");

                // Clear the input buffer
                while (getchar() != '\n')
                    ;
            }

            // Shift elements to make space for the new element
            for (int i = size; i >= positionToInsert; --i) {
                array[i] = array[i - 1];
            }

            // Insert the new element at the specified position
            array[positionToInsert - 1] = elementToInsert;

            // Update the size of the array
            size++;

            // Print the updated unsorted array
            printf("Updated Unsorted Array: ");
            for (int i = 0; i < size; ++i) {
                printf("%d ", array[i]);
            }
            printf("\n");

            // Option to insert another element
            printf("Do you want to insert another element? (y/n): ");
        }
    } while (insertAnother != 'n' && insertAnother != 'N');

    handle1DArrayChoiceNoArgument();
}

void removeElement1D(){
    // Implement the function
};

// Function prototypes for 2D array operations
void traverse2D(){
    // Implement the function
};

void implementStack(){
    // Implement the function
};
