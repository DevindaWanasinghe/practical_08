#include <stdio.h>
#include <string.h>

int main(){
    char str1[20]="Hello World!";
    char str2[20];

    //copy str1 to str2
    strcpy(str2, str1);

    //print str2
    printf("%s",str2);

    return 0;
}
