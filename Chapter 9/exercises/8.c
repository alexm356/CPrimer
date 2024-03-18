#include <stdio.h>

int return_argument(int a, int b, int c);

int main(){

    int x = 101, y = 99, z = 100;

    int result;

    result = return_argument(x, y, z);

    printf("Largest: %d", result);
}   

int return_argument(int a, int b, int c){

    int largest;

    if (a > b && a > c){
        largest = a;
    }else if (b > a && b > c){
        largest = b;
    } else if (c > a && c > b){
        largest = c;
    }

    return largest;

}