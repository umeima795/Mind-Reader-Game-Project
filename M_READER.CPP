#include<conio.h>
#include<stdio.h>
#include<string.h>
char word_s(int column, int row, int x);
void game_body(void);
void game_body1(void);
                    //MAIN FUNCTION FOR THE GAME
void main(void)
{
clrscr();
int word_length=0, x=1, row=0, column=0;
char word[60];
//INITIALIZING 'WORD' ARRAY WITH NULL CHARACTERS
memset(word,'\0', sizeof(word));
game_body();
printf("Enter selected word length:");
scanf("%d",&word_length);
while(x<=word_length)
{
game_body();
printf("Enter number of alphabet %d:",x);
scanf("%d",&column);
game_body1();
printf("Enter number of alphabet %d:",x);
scanf("%d",&row);
word[x-1]=word_s(column, row, x);
x++;
}
printf("You selected %s in your mind.\nCorrect! :-)",word);
getch();
}
                        //GAME BODY FUNCTION 

void game_body(void)
{
clrscr();
printf("\t\t\t********Mind Reader Game********");
printf("\n\t\t  First you have to select a word in your mind,\n\t\t at the end of game computer will show it to you.");
printf("\n\n\t\t\t\t   1 2 3 4 5\n\t\t\t\t   A B C D E\n\t\t\t\t   F G H I J\n\t\t\t\t   K L M N O\n\t\t\t\t   P Q R S T\n\t\t\t\t   U V W X Y\n\t\t\t\t       Z");
printf("\nFind alphabets of your selected word from first to last in shown grid,\nthen enter its row number and column number one by one respectively.\nFor SPACE enter 6 for first value and enter 6 for second value");
//ESCAPE SEQUENCE
printf("\033[15;1H");
}
                    //GAME BODY1 FUNCTION

void game_body1(void)
{
clrscr();
printf("\t\t\t********Mind Reader Game********");
printf("\n\t\t  First you have to select a word in your mind,\n\t\t at the end of game computer will show it to you.");
printf("\n\n\t\t\t\t   1 2 3 4 5 6\n\t\t\t\t   A F K P U\n\t\t\t\t   B G L Q V\n\t\t\t\t   C H M R W Z\n\t\t\t\t   D I N S X\n\t\t\t\t   E J O T Y\n\n");
printf("Find alphabets of your selected word from first to last in shown grid,\nthen enter its row number and column number one by one respectively.\nFor SPACE enter 6 for first value and enter 6 for second value");
//ESCAPE SEQUENCE
printf("\033[15;1H");
}
                  //CHARACTER WORD_S FUNCTION TO RETRIEVE THE WORD FROM NUMBER OF LETTERS

char word_s(int column, int row, int x)
{
char word;
if(row==1 && column==1)
word='A';
else if(row==1 && column==2)
word='B';
else if(row==1 && column==3)
word='C';
else if(row==1 && column==4)
word='D';
else if(row==1 && column==5)
word='E';
else if(row==2 && column==1)
word='F';
else if(row==2 && column==2)
word='G';
else if(row==2 && column==3)
word='H';
else if(row==2 && column==4)
word='I';
else if(row==2 && column==5)
word='J';
else if(row==3 && column==1)
word='K';
else if(row==3 && column==2)
word='L';
else if(row==3 && column==3)
word='M';
else if(row==3 && column==4)
word='N';
else if(row==3 && column==5)
word='O';
else if(row==4 && column==1)
word='P';
else if(row==4 && column==2)
word='Q';
else if(row==4 && column==3)
word='R';
else if(row==4 && column==4)
word='S';
else if(row==4 && column==5)
word='T';
else if(row==5 && column==1)
word='U';
else if(row==5 && column==2)
word='V';
else if(row==5 && column==3)
word='W';
else if(row==5 && column==4)
word='X';
else if(row==5 && column==5)
word='Y';
else if(row==6 && column==3)
word='Z';
else if(row==6 && column==6)
word=' ';
return word;
}
