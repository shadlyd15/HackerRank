#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

/*
 * Complete the countApplesAndOranges function below.
 */
void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
    int a_in = 0;
    int o_in = 0;
    
    for(int i = 0; i < apples_count; i++){
        if((apples[i] >= (s - a)) && (apples[i]) <= (t - a)){
            a_in++;
        }
    }
    
    for(int i = 0; i < oranges_count; i++){
        if((oranges[i] <= (t - b)) && (oranges[i] >= (s - b))){
            o_in++;
        }
    }
    printf("%d\n%d", a_in, o_in);
}

int main()
{
    char** st = split_string(readline());

    char* s_endptr;
    char* s_str = st[0];
    int s = strtol(s_str, &s_endptr, 10);

    if (s_endptr == s_str || *s_endptr != '\0') { exit(EXIT_FAILURE); }

    char* t_endptr;
    char* t_str = st[1];
    int t = strtol(t_str, &t_endptr, 10);

    if (t_endptr == t_str || *t_endptr != '\0') { exit(EXIT_FAILURE); }

    char** ab = split_string(readline());

    char* a_endptr;
    char* a_str = ab[0];
    int a = strtol(a_str, &a_endptr, 10);

    if (a_endptr == a_str || *a_endptr != '\0') { exit(EXIT_FAILURE); }

    char* b_endptr;
    char* b_str = ab[1];
    int b = strtol(b_str, &b_endptr, 10);

    if (b_endptr == b_str || *b_endptr != '\0') { exit(EXIT_FAILURE); }

    char** mn = split_string(readline());

    char* m_endptr;
    char* m_str = mn[0];
    int m = strtol(m_str, &m_endptr, 10);

    if (m_endptr == m_str || *m_endptr != '\0') { exit(EXIT_FAILURE); }

    char* n_endptr;
    char* n_str = mn[1];
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char** apple_temp = split_string(readline());

    int apple[m];

    for (int apple_itr = 0; apple_itr < m; apple_itr++) {
        char* apple_item_endptr;
        char* apple_item_str = apple_temp[apple_itr];
        int apple_item = strtol(apple_item_str, &apple_item_endptr, 10);

        if (apple_item_endptr == apple_item_str || *apple_item_endptr != '\0') { exit(EXIT_FAILURE); }

        apple[apple_itr] = apple_item;
    }

    char** orange_temp = split_string(readline());

    int orange[n];

    for (int orange_itr = 0; orange_itr < n; orange_itr++) {
        char* orange_item_endptr;
        char* orange_item_str = orange_temp[orange_itr];
        int orange_item = strtol(orange_item_str, &orange_item_endptr, 10);

        if (orange_item_endptr == orange_item_str || *orange_item_endptr != '\0') { exit(EXIT_FAILURE); }

        orange[orange_itr] = orange_item;
    }

    countApplesAndOranges(s, t, a, b, m, apple, n, orange);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

