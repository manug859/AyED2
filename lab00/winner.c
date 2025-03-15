char winner = '-';
    for(int i=0; i<3; i++)
    {
    int contadorX1 = 0;
    int contadorO1 = 0;
    int contadorX2 = 0;
    int contadorO2 = 0;
    int contadorX3 = 0;
    int contadorO3 = 0;
        for(int j=0; j<3; j++)
        {
            if(board[i][j] == 'X')
            {
                contadorX1++;
                if (contadorX1 == 3)
                {
                    winner = 'X';
                }
            }

            else if (board[i][j] == 'O')
            {
            contadorO1++;
                if(contadorO1 == 3)
                {
                    winner = 'O';
                }
            }
            
            if(board[j][i] == 'X')
            {
            contadorX2++;
                if (contadorX2 == 3) 
                {
                    winner = 'X';
                }
            }

            else if (board[j][i] == 'O')
            {
            contadorO2++;
                if(contadorO2 == 3) 
                {
                    winner = 'O';
                }
            }

            if(board[j][j] == 'X') 
            {
            contadorX3++;
                if (contadorX3 == 3) 
                {
                    winner = 'X';
                }

            if(board[j][j] == 'O') 
            {
            contadorO3++;
                if (contadorO3 == 3) 
                {
                    winner = 'O';
                }
            }
        }


    }