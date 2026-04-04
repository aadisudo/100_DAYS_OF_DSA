#include <stdio.h>

int main() {
    int n;
    int a[100];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        }
    
    int slow = 0;
    for (int fast = 1; fast < n; fast++) {
        if (a[fast] != a[slow]) {
            slow++;
            a[slow] = a[fast];
        }
    }
    
    for (int i = 0; i <= slow; i++) {
        printf("%d", a[i]);
        if (i < slow) printf(" ");
    }
    printf("\n");
    
    return 0;
}