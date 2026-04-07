#include <stdio.h>

// Create a C program to check if a character entered by the user is a vowel or consonant using a switch statement.

void main() 
{
    char ch;

    printf("Enter a single alphabet character: ");        // for read a single character
    if(scanf("%c", &ch)!= 1) 
    
    printf("\n");
        
    if (!isalpha(ch))                                      // for check if the input is a alphabet
	{
        printf(" Your Alphabet is invalid !\n");
    
    }

    
    ch = tolower(ch);                                     // for Convert to lowercase for easier comparison
                                                          // Check vowel or consonant using switch
    switch (ch) 
	{
        case 'a': 
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("'%c' is a vowel.\n",ch);              // for display when alphabet is vowel
            break;
            
        default:
            printf("'%c' is a consonant.\n",ch);         // for display when alphabet is consonant
    }

}



