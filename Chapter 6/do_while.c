/* do_while.c -- exit condition loop */
#include <stdio.h>


/*

* Exit - condition loop, in which condition is checked after each iteration of loop. guaranteeing that statement executed at least once.


*/
int main(void)
{
    const int secret_code = 13;
    int code_entered;
    
    do
    {
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    
    } while (code_entered != secret_code);
        
        printf("Congratulations! You are cured!\n");
 return 0;
}