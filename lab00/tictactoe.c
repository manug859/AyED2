/*
gcc -Wall -Werror -Wextra -pedantic -std=c99 name.c -o name
*/

#include <stdlib.h>  /* exit() y EXIT_FAILURE */
#include <stdio.h>   /* printf(), scanf()     */
#include <stdbool.h> /* Tipo bool             */
#include <assert.h>  /* assert() */

#define CELL_MAX (3 * 3 - 1)

void print_sep(int length) {
    printf("\t ");
    for (int i=0; i < length;i++) printf("................");
    printf("\n");

}

void print_board(char board[3][3])
{
    int cell = 0;

    print_sep(3);
    for (int row = 0; row < 3; ++row) {
        for (int column = 0; column < 3; ++column) {
            printf("\t | %d: %c ", cell, board[row][column]);
            ++cell;
        }
        printf("\t | \n");
        print_sep(3);
    }
}

char get_winner(char board[3][3])
{
    char winner = '-';
    char edge_l = board[0][0]; char edge_r = board[0][3-1];
    bool diagonal_l = true; bool diagonal_r = true;
    for(int i=0; i<3; i++) {
        bool row_winner = true; bool col_winner = true;
            for(int j = 0; j<3; j++) {
                if(board[i][j] != board[i][0] || board[i][0] == '-') {
                    row_winner = false;
                }
                if(board[j][i] != board[0][i] || board[0][i] == '-') {
                    col_winner = false;
                }
                if(board[i][i] != edge_l) {
                    diagonal_l = false;
                }
                if(board[i][3-1-i] != edge_r) {
                    diagonal_r = false;
                }
            }
            if(row_winner) {
                winner = board[i][0];
            }
            if(col_winner) {
                winner = board[0][i];
            }
    }
    if(diagonal_l) 
    {
        winner = edge_l;
    } 
    if(diagonal_r)
    {
        winner = edge_r;
    }
    return winner;
}

bool has_free_cell(char board[3][3])
{
    bool free_cell=false;
    
    for(int i=0; i<3 && !free_cell; i++) 
    {
        for(int j=0; j<3 && !free_cell; j++) 
        {
            if(board[i][j] == '-') 
            {
                free_cell = true;
            }
        }
    }
    return free_cell;
}

int main(void)
{
    printf("TicTacToe [InCoMpLeTo :'(]\n");

    char board[3][3] = {
        { '-', '-', '-' },
        { '-', '-', '-' },
        { '-', '-', '-' }
    };

    char turn = 'X';
    char winner = '-';
    int cell = 0;
    while (winner == '-' && has_free_cell(board)) {
        print_board(board);
        printf("\nTurno %c - Elija posición (número del 0 al %d): ", turn,
               CELL_MAX);
        int scanf_result = scanf("%d", &cell);
        if (scanf_result <= 0) {
            printf("Error al leer un número desde teclado\n");
            exit(EXIT_FAILURE);
        }
        if (cell >= 0 && cell <= CELL_MAX) {
            int row = cell / 3;
            int colum = cell % 3;
            if (board[row][colum] == '-') {
                board[row][colum] = turn;
                turn = turn == 'X' ? 'O' : 'X';
                winner = get_winner(board);
            } else {
                printf("\nCelda ocupada!\n");
            }
        } else {
            printf("\nCelda inválida!\n");
        }
    }
    print_board(board);
    if (winner == '-') {
        printf("Empate!\n");
    } else {
        printf("Ganó %c\n", winner);
    }
    return 0;
}