#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
//int main(void)
{
    if (argc != 2)
    {
    printf("Usage: ./caesar k\n");
    return 1;
    }
    else{
    int k = atoi(argv[1]);
    printf("plaintext: ");
    string userWord = get_string();
    printf("ciphertext: ");

    for (int i = 0; i < strlen(userWord); i++)
    {       if (isalpha(userWord[i]))           // Check if character is alpha
            {   if(isupper(userWord[i]))        // Check if user input is in upper or lower case
                {
                 printf("%c", ((userWord[i] - 'A' + k))%26+'A'); // Character less value of A which is 65 plus the key,
                }
                else
                {
                 printf("%c", ((userWord[i] - 'a' + k))%26+'a');
                }

            }
            else
            {
                printf("%c", userWord[i]);
            }

    }
    printf("\n");
}
}