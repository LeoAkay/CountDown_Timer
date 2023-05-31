#include <unistd.h>
#include <stdio.h>
int main() {
    int time;
    printf("Enter a time in seconds: ");
    scanf("%d",&time);
    while (time>0){
        printf("%d\n",time);
        time--;
        sleep(1);
    }
    printf("!!!Time Is Up!!!");
    return 0;
}
