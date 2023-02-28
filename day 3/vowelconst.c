#include<stdio.h>
int main(){
    char c;
    int LCvowel,UCvowel;
    printf("enter an alphabet:");
    scanf("%c",&c);
    LCvowel =(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    UCvowel =(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    if (LCvowel || UCvowel)
    printf("%c is vowel.",c);
    else
    printf("%c is consonent.",c);
    return 0;
    ;


}