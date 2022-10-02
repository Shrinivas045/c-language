
#include <stdio.h>

int main() {
    // Write C code here
    int marks;
    
    printf("enter a marks of students:");
    scanf("%d",&marks);
    
    if(marks>=60 && marks<=100) {
        printf("first grade");
    } 
    else if(marks<=60 && marks>=50) {
        printf("second grade");
    }
    else if(marks<=50 && marks>=40) {
        printf("third grade");
    }
    else if(marks>=0 && marks<=40) {
        printf("fail");
    }
    else{
        printf("wrong info");
    }
    
    return 0;
}