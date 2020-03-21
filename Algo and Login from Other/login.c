#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 0
#define FALSE 1

int checkUser(char*user);
int checkPass(char*password);
char *encryption(char*password);
char *enc2(char*password);

int main (int argc, char *argv[]){
    char *password = (char*)malloc(100 * sizeof(char));
    char test;

    printf("Password:\n");
    scanf("%s", password);

    if (checkPass(password) == TRUE){
        printf("flag{%s}\n", encryption(password));
    } else {
        printf("Wrong Username/Password!\n");
    }
}

int checkPass(char* password){
    char *encrypted = (char*)malloc(100 * sizeof(char));
    encrypted = encryption(password);
    
    if (strcmp(encrypted, "S-#4xI.;a=- 4G") == 0){
        
        return TRUE;

    } else {
        
        return FALSE;
    }
}

char* encryption(char*password){
    int length = strlen(password);
    int counter = 0;
    while (counter < length){
        password[counter]++;
        counter++;
    }

    return enc2(password);
}

char* enc2(char*password){
    int length = strlen(password);
    int counter = 0;
    while (counter < length){
        password[counter] = (password[counter] * 28)%97+31;
        counter++;
    }
    return password;
}