#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 0
#define FALSE 1

int checkUser(char*user);
int checkPass(char*password);
char *encryption(char*password);

int main (int argc, char *argv[]){
    char *password = (char*)malloc(100 * sizeof(char));
    char test;

    printf("Passcode:\n");
    scanf("%s", password);

    if (checkPass(password) == TRUE){
        printf("flag{Are_You_Doing_COMP9417_Next_Term?}\n");
    } else {
        printf("Wrong Code!\n");
    }
}

int checkPass(char* password){
    
    if (strcmp(password, "xXShockwaveNSXx") == 0){
        
        return TRUE;

    } else {
        
        return FALSE;
    }
}
