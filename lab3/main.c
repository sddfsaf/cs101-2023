#include <stdio.h>

typedef struct person{
    int id;
    char first_name[32];
    char last_name[32];
} person_t;

int main()
{
   FILE* rfp = fopen("person.bin", "w+");
   person_t p[5] = { {1, "IU", "Iee"},
                     {2, "IUU", "Iee"},
                     {3, "IUUU", "Iee"},
                     {4, "IUUUU", "Iee"},
                     {5, "IUUUUU", "Iee"},
   };
   for (int i =0;i<5;i++){
       fwrite(p+i, sizeof(person_t),1,rfp);
   }
   fseek(rfp,0,SEEK_SET);
   person_t tmp[1];
   int i = 0;
   while(fread(tmp, sizeof(person_t), 1, rfp)){
       printf("[%d] %d: %s %s\n", i, tmp[0].id, tmp[0].first_name, tmp[0].last_name);
       i++;
   }

    return 0;
}
