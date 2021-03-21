/*Tic Tac Toe game illustrates many of the ways that to manipulate array in C */

/*The computer plays very simple game.
When it is computers turn,it uses
get_computer_move() to scan scan the matrix,
looking for unoccupied cell.When it finds one it put an 'O' there.
If it cannot find empty location,it draw game and exits.
The get_player_moves function ask user where it wants to place 'X'.
The matrix array is initallized to contain spaces.
Each move made by player or computer changes the spaces into either 'X' or 'O'
Each time a move has been made the program calls the check() function.
This function returns the space if there is no winner yet,
it scans for rows, coloumns and diagonals.
The disp_matrix() function display the current state of game. */

#include <stdio.h>
#include <stdlib.h>

char matrix[3][3]; /*tic tac toe matrix */

char check(void);
void init_matrix(void);
void get_player_move(void);
void get_computer_move(void);
void disp_matrix(void);

int main()  {
    char done;
    printf("This is the game of tic tac toe \n");
    printf("You will be playing againts computer \n");

    done=' ';
    init_matrix();
    do
    {
        disp_matrix();

        get_player_move();
        done = check(); /*see if winner*/
        if(done != ' ') 
        break; /*winner*/

        get_computer_move();
        done = check(); /*see if winner*/
    } while (done == ' ');

    if(done == 'X') printf("You Won!\n");
    else printf("Computer has won!\n");

    disp_matrix(); /*Show final position */

    return 0;
}

/* Initalize the matrix */
void init_matrix(void)  {
    int i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    matrix[i][j] = ' ';
}

/* Get a player */
void get_player_move(void)  {
    int x,y;

    printf("Enter X,Y coordinates from your move : ");
    scanf("%d%*c%d",&x,&y);

    x-- , y--;

    if( matrix[x][y] != ' ')    {
        printf("Invalid move try again \n");
        get_player_move();
    }
    else
    {
        printf("\n\t %d  %d \n\n",x,y);
        matrix[x][y] = 'X'; 
    }
}

/* Get the move from computer */
void get_computer_move(void)    {
    int i,j;

    for(i=0;i<3;i++)    {
        for(j=0;j<3;j++)    {
            if(matrix[i][j]= ' ') break;    }
    if(matrix[i][j]= ' ') break;
            }

    if(i*j == 9)    {
        printf("draw\n");
        exit(0);
    }
    else
    {
        printf("\n\t %d  %d \n\n",i,j);
        matrix[i][j] = 'O';
    }
}

/* Display matrix on screen */
void disp_matrix(void)  {
    int t;

    for(t=0;t<3;t++) {
        printf(" %c | %c | %c ",matrix[t][0],matrix[t][1],matrix[t][2]);
       
        if(t != 2)
        printf("\n---|---|---\n");
    }
    printf("\n");
}

/* See if there is winner */
char check(void)    {
    int i;

    for (i=0; i<3 ; i++) /*check rows*/
    if(matrix[i][0] == matrix[i][1] && matrix[i][0] == matrix[i][2])
    return matrix[i][0];

    for (i=0; i<3 ; i++) /*check coloumns*/
    if(matrix[0][i] == matrix[1][i] && matrix[0][i] == matrix[2][i])
    return matrix[0][i];

    /*Test Diagonals*/
    if(matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
    return matrix[0][0];

    if(matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0])
    return matrix[0][2];

    return ' ';

}