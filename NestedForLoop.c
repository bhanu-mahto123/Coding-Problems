#include <stdio.h>
#define MAX 8
int board[MAX][MAX];
void printAllComb(int Level,int N)
{
    if(Level >= N){
        for(int i=0;i<N;i++)
        {
              for(int j=0;j<N;j++){
                  printf("%d ",board[i][j]);
              }
              printf("\n");
        }
        printf("\n#Printed Conf for %d #\n",Level);
        return;
    }
    for(int i=0;i<N;i++){
        board[i][Level] = 1;
        printAllComb(Level+1,N);
        board[i][Level] = 0;
    }
}

int main()
{
    int N = 4;
    for(int i=0;i<N;i++)
        {
              for(int j=0;j<N;j++){
                  board[i][j] = 0;
              }
        }
        printAllComb(0,N);
    printf("Hello World");

    return 0;
}
