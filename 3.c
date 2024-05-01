#include <stdio.h>

int main(){
    char greeting[] = "Hello world!";
    greeting[11] = '.' ;
    printf("%s",greeting);

    return 0;

}
