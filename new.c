#include<stdio.h>
#include<string.h>
int main() {
    char s1[50] = "Hello";
    char s2[50] = "World";
    char s3[50];
    printf("%d\n", strlen(s1));

    strcpy(s3,s1);
    printf("%s\n",s3);
    printf("Comparison of s1 and s2 = %d\n",strcmp(s1,s2));
    
    strcat(s1,s2);
    printf("After concatenations s1= %s\n",s1);
    return 0;


    
}
