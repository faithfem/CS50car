#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    string text = get_string(); //Get input from user

    for (int i = 0, n = strlen(text); i < n; i++) {
        printf("%c," text[i]);

 }

}