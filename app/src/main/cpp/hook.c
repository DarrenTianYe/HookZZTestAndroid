
#include "include/hookzz.h"
#include <stdio.h>

void* oldfunc;
int myputs(char* str){
    printf("hook :%s\n",str);
    int i=1;
    for(;*(str+i)!=0;i++){}
    return i;
}

void hook(){

    // ZzHookReplace((zpointer*)puts, (zpointer*)myputs, &oldfunc);
    //ZzEnableDebugMode();
}


