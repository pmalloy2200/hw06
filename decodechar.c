
#include <stdio.h>

void caesar(int key, char message[])
[
for (n=0; n < length(message); n++)
    [
    x = message[n];
    if (x - 'a' < (26-key))
        [
        x = x + 3;
        ]
    if (x == ' ')
        [
        x = ' ';
        ]
    else
        [
        x = x - (26 - key)
        ]
    printf("%c", x);
    ]
    printf("\n");
    
]


