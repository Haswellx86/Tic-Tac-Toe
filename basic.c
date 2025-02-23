#include <stdio.h>

int main()
{
    int board[3][3] = {{0, 0, 0,},{0, 0, 0,}, {0, 0, 0}};
    int run = 1, turn = 1;
    int inputrow = 0, inputcol = 0;

    while (run == 1)
    {
        printf("Current board: \n");
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                if (board[i][j] == 0)
                {
                    printf("-  ");
                }
                else if (board[i][j] == 1)
                {
                    printf("O  ");
                }
                else 
                {
                    printf("X  ");
                }
            }
            printf("\n");
        }
        printf("Player %d turn. Select a square by entering row and column.\n", turn);
        printf("Row: ");
        scanf("%d", &inputrow);
        printf("\nColumn: ");
        scanf("%d", &inputcol);
        if (turn == 1)
        {
            board[inputrow][inputcol] = 1;
        }
        else
        {
            board[inputrow][inputcol] = 2;
        }
        for (int i = 0; i <= 2; i++)
        {
            if (board[i][0] == 1 && board[i][1] == 1 && board[i][2] == 1)
            {
                printf("Player 1 wins.");
                run = 0;
            }
            else if (board[i][0] == 2 && board[i][1] == 2 && board[i][2] == 2)
            {
                printf("player 2 wins.");
                run = 0;
            }
            else if (board[0][i] == 1 && board[1][i] == 1 && board[2][i] == 1)
            {
                printf("Player 1 wins.");
                run = 0;
            }
            else if (board[0][i] == 2 && board[1][i] == 2 && board[2][i] == 2)
            {
                printf("Player 2 wins.");
                run = 0;
            }
        }
        if (board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1)
        {
            printf("Player 1 wins.");
            run = 0;
        }
        else if (board[0][0] == 2 && board[1][1] == 2 && board[2][2] == 2)
        {
            printf("Player 2 wins.");
            run = 0;
        }
        else if (board [2][0] == 1 && board[1][1] == 1 && board[0][2] == 1)
        {
            printf("Player 1 wins.");
            run = 0;
        }
        else if (board [2][0] == 2 && board[1][1] == 2 && board[0][2] == 2)
        {
            printf("Player 2 wins.");
            run = 0;
        }
        if (turn == 1)
        {
            turn = 2;
        }
        else
        {
            turn = 1;
        }
    }
    return 0;
}