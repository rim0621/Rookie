#include<stdio.h>

char*me; void main(void) {printf(me); putchar(13); putchar(34); printf(me); putchar(34); putchar(';');}
char*me = "char* me; void main(void) {printf(me); putchar(13); putchar(34); printf(me); putchar(34); putchar(';');} char*me=";