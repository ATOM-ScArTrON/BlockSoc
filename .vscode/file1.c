#include <stdio.h>
#include <string.h>

// Create a structure called myStructure
struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30]; // String
};

int main()
{
    // Create a structure variable of myStructure called s1
    struct myStructure s1;

    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';
    strcpy(s1.myString, "Hi"); // Assign value to myString using strcpy function

    // Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    printf("My string: %s\n", s1.myString);
    return 0;
}