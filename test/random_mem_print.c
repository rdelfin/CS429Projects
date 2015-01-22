#include <stdio.h>
#include <stdlib.h>

#define KSIZE 1024
#define MSIZE 528
char kbuf[KSIZE];

int main() {
    char mybuf[MSIZE];
    copy_from_kernel(mybuf, -MSIZE);
    printf("%s\n", mybuf);
}

int copy_from_kernel(void *user_dest, int maxlen) {
    int len = KSIZE < maxlen ? KSIZE : maxlen;
    memcpy(user_dest, kbuf, len);
    return len;
}
