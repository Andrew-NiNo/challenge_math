// Задача Ss-06 Сумма
// Для заданной строки символов вычислить сумму входящих в неё чисел, причем знак слагаемого должен быть противоположным.
// Например:
// Для строки "asdd1vnb24vnf63vbn,-5h-2kk"
// Сумма S= -81.

#include <stdio.h>
#include <ctype.h>

#define MAX 1000

int main(){

    char* array[MAX] = {0};
    char* ptr = array;
    long digit[MAX] = {0};
    int i = 0, j = 0;
    long summ = 0;

    printf("\n      Enter the string \n");

    fgets(array,MAX,stdin);

    while(*ptr){

        long k = strtol(ptr,&ptr,10);

           if (k != 0){

            digit[j++] = k;
            }
        ptr++;
    }

    for(i = 0; i < j; i++)

     summ += ~digit[i]+1;

    printf("\n    Task summary:  %d \n", summ);

return 0 ;
}
