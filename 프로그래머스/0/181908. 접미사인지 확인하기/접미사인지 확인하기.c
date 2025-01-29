#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string, const char* is_suffix) {
    int answer = 0, str_len = strlen(my_string), suffix_len = strlen(is_suffix);
    
    // my_string 이 주소값을 가리키고 있으므로 + n을 해주면 n번째 문자열 값을 가리키게 된다. 
    if (strcmp(my_string + (str_len - suffix_len), is_suffix) == 0)
            return 1;
    return 0;
}