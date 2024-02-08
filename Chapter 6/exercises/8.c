
/*
#include <stdio.h> //a
int main(void)
{
    char ch;
    scanf("%c", &ch);
    while ( ch != 'g' ) 
    {
        printf("%c", ch);
        scanf("%c", &ch);
    }
    return 0;
}


//Go west, youn

#include <stdio.h>//b
int main(void)
{
    char ch;

    scanf("%c", &ch);
    while ( ch != 'g' )
    {
        printf("%c", ++ch);
        scanf("%c", &ch);
    }
    return 0;
}
//Hp!xftu-!zpvo

*/

/*
#include <stdio.h>//c
int main(void)
{
    char ch;

    do {
    scanf("%c", &ch);
    printf("%c", ch);
    } while ( ch != 'g' );
    return 0;
}

//Go west, young
*/


#include <stdio.h>
int main(void)
{
    char ch;

    scanf("%c", &ch);

    for ( ch = '$'; ch != 'g'; scanf("%c", &ch) )
        putchar(ch);
    return 0;
}

//$o west, youn

