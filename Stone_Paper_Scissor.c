#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int game()
{
    int num,i,com=0,p=0;
    char co[10],hand[10];
    srand(time(NULL));
    printf("\n\nPress:\n\nS - Stone\nZ - Paper\nX - Scissor\n ");
    //Computer
    do
    {
    num=rand()%100+1;
    if (num<=33){
        co[0]='s';
    }
    else if (num>33 && num<66){
        co[0]='z';
    }
    else{
        co[0]='x';
    }
    
    //Player
    printf("\nEnter: ");
    label:scanf("%s",&hand[0]);
    
    //Stone
    if ((hand[0]=='S' || hand[0]=='s') && co[0]=='s')
    {
        printf("                                                               \n");
        printf("                                                               \n");
        printf("                                                               \n");
        printf("        ** ** ** **                            ** ** ** **     \n");
        printf("        ** ** ** ** **                      ** ** ** ** **     \n");
        printf("        ** ** ** ** **                      ** ** ** ** **     \n");
        printf("           ** ** * *                          * * ** **        \n");
        printf("                                                               \n");
        printf("\n          YOU: %d                                COM: %d\n",p,com);      
    }
    else if ((hand[0]=='S' || hand[0]=='s') && co[0]=='x')
    {
        printf("                                            *     **           \n");
        printf("                                             **   **           \n");
        printf("                                              **  **           \n");
        printf("        ** ** ** **                            ** ** ** **     \n");
        printf("        ** ** ** ** **                        ************     \n");
        printf("        ** ** ** ** **                         ***********     \n");
        printf("           ** ** * *                            *********      \n");
        printf("                                                 *******       \n");
        p++; 
        printf("\n          YOU: %d                                COM: %d\n",p,com);     
    }
    else if ((hand[0]=='S' || hand[0]=='s') && co[0]=='z')
    {
        printf("                                                    **         \n");
        printf("                                                **  **  **     \n");
        printf("                                                **  ** **  **  \n");
        printf("        ** ** ** **                         **   *  ** ** **   \n");
        printf("        ** ** ** ** **                        ** *********     \n");
        printf("        ** ** ** ** **                          ***********    \n");
        printf("           ** ** * *                             *********     \n");
        printf("                                                  *******      \n");
        com++;
        printf("\n          YOU: %d                                COM: %d\n",p,com);      
    }

    //Papers
    else if (co[0]=='z' && (hand[0]=='z' || hand[0]=='Z'))
    {
        printf("               **                                  **          \n");
        printf("           **  **  **                          **  **  **      \n");
        printf("        **  ** **  **                          **  ** **  **   \n");
        printf("         ** ** **  *  **                    **  *  ** ** **    \n");
        printf("          ********** **                      ** **********     \n");
        printf("          ***********                          ***********     \n");
        printf("           *********                            *********      \n");
        printf("            *******                              *******       \n");   
        printf("\n          YOU: %d                                COM: %d\n",p,com);              
    }
    else if (co[0]=='s' && (hand[0]=='z' || hand[0]=='Z'))
    {
        printf("               **                                              \n");
        printf("           **  **  **                                          \n");
        printf("        **  ** **  **                                          \n");
        printf("         ** ** **  *  **                       ** ** ** **     \n");
        printf("          ********** **                     ** ** ** ** **     \n");
        printf("          ***********                       ** ** ** ** **     \n");
        printf("           *********                          * * ** **        \n");
        printf("            *******                                            \n");   
        p++;
        printf("\n          YOU: %d                                COM: %d\n",p,com);             
    }
    else if (co[0]=='x' && (hand[0]=='z' || hand[0]=='Z'))
    {
        printf("               **                           *     **           \n");
        printf("           **  **  **                        **   **           \n");
        printf("        **  ** **  **                         **  **           \n");
        printf("         ** ** **  *  **                       ** ** ** **     \n");
        printf("          ********** **                       ************     \n");
        printf("          ***********                          ***********     \n");
        printf("           *********                            *********      \n");
        printf("            *******                              *******       \n"); 
        com++;
        printf("\n          YOU: %d                                COM: %d\n",p,com);       
    }

    //Scissors
    else if (co[0]=='x' && (hand[0]=='x' || hand[0]=='X'))
    {
        printf("              **     *                      *     **           \n");
        printf("              **   **                        **   **           \n");
        printf("              **  **                          **  **           \n");
        printf("        ** ** ** **                            ** ** ** **     \n");
        printf("        ************                          ************     \n");
        printf("        ***********                            ***********     \n"); 
        printf("         ********                               *********      \n");
        printf("          ******                                 *******       \n");
        printf("\n          YOU: %d                                COM: %d\n",p,com);    
    }
    else if (co[0]=='s' && (hand[0]=='x' || hand[0]=='X'))
    {
        printf("              **     *                                         \n");
        printf("              **   **                                          \n");
        printf("              **  **                                           \n");
        printf("        ** ** ** **                            ** ** ** **     \n");
        printf("        ************                        ** ** ** ** **     \n");
        printf("        ***********                         ** ** ** ** **     \n"); 
        printf("         ********                             * * ** **        \n");
        printf("          ******                                               \n");
        com++;
        printf("\n          YOU: %d                                COM: %d\n",p,com); 
    }
     else if (co[0]=='z' && (hand[0]=='x' || hand[0]=='X'))
    {
        printf("              **     *                             **          \n");
        printf("              **   **                           ** **  **      \n");
        printf("              **  **                            ** ** **  **   \n");
        printf("        ** ** ** **                         **   * ** ** **    \n");
        printf("        ************                         ** **********     \n");
        printf("        ***********                            ***********     \n"); 
        printf("         ********                               *********      \n");
        printf("          ******                                 *******       \n");
        p++;
        printf("\n          YOU: %d                                COM: %d\n",p,com);    
    }
    
    else{
        printf("\n'INVALID'\n\nEnter:"); goto label;
    }
    if (com==3){
        printf("\n%*cYou 'Lost'\n",65,' ');
        printf("%*cBetter Luck Next Time\n",60,' ');
        break;
    }
    else if (p==3){
        printf("\n%*cYou 'WON'\n",65,' ');
        printf("%*cNice Luck There\n",62,' ');
        break;
    }
    fflush(stdin);
    }while (1);    
}

int main()
{
    char str[10];
    printf("\n\n%*cStone x Paper x Scissor\n%*Cwith 'COM'",60,' ',67,' ');
    while (1)
    {
        game();
        //Repeat
        printf("\n%*cWanna Play Again? Y,y/N,n - ",55,' ');
        label1:scanf("%s",str);
        if (str[0]=='n'||str[0]=='N'){
            break;
        }
        else if (str[0]=='y'||str[0]=='Y'){
            continue;
        }
        else{
            printf("\n%*c'Invalid' Please Enter Y,y(yes)/N,n(no) - ",50,' ');
            goto label1;
        }
    }    
    printf("\n\n%*c'THANK YOU'",65,' ');
    return 0;
}