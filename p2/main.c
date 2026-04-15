#include <stdio.h>

int main() {
    int n;
    char str[1001];

    scanf("%d", &n);
    scanf("%s", str);

    int maxLower = 0, maxDigit = 0;
    int curLower = 0, curDigit = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            curLower++;
            curDigit = 0;
        } else if (str[i] >= '0' && str[i] <= '9') {
            curDigit++;
            curLower = 0;
        } else {
            curLower = 0;   /* 대문자 등 → 두 카운터 초기화 */
            curDigit = 0;
        }

        if (curLower > maxLower) maxLower = curLower;
        if (curDigit > maxDigit) maxDigit = curDigit;
    }

    printf("%d\n%d\n", maxLower, maxDigit);

    return 0;
}
