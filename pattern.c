#include <stdio.h>  
#include <conio.h>  
int main()  
{  
    // declare the local variables  
    int i, j, rows;  
    printf (" Enter a number to define the rows:");  
    scanf("%d", &rows);   
     
    for (i = 1; i <= rows; ++i)   
    {  
        for (j = 1; j <= i; ++j)   
        {  
            printf ("%d ", j); // print the number  
        }  
        printf ("\n");   
    }  
    return 0;
}  
