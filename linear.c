#include <stdio.h>

int main() {
  int data[100],cari,a, n;

  printf("Masukkan banyaknya jumlah data : ");
  scanf("%d", &n);

  printf("Masukkan setiap data integer sebanyak %d :\n", n);

  for (a = 0; a < n; a++){
    scanf("%d", &data[a]);
  }

  printf("Masukkan data yang ingin dicari: ");
  scanf("%d", &cari);

  for (a = 0; a < n; a++) {
    if (data[a] == cari) {
      printf("%d berada di baris ke %d.\n", cari, a+1);
      break;
    }
  }
  if (a == n){
    printf("%d tidak ada.\n", cari);
  }

  return 0;
}
