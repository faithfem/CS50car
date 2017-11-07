#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    string name = get_string(); //Get input from user
    printf("%c", toupper(name[0])); //Print the first initial to uppercase

    for (int i = 0, n = strlen(name); i < n; i++) {
    if (name[i] == ' ' && name[i+1] != '\0') {
    printf("%c", toupper(name[i+1]));
    i++;
    }
    }
    printf("\n");
}
