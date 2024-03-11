#include <stdio.h>
int main(void)
{ 
 int i, j, list[10]; /* line 4 */

 for (i = 1; i <= 9; i++) /* line 6 */
 { 
    list[i] = 2 * i + 3; /* line 8 */
    
    for (j = 1; j <= i; j++) /* line 9 */
        printf(" %d", list[j]); /* line 10 */
        printf("\n"); /* line 11 */
} /* line 12 */
}