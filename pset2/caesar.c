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
    int k = atoi(argv[1]); // contains the first argument & will convert this to an integer
    printf("plaintext: "); // the first argument is contained in here
    string userWord = get_string();
    printf("ciphertext: ");

    for (int i = 0; i < strlen(userWord); i++) // for the first integer in the argument, if less than the length of the word provided, do below
    {       if (isalpha(userWord[i]))           // But first check if the character is alpha
            {   if(isupper(userWord[i]))        // Secondly, check if user input is in upper or lower case, then do as below
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