#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s", str);

    int pritom = strcmp(str, "");

    if(pritom <= 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }

}



