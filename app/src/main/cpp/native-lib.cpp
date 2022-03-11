#include <jni.h>
#include <string>

extern "C" {
#include "hook.h"
#include "include/hookzz.h"
}
void* oldfunc;
int myputs(char* str){
    printf("hook :%s\n",str);
    int i=1;
    for(;*(str+i)!=0;i++){}
    return i;
}


extern "C" JNIEXPORT jstring JNICALL
Java_com_example_hookzztest_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";


     hook();

    return env->NewStringUTF(hello.c_str());
}


