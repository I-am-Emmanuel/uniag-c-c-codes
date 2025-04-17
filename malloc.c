# include <stdio.h>
# include <string.h>
# include <stdlib.h>

// int main(){
//     int *number = (int*) malloc(sizeof(int));
    
//     if (!number){
//         printf("Memory declaration failed!!\n");
//         return 0;
//     };

//     *number = 83;
//     printf("Number allocated is: %d\n", *number);
//     return 1;

//     free(number);
// }


struct stack 
 {  int info;
 struct stack *next;
 };
 /* pointer declaration to point to the top of the stack */
 struct stack *top;
 main( )
 {
 top = NULL;
 char menu = 0;
 while (menu != 3)
 {
 printf("Add Nodes  :\n");
 printf("Delete Nodes  :\n");
 printf("Exit "); 

menu = getchar( );
 }
 switch (menu)
 {
 case 1 : push( );
 break;
 case 2 : pop( );
 break;
case 3: exit( ); 
 break;
 } /* end of switch */
 } /* end of main( ) */
