#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    int receipt_id;
    int receipt_price;
    char receipt_time[32];
    int lotto_set[5][7];
} lotto_record_t;



int main()
{
    int n =7;
    int l =0;
    printf("買幾張彩票(1-5):");
    scanf("%d",&l);
    int cout[n];
    char read[10];
    FILE* fp;
    char filename[10000];
    int i =00001;
    time_t curtime;
    FILE* lfp;
    int b =0;
    lotto_record_t p[200];
    
        if ( l ==0){
        lfp = fopen("record.bin", "r");
        fseek(lfp,0,SEEK_SET);
        if ((lfp = fopen("record.bin", "r")) == NULL){
        printf("未賣出一張彩券");
        }
    int a,b,c,d,e;
    printf("請輸入中獎號碼");
    scanf("%d%d%d",&a,&b,&c);
    for (d =0;d <5; d++){
        for ( e =0; e<7; e++){
            if (a ||b ||c ==p->lotto_set[d][e]){
                while( fread( &p, sizeof(read), 1, lfp)){
                    printf("彩券 No.%d\n",p->receipt_id);
                    printf("售出時間：%s\n",p->receipt_time);
                    printf("彩票號碼");
                    for (d =0;d <5; d++){
                        for ( e =0; e<7; e++){
                          printf("%d ",p->lotto_set[d][e]);  
                        };
                    };
                    printf("\n");
                };
            };
        };
    };
    };
    if ( l<6 &&l>=1){
    sprintf(filename,"lotto[00000%d].txt", i);
    
    while((fopen(filename, "r")) != NULL){
        i++;
        sprintf(filename,"lotto[00000%d].txt", i);
    }
    fp = fopen(filename, "w+");
    if ((fread( read, sizeof(read), 1, fp)) ==0){        
    lfp = fopen("record.bin", "ab");
    time(&curtime);
    srand((unsigned) time(NULL));
    fprintf(fp, "%s", ctime(&curtime));
    fprintf(fp, "No.%d\n", i);
    
        p->receipt_id = i;
        p->receipt_price = l*100;
        strcpy( p->receipt_time, ctime(&curtime));
        
    for (int b =1; b <=l; b++){
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
        fprintf(fp, "[%d]: ", b);
        for(int a =0; a <n; a++){
            fprintf(fp, "%d ", cout[a]);
            
            p->lotto_set[b-1][a] = cout[a];
            
        }
        fprintf(fp, "\n");
        
    };
    for ( int g =0; g<100; g++){
        fwrite(p+g,sizeof(lotto_record_t), 1, lfp);
    }
    
    
    
        }else{
            printf("error");
            }
    }
    fclose (lfp);
    fclose (fp);
    
    
   
        
    
  
    
    
    
    

    fclose (fp);
    return 0;
}
