#include<stdio.h>
enum Day{Sun,Mon,Tue,Wed,Thu,Fri,Sat};
int main() {
    enum Day today;
    today = Wed;
    printf("Today is day number:%d",today);
    return 0;

}