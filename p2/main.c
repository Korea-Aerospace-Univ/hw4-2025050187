#include <stdio.h>

int main() {
    //문자열의 길이와, 입력받을 문자열에 대한 변수를 설정한다.
    int n;                 
    char str[1001];        

    // 문자열 길이와 문자열을 입력받는다.
    scanf("%d", &n);       
    scanf("%s", str);      

    // 연속된 소문자와 숫자의 최대 길이에 대한 변수를 설정하고, 현속 연속중인 소문자와 숫자의 개수를 세기 위한 변수를 설정한다.
    int maxLower = 0, maxDigit = 0;   
    int curLower = 0, curDigit = 0;   

    // 문자열의 각 문자를 처음부터 끝까지 검사하기 위해 for 문을 작성한다.
    for (int i = 0; i < n; i++) {

        // 만약 현재 문자가 영어 소문자이라면, 소문자 연속 개수를 증가시키고, 만약 숫자 연속이 끊기면 0으로 초기화한다. 
            if (str[i] >= 'a' && str[i] <= 'z') {
            curLower++;      
            curDigit = 0;      
        }
        // 만약 문자가 숫자일 경우 숫자의 연속 갯수를 증가시키고, 소문자 연속은 끊기면 0으로 초기화한다.
        else if (str[i] >= '0' && str[i] <= '9') {
            curDigit++;        
            curLower = 0;      
        }
        // 그 외 문자가 나온다면, 소문자  연속과 숫자 연속이 끊기기에 0으로 설정한다.
        else {
            curLower = 0;      // 소문자 연속 끊김
            curDigit = 0;      // 숫자 연속 끊김
        }

        // 지금까지 나온 소문자 연속 최대 개수를 설정한다.
        if (curLower > maxLower)
            maxLower = curLower;

        // 지금까지 나온 숫자 연속 최대 개수를 설정한다.
        if (curDigit > maxDigit)
            maxDigit = curDigit;
    }

    printf("%d\n%d\n", maxLower, maxDigit);

    return 0;   // 프로그램 정상 종료
}
