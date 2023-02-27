

#include <stdio.h>


void
find_num (char a[])
{
  int l = 6;
  int ne = 1;
  int sum = 0;
  int k = 0;
  for (int i = 0; i < l; i++){
      if (a[i] > 60){
	  a[i] = 0;
	}else{
	  for (int j = 0; j < l; j++){
	      if (a[j] == 0){
		  a[j] = a[i];
		  a[i] = 0;
		  break;
		        }
	        }
	    }
    }for (int i = 0; i < l; i++){
      if (a[0] == 45){
	  ne = -1;
	}if (a[i] > 48 && a[i] < 60){
	  sum = k * 10 + a[i] - 48;
	  k = sum;
	    }
    }
  sum = sum * ne;
  printf ("%d\n", sum);
}

int
main ()
{
  char a[] = "-99abc";
  char b[] = "99acbc";
  char c[] = "ab-99c";

  find_num (a);
  find_num (b);
  find_num (c);

  return 0;
}
