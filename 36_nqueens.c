/*8-queens
-printboard
-checkposition
*/

#include <stdio.h>
#define N 8

void printboard(int board[N][N]);
int checkposition(int board[N][N], int r, int c);
void main()
{   
    int board[N][N];

    int r, c;

    for (r = 0; r < N; ++r) {
        for (c = 0;  c < N;  ++c) {
            board[r][c] = 0;
        }
    }
    r = 0;
    while(r < N) {
        int t = r;
        int queen_placed = 0;
        c = 0;
        next_column:
        while (c < N) {
            if (board[r][c] == 0 && checkposition(board, r, c)) {
                board[r][c] = 1;
                queen_placed = 1;
                break;
            }
            ++c;
        }
        if (r < N && !queen_placed) {
            for (c = 0; c < N; ++c) {
                if (board[r-1][c] == 1) {
                board[r-1][c] = 0;
                ++c;
                --r;
                break;
                }
            }goto next_column;
        }

        if (r == N-1) {
            printboard(board);
            break;
        }
        ++r;

    }
}


void printboard(int board[N][N])
{   
    
    int r, c;

    for (r = 0; r < N; ++r) {
        for (c = 0;  c < N;  ++c) {  
        printf("%5d ", board[r][c]);
        }
        printf("\n");
    }
}

int checkposition(int board[N][N], int r, int c)
{
    int upright, columleft, dialeftr, diarightr, diarightclm;

    for (upright = r; upright >= 0; --upright) {
        if ( board[upright][c] == 1) {
            return 0;
        }
    }

    for (columleft = c; columleft >= 0; --columleft) {
        if ( board[r][columleft] == 1) {
            return 0;
        }
    }

    for (dialeftr = r, columleft = c; dialeftr >=0 && columleft >= 0; --dialeftr,  --columleft) {
        if ( board[dialeftr][columleft] == 1) {
            return 0;
        
        }
    }

    for (diarightr = r, diarightclm = c; diarightr >= 0 && diarightclm <= 7; --diarightr, ++diarightclm) {
        if ( board[diarightr][diarightclm] == 1) {
            return 0;
        }
    }


    return 1;
}
