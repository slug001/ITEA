# include <stdio.h>

int main (){
    int row,column;
    while(scanf("%d %d",&row,&column)!=EOF){
        int Array[row][column];
        for(int i=0;i<row;i++){
            for (int j=0;j<column;j++){
                scanf("%d",&Array[i][j]);
            }
        }
        for (int i=0;i<column;i++){
            for(int j=0;j<row;j++){
                printf("%d",Array[j][i]);
                if(j!=row-1){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return ;
}
