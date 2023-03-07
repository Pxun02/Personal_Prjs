#include <stdio.h>

int main(){
    char buffer[8];
    char* pwd = "password";
    snprintf(buffer, 8, "%s", pwd);
    printf("%s\n", buffer);
}