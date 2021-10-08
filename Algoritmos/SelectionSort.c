#include <stdio.h>

int main(void) {
  
  int n;

  scanf("%d", &n);

  int v[1001];

  for(int i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }


   for (int i = 0; i < (n-1); i++) {
     int min = i;
     for (int j = (i+1); j < n; j++) {
       if(v[j] < v[min]) {
         min = j;
       }
     }
     if (i != min) {
       int aux = v[i];
       v[i] = v[min];
       v[min] = aux;
     }
  }

  for(int i = 0; i < n; i++){
    printf("%d ", v[i]);
  }

  return 0;

}
