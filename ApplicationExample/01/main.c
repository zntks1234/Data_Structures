#include <stdio.h>
#include "list.h"

int main() {
    int n;
    int l = 1, r = 1;
    char swings[51] = {0};
    scanf("%d",&n);
    scanf("%50s",&swings);
    ex(swings, n, l ,r);
   
   
    return 0;
}
