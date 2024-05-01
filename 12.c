#include <stdio.h>

//create a structure called myStructure
struct myStructure {
    int myNum;
    char myLetter;
};

int main(){
    //create a structure variable of myStructure called s1
    struct myStructure s1;

    //Assign values to member of s1
    s1.myNum = 20;
    s1.myLetter = 'z';
}
