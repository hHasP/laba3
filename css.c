#include <stdio.h>

void recursive(int, int, int, int, int*);

int main() {
int arr[40];
int n = 0, status = 0;

printf("Enter num:");
while(status != 1) {
status = scanf_s("%d", &n);
rewind(stdin);
}
recursive(1,1,0, n, arr);
return 0;
}

void recursive(int i, int pos, int sum, int n, int* a) {
int j, k;
for (j = i; j <= n - 1; j++) {
a[pos] = j;
if (sum + j == n) {
for (k = 1; k <= pos; k++) {
if (k > 1) {
printf("+%d", a[k]);
}
else {
printf("%d", a[k]);
}
}
printf("\n");
}
else {
if (sum + j < n) {
recursive(j, pos + 1, sum + j, n, a);
}
}
}
}