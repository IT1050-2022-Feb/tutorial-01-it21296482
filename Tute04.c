#include <stdio.h>
minimum(int no1,int no2);
maximum(int no1,int no2);
multiply(int no1,int no2);
int main() {
    int no1, no2;
    printf("Enter a value for no 1 : ");
    scanf("%d", &no1);
    printf("Enter a value for no 2 : ");
    scanf("%d", &no2);
    printf("%d ", minimum(no1, no2));
    printf("%d ", maximum(no1, no2));
    printf("%d ", multiply(no1, no2));
    return 0;
}
minimum(int no1,int no2){
    if(no1>no2)
        return no2;

    else
        return no1;

}
maximum(int no1,int no2){
    if(no1<no2)
        return no2;

    else
        return no1;

}
multiply(int no1,int no2){

    return no1*no2;
}
