#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int solution(const char* myString, const char* pat) {
    int len_s = strlen(myString), len_p = strlen(pat);

    for (int i = 0; i < len_s; i++) { //myString 길이만큼 반복
        bool f = true; // flag 변수 true로 설정
        for (int j = 0; j < len_p; j++) { //pat 길이만큼 반복
            //두 문자 소문자로 변환 후 같은지 비교
            if (tolower(myString[i + j]) != tolower(pat[j])) { // 같다면 옆으로 이동하며 같은지 비교
                f = false; //다르다면 false로 바꿈
                break; // 두번째 반복문 밖으로 나감(첫 번째 반복문으로)
            }
        }
        if (f == true) 
            return 1;
    }
    return 0; 
}