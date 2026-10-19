#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    // Declare character arrays to store plain text and encrypted text
    char plain[10], cipher[10];
    int key, i, length;
    int result;
    
    // Clear the console screen (works in older compilers like Turbo C)
   // clrscr();
    
    // Take input from the user
    printf("\n Enter the plain text:");
    scanf("%s", plain);
    
    printf("\n Enter the key value:");
    scanf("%d", &key);
    
    // Display the original text entered by the user
    printf("\n \n \t PLAIN TEXT: %s", plain);
    printf("\n \n \t ENCRYPTED TEXT: ");
    
    // ENCRYPTION PROCESS
    // Loop through each character of the plain text
    for(i = 0, length = strlen(plain); i < length; i++)
    {
        // Shift the character forward by the key value
        cipher[i] = plain[i] + key;
        
        // Handle wrap-around for uppercase letters (A-Z) if they exceed 'Z'
        if (isupper(plain[i]) && (cipher[i] > 'Z'))
            cipher[i] = cipher[i] - 26;
            
        // Handle wrap-around for lowercase letters (a-z) if they exceed 'z'
        if (islower(plain[i]) && (cipher[i] > 'z'))
            cipher[i] = cipher[i] - 26;
            
        // Print the encrypted character on the go
        printf("%c", cipher[i]);
    }
    // Null-terminate the cipher string for memory safety
    cipher[i] = '\0'; 
    
    // DECRYPTION PROCESS
    printf("\n \n \t AFTER DECRYPTION : ");
    // Loop through each character of the cipher text
    for(i = 0; i < length; i++)
    {
        // Shift the character backward by the key value
        plain[i] = cipher[i] - key;
        
        // Handle wrap-around for uppercase letters if they drop below 'A'
        if(isupper(cipher[i]) && (plain[i] < 'A'))
            plain[i] = plain[i] + 26;
            
        // Handle wrap-around for lowercase letters if they drop below 'a'
        if(islower(cipher[i]) && (plain[i] < 'a'))
            plain[i] = plain[i] + 26;
            
        // Print the decrypted character
        printf("%c", plain[i]);
    }
    
    // Wait for a key press before closing the output window
    getch();
    return 0; 
}