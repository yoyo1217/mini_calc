#include <stdio.h>
#include <string.h>

int main(void) {
    char buf[80];

    fgets(buf, sizeof(buf), stdin);

    // 末尾の改行文字を取り除く
    char* p = strchr(buf, '\n');
    if (p != NULL) {
        *p = '\0';
    }

    puts(buf);

    return 0;
}