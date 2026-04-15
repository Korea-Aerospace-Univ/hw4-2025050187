#include <stdio.h>

int main(void)
{
    // 우선 정답과, 숫자입력과, 몇번을 시행했는지를 세기 위해 각각 변수를 설정한다.
    int answer;
    int a;
    int count = 0;

    // 정답을 입력받는다.
    scanf("%d", &answer);

    // do-while문을 활용해서 정답일 것 같은 답을 입력시키고, 다중 조건문(if-else if-else)를 활용해서 a가 정답보다 크냐 작냐. 같냐에 맞춰서 조건을 실행할 수 있도록 시킨다.
    do {
        scanf("%d", &a);
        count++;

        if (a > answer) {
            printf("%d>?\n", a);
        }
        else if (a < answer) {
            printf("%d<?\n", a);
        }
        else {
            printf("%d==?\n", a);
        }

    } while (a != answer);
    // 그리고 만약 젇답과 입력이 맞다면, 몇번 조건을 시행했는지 출력한다.
    printf("%d", count);

    return 0;
}
