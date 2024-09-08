#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 100 // Declare the maximum size of the string

int main() {
    char str[str_size]; // Declare a character array to store the string
    int i, len, vowel, cons; // Declare variables for iteration, string length, vowel count, and consonant count

    printf("\n\nCount total number of vowel or consonant :\n"); // Display information about the task
    printf("----------------------------------------------\n");
    printf("Input the string : ");
    fgets(str, sizeof str, stdin); // Read a string from the standard input (keyboard)

    
        vowel = 0; // Initialize vowel count to zero
    cons = 0; // Initialize consonant count to zero
    len = strlen(str); // Get the length of the input string

    // Loop to check each character of the string
    for (i = 0; i < len; i++) {
        // Check if the character is a vowel (both lowercase and uppercase)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowel++; // Increment the vowel count if the character is a vowel
        }
        // Check if the character is an alphabet (both lowercase and uppercase)
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            cons++; // Increment the consonant count if the character is an alphabet but not a vowel
        }
    }

    // Display the total number of vowels and consonants in the string
    printf("\nThe total number of vowel in the string is : %d\n", vowel);
printf("The total number of consonant in the string is : %d\n\n", cons);
	
	return 0;
}
