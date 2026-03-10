#include<stdio.h>
int main()
{
    int age=20;
    if(age>=18)
    {
        if(age>=60)
        {
            printf("senior Citizen\n");
        }
        else{
            printf("adult\n");
        }
    }
        else
        {
            printf("minor/n");
        }
        return 0;
    
}