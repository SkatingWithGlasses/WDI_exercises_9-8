#include <stdio.h>
#include <stdlib.h>


void arrays(int n, int m){
    int arr[n][m];

    printf("Tablica ze wszystki wartosciami: \n");
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i*j%2==0){
                    arr[i][j]=1;
                printf("| %d|",arr[i][j]);
                }

           else {
                arr[i][j]=-1;
                printf("|%d|",arr[i][j]);
                }
            }
            printf("\n");
    }


    printf("\n\n\n================================\n\n\n");

    printf("Tablica z ujemnymi: \n");
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i*j)%2==0) printf("|  |",arr[i][j]);

           else {
                arr[i][j]=-1;
                    printf("|%d|",arr[i][j]);
                }
            }
            printf("\n");
    }
    printf("\n\n\n================================\n\n\n");

    printf("Tablica z dodatniki: \n");

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                if(i*j%2==0){

                arr[i][j]=1;
                    printf("| %d|",arr[i][j]);
                }

           else printf("|  |",arr[i][j]);

            }
            printf("\n");
    }

}

int main()
{
int n,m;
    printf("Podaj N: "); scanf_s("%d",&n);
    printf("\nPodaj M: "); scanf_s("%d",&m);

arrays(n,m);

    return 0;
}
