//  C Program to construct a simple Tic-Tac-Toe game using loops and conditional operators.

/*
    Author: Jolen Mark Mascarenhas
    Std: 11 Sci C
    Roll No.: 5213

    Program Version: 1.0
    Date created: 9-02-2021
    Category: Game
*/
   
#include<stdio.h>
int main()
{
    char a='1',b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9';
    int j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0;
    int x,y,z;

    printf("_____________________________ Tic Tac Toe _____________________________\n");
    printf("\nRules:\n1)Each block is numbered from 1 to 9\n2)The player has to type the box number in which he wants to play his turn\n3)If you take a wrong number or the number which is already taken, your turn will be terminated\n\nPlayer 1: X\nPlayer 2: O\n\nThe numbering system is given below\n\n 1 | 2 | 3 \n __________\n 4 | 5 | 6\n __________\n 7 | 8 | 9\n\n");
    for(z=100;z>0;z--)
    {
        printf("\n\nPlayer 1: ");
        scanf("%d",&x);
        if(x==1 && j==0)
        {
            j=1;
            a='X';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(x==2 && k==0)
        {
            k=2;
            b='X';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(x==3 && l==0)
        {
            l=3;
            c='X';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(x==4 && m==0)
        {
            m=4;
            d='X';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(x==5 && n==0)
        {
            n=5;
            e='X';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(x==6 && o==0)
        {
            o=6;
            f='X';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(x==7 && p==0)
        {
            p=7;
            g='X';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(x==8 && q==0)
        {
            q=8;
            h='X';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(x==9 && r==0)
        {
            r=9;
            i='X';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else
        {
            printf("You entered wrong value or the number is already taken\nYour turn is terminated\n\n");
        }

        if(a=='X' && b=='X' && c=='X' || d=='X' && e=='X' && f=='X' || g=='X' && h=='X' && i=='X' || a=='X' && d=='X' && g=='X' || b=='X' && e=='X' && h=='X' || e=='X' && f=='X' && i=='X' || a=='X' && e=='X' && i=='X' || c=='X' && e=='X' && g=='X')
        {
            printf("Player 1 won!\n");
            break;
        }
        else if(a=='O' && b=='O' && c=='O' || d=='O' && e=='O' && f=='O' || g=='O' && h=='O' && i=='O' || a=='O' && d=='O' && g=='O' || b=='O' && e=='O' && h=='O' || e=='O' && f=='O' && i=='O' || a=='O' && e=='O' && i=='O' || c=='O' && e=='O' && g=='O')
        {
            printf("Player 2 won!\n");
            break;
        }

        if(j==1 && k==2 && l==3 && m==4 && n==5 && o==6 && p==7 && q==8 && r==9)
        {
            printf("\n The game is Draw\n");
            break;
        }

        printf("\n\nPlayer 2: ");
        scanf("%d",&y);
        if(y==1 && j==0)
        {
            j=1;
            a='O';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(y==2 && k==0)
        {
            k=2;
            b='O';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(y==3 && l==0)
        {
            l=3;
            c='O';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(y==4 && m==0)
        {
            m=4;
            d='O';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(y==5 && n==0)
        {
            n=5;
            e='O';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(y==6 && o==0)
        {
            o=6;
            f='O';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(y==7 && p==0)
        {
            p=7;
            g='O';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(y==8 && q==0)
        {
            q=8;
            h='O';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else if(y==9 && r==0)
        {
            r=9;
            i='O';
            printf("You played\n %c | %c | %c \n __________\n %c | %c | %c \n __________\n %c | %c | %c \n",a,b,c,d,e,f,g,h,i);
        }
        else
        {
            printf("\nYou entered wrong value or the number is already taken\nYour turn is terminated\n\n");
        }

        if(a=='X' && b=='X' && c=='X' || d=='X' && e=='X' && f=='X' || g=='X' && h=='X' && i=='X' || a=='X' && d=='X' && g=='X' || b=='X' && e=='X' && h=='X' || c=='X' && f=='X' && i=='X' ||e=='X' && f=='X' && i=='X' || a=='X' && e=='X' && i=='X' || c=='X' && e=='X' && g=='X')
        {
            printf("Player 1 won!\n");
            break;
        }
        else if(a=='O' && b=='O' && c=='O' || d=='O' && e=='O' && f=='O' || g=='O' && h=='O' && i=='O' || a=='O' && d=='O' && g=='O' || b=='O' && e=='O' && h=='O' || c=='O' && f=='O' && i=='O' ||e=='O' && f=='O' && i=='O' || a=='O' && e=='O' && i=='O' || c=='O' && e=='O' && g=='O')
        {
            printf("Player 2 won!\n");
            break;
        }  

        if(j==1 && k==2 && l==3 && m==4 && n==5 && o==6 && p==7 && q==8 && r==9)
        {
            printf("\n The game is Draw\n");
            break;
        }
    }
    return 0;
}
