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
    }
    else{
    int k = atoi(argv[1]);
    printf("Plaintext: ");
    string userWord = get_string();
    printf("Ciphertext: ");

    for (int i = 0; i < strlen(userWord); i++)
    {       if (isalpha(userWord[i]))
            {   if(isupper(userWord[i]))
                {
                 printf("%c", ((userWord[i] - 'A' + k))%26+'A');
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