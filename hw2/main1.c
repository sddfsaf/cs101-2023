#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int n =7;
    int l =2;
    int cout[n]; 
    FILE* fp;
    fp = fopen("lotto.txt", "w");
    time_t curtime;
    time(&curtime);
    srand((unsigned) time(NULL));
    fprintf(fp, "%s", ctime(&curtime));
    for (int i =1; i <=l; i++){
        for ( int k =0;k <n; k++){
            if ( k ==n - 1){
            cout[k] = rand() %10 + 1;
            for ( int j =0;j <k; j++){
                    if (cout[k] == cout[j]){
                        k--;
                        break;
                    }
                }
            }else{cout[k] = rand() %69 + 1;
                for ( int j =0;j <k; j++){
                    if (cout[k] == cout[j]){
                        k--;
                        break;
                    }
                }
            }    
        }
        fprintf(fp, "[%d]: ", i);
        for(int a =0; a <n; a++){
            fprintf(fp, "%d ", cout[a]);
        }
        fprintf(fp, "\n");
    }

    return 0;
}
