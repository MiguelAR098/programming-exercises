#include <stdio.h>
#include <windows.h>

int main()
{
  SetConsoleOutputCP(65001);
  int n, n2, i, fat;

  printf("Digite um número: ");
  scanf("%d", &n);

  printf("\nFatorial do número %d", n);
  for (i = n; i <= 1; i++) {
     fat = n * (n - 1);
     n2 = fat;
     n2 = fat * (fat - 2);
  }

  printf("\nO resultado é: %d", fat);

  return 0;
}
