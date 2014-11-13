/*
This program decodes a text string that has been
encoded with a Ceasar cipher, with a given key.
*/

#include <stdio.h>
#include <string.h>

void caesar(int key, char message[])
{

// Declarations
int n, x;
char y; 

//Encode Loop
for (n = 0; n < strlen(message); n++)
    {
    x = message[n];
    if ( x - 'a' < (26 - key))
        {
        y = x + key;
        }
    if ( x - 'a' >= (26 - key))
            {
            y = x - (26 - key);   
                 
    //Unknown Character Handling
    if (x < 'a' || x > 'z')
        {
        y = '?';
        }
    //Space Handling
    if (x == ' ')
        {
        y = ' ';
        }
        }
    printf("%c", y);
    }
    printf("\n");
;
    
}


