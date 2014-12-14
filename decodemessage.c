/* 
This program decodes a string that has been
encoded with a Caesar cipher. Program prints 
outputs of all possible keys, 1-25. 
*/

#include <stdio.h>

void caesar (int key, char message[]);

int
main (void)
{

//Message
    char message[] = "libi imycibqwvm ycwbkcvycm ntcmvbma ycivbqbibma"
        " qvdwtdmvbm ntcfqwvma qvdmvqzm mb dqkm dmzai";

//Decode Loop
    int i;
    for (i = 1; i < 26; i++)
    {
        printf ("key = %d:\n", i);
        caesar (i, message);
    }

    return 0;
}
