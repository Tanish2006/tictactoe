#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include <string.h>
#include <dos.h>
char box[10]={'o','1','2','3','4','5','6','7','8','9'};
char name1[20],ch2;
char name2[20];
char player[20];
char player2[10]="Computer";
int t1,t2;
int win()
{
    if (box[1]==box[2]&&box[2]==box[3])
        return 1;
    else if (box[4]==box[5]&&box[5]==box[6])
        return 1;

    else if (box[7]==box[8]&&box[8]==box[9])
        return 1;

    else if (box[1]==box[4]&&box[4]== box[7])
        return 1;

    else if (box[2]==box[5]&&box[5]==box[8])
        return 1;

    else if (box[3]==box[6]&&box[6]==box[9])
        return 1;

    else if (box[1]==box[5]&&box[5]==box[9])
        return 1;

    else if (box[3]==box[5]&&box[5]==box[7])
        return 1;

    else if (box[1]!='1'&&box[2]!='2'&&box[3]!='3'&&box[4]!='4'&&box[5]!='5'&&box[6]!='6'&&box[7]!='7'&&box[8]!='8'&&box[9]!='9')
        return 0;
    else
        return  - 1;
}
int computer()
{

    if(box[1]=='O'&&box[2]=='O'&&box[3]=='3')
    {
        box[3]='O';
        return 0;
    }
    else if(box[2]=='O'&&box[3]=='O'&&box[1]=='1')
    {
        box[1]='O';
        return 0;
    }
    else if(box[1]=='O'&&box[3]=='O'&&box[2]=='2')
    {
        box[2]='O';
        return 0;
    }
    else if(box[1]=='O'&&box[4]=='O'&&box[7]=='7')
    {
        box[7]='O';
        return 0;
    }
    else if(box[4]=='O'&&box[7]=='O'&&box[1]=='1')
    {
        box[1]='O';
        return 0;
    }
    else if(box[1]=='O'&&box[7]=='O'&&box[4]=='4')
    {
        box[4]='O';
        return 0;
    }
    else if(box[7]=='O'&&box[8]=='O'&&box[9]=='9')
    {
        box[9]='O';
        return 0;
    }
    else if(box[8]=='O'&&box[9]=='O'&&box[7]=='7')
    {
        box[7]='O';
        return 0;
    }
    else if(box[7]=='O'&&box[9]=='O'&&box[8]=='8')
    {
        box[8]='O';
        return 0;
    }
    else if(box[9]=='O'&&box[6]=='O'&&box[3]=='3')
    {
        box[3]='O';
        return 0;
    }
    else if(box[6]=='O'&&box[3]=='O'&&box[9]=='9')
    {
        box[9]='O';
        return 0;
    }
    else if(box[9]=='O'&&box[3]=='O'&&box[6]=='6')
    {
        box[6]='O';
        return 0;
    }
    else if(box[2]=='O'&&box[5]=='O'&&box[8]=='8')
    {
        box[8]='O';
        return 0;
    }
    else if(box[5]=='O'&&box[8]=='O'&&box[2]=='2')
    {
        box[2]='O';
        return 0;
    }
    else if(box[2]=='O'&&box[8]=='O'&&box[5]=='5')
    {
        box[5]='O';
        return 0;
    }
    else if(box[4]=='O'&&box[5]=='O'&&box[6]=='6')
    {
        box[1]='O';
        return 0;
    }
    else if(box[5]=='O'&&box[6]=='O'&&box[4]=='4')
    {
        box[4]='O';
        return 0;
    }
    else if(box[4]=='O'&&box[6]=='O'&&box[5]=='5')
    {
        box[5]='O';
        return 0;
    }
    else if(box[1]=='O'&&box[5]=='O'&&box[9]=='9')
    {
        box[9]='O';
        return 0;
    }
    else if(box[5]=='O'&&box[9]=='O'&&box[1]=='1')
    {
        box[1]='O';
        return 0;
    }
    else if(box[1]=='O'&&box[9]=='O'&&box[5]=='5')
    {
        box[5]='O';
        return 0;
    }
    else if(box[3]=='O'&&box[5]=='O'&&box[7]=='7')
    {
        box[7]='O';
        return 0;
    }
    else if(box[5]=='O'&&box[7]=='O'&&box[3]=='3')
    {
        box[3]='O';
        return 0;
    }
    else if(box[3]=='O'&&box[7]=='O'&&box[5]=='5')
    {
        box[5]='O';
        return 0;
    }
    if(box[1]=='X'&&box[2]=='X'&&box[3]=='3')
    {
        box[3]='O';
        return 0;
    }
    else if(box[2]=='X'&&box[3]=='X'&&box[1]=='1')
    {
        box[1]='O';
        return 0;
    }
    else if(box[1]=='X'&&box[3]=='X'&&box[2]=='2')
    {
        box[2]='O';
        return 0;
    }
    else if(box[1]=='X'&&box[4]=='X'&&box[7]=='7')
    {
        box[7]='O';
        return 0;
    }
    else if(box[4]=='X'&&box[7]=='X'&&box[1]=='1')
    {
        box[1]='O';
        return 0;
    }
    else if(box[1]=='X'&&box[7]=='X'&&box[4]=='4')
    {
        box[4]='O';
        return 0;
    }
    else if(box[7]=='X'&&box[8]=='X'&&box[9]=='9')
    {
        box[9]='O';
        return 0;
    }
    else if(box[8]=='X'&&box[9]=='X'&&box[7]=='7')
    {
        box[7]='O';
        return 0;
    }
    else if(box[7]=='X'&&box[9]=='X'&&box[8]=='8')
    {
        box[8]='O';
        return 0;
    }
    else if(box[9]=='X'&&box[6]=='X'&&box[3]=='3')
    {
        box[3]='O';
        return 0;
    }
    else if(box[6]=='X'&&box[3]=='X'&&box[9]=='9')
    {
        box[9]='O';
        return 0;
    }
    else if(box[9]=='X'&&box[3]=='X'&&box[6]=='6')
    {
        box[6]='O';
        return 0;
    }
    else if(box[2]=='X'&&box[5]=='X'&&box[8]=='8')
    {
        box[8]='O';
        return 0;
    }
    else if(box[5]=='X'&&box[8]=='X'&&box[2]=='2')
    {
        box[2]='O';
        return 0;
    }
    else if(box[2]=='X'&&box[8]=='X'&&box[5]=='5')
    {
        box[5]='O';
        return 0;
    }
    else if(box[4]=='X'&&box[5]=='X'&&box[6]=='6')
    {
        box[6]='O';
        return 0;
    }
    else if(box[5]=='X'&&box[6]=='X'&&box[4]=='4')
    {
        box[4]='O';
        return 0;
    }
    else if(box[4]=='X'&&box[6]=='X'&&box[5]=='5')
    {
        box[5]='O';
        return 0;
    }
    else if(box[1]=='X'&&box[5]=='X'&&box[9]=='9')
    {
        box[9]='O';
        return 0;
    }
    else if(box[5]=='X'&&box[9]=='X'&&box[1]=='1')
    {
        box[1]='O';
        return 0;
    }
    else if(box[1]=='X'&&box[9]=='X'&&box[5]=='5')
    {
        box[5]='O';
        return 0;
    }
    else if(box[3]=='X'&&box[5]=='X'&&box[7]=='7')
    {
        box[7]='O';
        return 0;
    }
    else if(box[5]=='X'&&box[7]=='X'&&box[3]=='3')
    {
        box[3]='O';
        return 0;
    }
    else if(box[3]=='X'&&box[7]=='X'&&box[5]=='5')
    {
        box[5]='O';
        return 0;
    }

    else
        return 1;

}
void base()
{
     system("cls");
    if(ch2=='M')
    {
        printf("%s (X)  VS  %s (O)",name1,name2);
        printf("\n  %d          %d\n\n\n",t1,t2);
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c \n", box[1], box[2], box[3]);

        printf("_____|_____|_____\n");
        printf("     |     |     \n");

        printf("  %c  |  %c  |  %c \n", box[4], box[5], box[6]);

        printf("_____|_____|_____\n");
        printf("     |     |     \n");

        printf("  %c  |  %c  |  %c \n", box[7], box[8], box[9]);

        printf("     |     |     \n\n");
    }
    else
    {
        printf("%s (X)  VS  %s (O)",player,player2);
        printf("\n  %d          %d\n\n\n",t1,t2);
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c \n", box[1], box[2], box[3]);

        printf("_____|_____|_____\n");
        printf("     |     |     \n");

        printf("  %c  |  %c  |  %c \n", box[4], box[5], box[6]);

        printf("_____|_____|_____\n");
        printf("     |     |     \n");

        printf("  %c  |  %c  |  %c \n", box[7], box[8], box[9]);

        printf("     |     |     \n\n");
    }
}
void computercheck()
{
    if(box[5]=='5')
    {
        box[5]='O';
    }
    else if(box[1]=='1')
    {
        box[1]='O';
    }
    else if(box[3]=='3')
    {
        box[3]='O';
    }
    else if(box[7]=='7')
    {
        box[7]='O';
    }
    else if(box[9]=='9')
    {
        box[9]='O';
    }
    else if(box[2]=='2')
    {
        box[2]='O';
    }
    else if(box[8]=='8')
    {
        box[8]='O';
    }
    else if(box[4]=='4')
    {
        box[4]='O';
    }
    else if(box[6]=='6')
    {
        box[6]='O';
    }
    else
    {

    }
}
int main()
{

    int p=1,i,ch,j,flag=0,s,flag2=0,ch4,y,w;
    char mark,b[10]={'o','1','2','3','4','5','6','7','8','9'};
    char ch3;
    system("cls");
    do
    {
        system("cls");
         if(flag==1)
        {
            system("cls");
            ch2='M';
        }
        else if(flag2==1)
        {
            system("cls");
            ch2='S';
        }
        else
        {
            printf("\n\n\t\t\t===============Tic Tac Toe=================\n");
            printf("\n\n\n\t\t\t\tS.Single Player\n\n\n");
            printf("\t\t\t\tM.Multiple Player\n\n\n");
            printf("\t\t\t\tE.Exit\t");
            scanf("%c",&ch2);
        }
        switch(ch2)
        {
            case 'S':
                system("cls");
                p=1;
                for(j=0;j<10;j++)
                {
                    box[j]=b[j];
                }
                if(flag2!=1)
                {
                    printf("\n\nPlayer  (X)  -  Computer (O)\n\n\n");
                    printf("Enter name of Player:\t");

                    scanf("%s",player);

                    t1=0;
                    t2=0;
                }
                flag2=0;
                do
                {
                    base();
                    if(p%2!=0)
                    {


                        mark='X';
                        printf("Chance of player %s enter a number: ",player);

                        scanf("%d",&ch);
                    }
                    else
                    {
                        y=computer();
                        if(y==1)
                        {

                                computercheck();
                                base();
                                printf("Computer played");
                                Sleep(1000);

                        }
                        else
                        {
                            base();
                            printf("Computer Played");
                            Sleep(1000);
                        }

                    }

                    if(p%2!=0)
                    {
                        if(ch==1&&box[1]=='1')
                            box[1]=mark;
                        else if(ch==2&&box[2]=='2')
                            box[2]=mark;
                        else if(ch==3&&box[3]=='3')
                            box[3]=mark;
                        else if(ch==4&&box[4]=='4')
                            box[4]=mark;
                        else if(ch==5&&box[5]=='5')
                            box[5]=mark;
                        else if(ch==6&&box[6]=='6')
                            box[6]=mark;
                        else if(ch==7&&box[7]=='7')
                            box[7]=mark;
                        else if(ch==8&&box[8]=='8')
                            box[8]=mark;
                        else if(ch==9&&box[9]=='9')
                            box[9]=mark;
                        else
                        {
                            printf("Invalid move ");
                            printf("\a\a");
                            p--;
                            getch();
                        }
                    }
                    i=win();
                    if(i==1&&p%2!=0)
                    {
                        t1++;
                        base();
                        printf("Player (X) %s WINS\a",player);
                        printf("\a");

                    }
                    if(i==1&&p%2==0)
                    {
                        t2++;
                        base();
                        printf("Player (O) %s WINS",player2);
                        printf("\a");
                    }
                    if(i==0)
                    {
                        base();
                        printf("Game is Draw");
                        printf("\a");

                    }

                     p++;
                     if(i==0||i==1)
                     {
                        printf("\n\nDo you want to play again Press Y=Yes and N=No:\t");
                        scanf("\n%c",&ch3);
                     }
                }while(i==-1);
                if(ch3=='Y')
                {
                    flag2=1;
                }
                break;

            case 'M':
                system("cls");
                p=1;
                t1=0;
                t2=0;
                for(j=0;j<10;j++)
                {
                    box[j]=b[j];
                }
                if(flag!=1)
                {
                    printf("\n\nPlayer 1 (X)  -  Player 2 (O)\n\n\n");
                    printf("Enter name of Player1:\t");
                    scanf("%s",name1);
                    printf("Enter name of Player2:\t");
                    scanf("%s",name2);
                    t1=0;
                    t2=0;

                }
                flag=0;
                do
                {
                    base();
                    if(p%2!=0)
                    {


                        mark='X';
                        printf("Chance of player %s enter a number: ",name1);
                        scanf("%d",&ch);
                    }
                    else
                    {


                        mark='O';
                        printf("Chance of player %s enter a number: ",name2);
                        scanf("%d",&ch);
                    }
                    if(ch==1&&box[1]=='1')
                        box[1]=mark;
                    else if(ch==2&&box[2]=='2')
                        box[2]=mark;
                    else if(ch==3&&box[3]=='3')
                        box[3]=mark;
                    else if(ch==4&&box[4]=='4')
                        box[4]=mark;
                    else if(ch==5&&box[5]=='5')
                        box[5]=mark;
                    else if(ch==6&&box[6]=='6')
                        box[6]=mark;
                    else if(ch==7&&box[7]=='7')
                        box[7]=mark;
                    else if(ch==8&&box[8]=='8')
                        box[8]=mark;
                    else if(ch==9&&box[9]=='9')
                        box[9]=mark;
                    else
                    {
                        printf("Invalid move ");
                        printf("\a\a");
                        p--;
                        getch();
                    }
                    i=win();
                    if(i==1&&p%2!=0)
                    {
                        t1++;
                        base();
                        printf("Player (X) %s WINS\a",name1);
                        printf("\a");

                    }
                    if(i==1&&p%2==0)
                    {
                        t2++;
                        base();
                        printf("Player (O) %s WINS",name2);
                        printf("\a");
                    }
                    if(i==0)
                    {
                        base();
                        printf("Game is Draw");
                        printf("\a");

                    }

                     p++;
                     if(i==0||i==1)
                     {
                        printf("\n\nDo you want to play again Press Y=Yes and N=No:\t");
                        scanf("\n%c",&ch3);
                     }
                }while(i==-1);
                if(ch3=='Y')
                {
                    flag=1;
                }
                break;
            case 'E':
                system("cls");
                break;


        }

    }while(ch2!='E');


    return 0;
}
















