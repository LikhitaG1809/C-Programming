
#include <stdio.h>
int harshad(int n) {
    int sum = 0;
    int num = n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    if (num % sum == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    harshad(num);
    return 0;
}
