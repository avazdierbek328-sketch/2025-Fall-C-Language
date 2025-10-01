
#include <stdio.h>

int main() {
    /*************************************************************
    * HW 4: 
    *      Add the practice problems learned in class below  
    *      and fix any problems by compiling and running.
    **************************************************************/

    ////////////////////////////////////////////////////////////////
    // Standard output & input
    ////////////////////////////////////////////////////////////////

    /*************************** */
    /*  printf                   */
    /*************************** */
    // Width and Alignment (page 7 of W5)
    // TODO 
    printf("%10d\n",123); // Right-aligned, width 10
    printf("%-10d\n",123); // Left-aligned, width 10
    printf("%.2f\n", 3.14159); // Prints with 2 decimal places
    printf("%05d\n", 42); // Pads with zeros up to 5 digits
    // Escape Sequences (page 8 of W5)
    // TODO
    printf("Hello\nWorld");
    printf("Hello\tWorld");
    printf("C:\\Program Files\\");
    printf("\"Hello\"");
    // Multiple Values (page 9 of W5)
    // TODO
    int age = 25;
    float pi = 3.14;
    printf("Age: %d, Pi: %.2f\n", age, pi);

    // Return Value of printf (page 9 of W5)
    // TODO
    int count = printf("Hello");
    printf("\nCharacters printed: %d\n", count);

    /*************************** */
    /*  puts                     */
    /*************************** */
    // (page 10 of W5)
    // TODO
    puts("Hello, World!");
    /*************************** */
    /*  putchar                  */
    /*************************** */
    // (page 11 of W5)
    // TODO
    putchar('A');
    putchar('\n');
    ////////////////////////////////////////////////////////////////
    // Standard input
    ////////////////////////////////////////////////////////////////

    /*************************** */
    /*  scanf                    */
    /*************************** */
    // (page 13 of W5)
    // TODO
    int ages;
     float height;
     printf("Enter your age and height: ");
     scanf("%d %f, &age, &height: ");
    printf("You are %d years old and %.2f meters tall.\n", ages, height);
    /*************************** */
    /*  getchar                    */
    /*************************** */
    // (page 16 of W5)
    // TODO
    char ch;
        printf("DDG:");
        ch = getchar();
        printf("You entered: %c\n", ch);
    /*************************** */
    /*  fgets                    */
    /*************************** */
    // (page 18 of W5)
    // TODO
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s", name);
    printf("==END==\n");
    return 0;

}