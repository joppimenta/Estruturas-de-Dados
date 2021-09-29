#include <stdio.h>

int main(void) {
  
  int n;
  int a[1001];

  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  for(int j = 1; j < n; j++){
    int chave = a[j];
    int i = j-1;

    while(i >=0 && a[i] > chave){
      a[i+1] = a[i];
      i--;
    }
    a[i+1] = chave;
  }

  for(int i = 0; i <n; i++){
    printf("%d ", a[i]);
  }

}
