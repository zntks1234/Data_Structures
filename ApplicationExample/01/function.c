#include <stdio.h>
#include "list.h"

int Getlength(char swings[]){
    int length = 0;
	while(swings[length] != '\0'){
		length++;
	}
	return length;
}

void Deletefirst(char swings[], int length){
    for(int i=0;i<length;i++){
        swings[i] = swings[i+1];
    }
}

void point(char swings[], int n, int *l, int *r){
    if(swings[0] == 'L'){
        if(*r > 1)
            *r = *r - 1;
    }

    else if(swings[0] == 'R'){
        if(*r < n)
            *r = *r + 1;
    }

    else if(swings[0] == 'U'){
        if(*l > 1)
            *l = *l - 1;
    }

    else if(swings[0] == 'D'){
        if(*l < n)
            *l = *l + 1;
    }
}

void ex(char swings[], int n, int l, int r){
    int length = Getlength(swings);
    if(length != 0){
        point(swings, n, &l ,&r);
        Deletefirst(swings,length);
        ex(swings, n, l ,r);
    }else {
        printf("(%d, %d)",l,r);
    }
}

