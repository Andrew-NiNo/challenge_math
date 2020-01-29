// Задача S-06 Сумма
// Для заданной строки символов вычислить сумму входящих в неё цифр,
// причем знак очередного слагаемого должен быть противоположным знаку предыдущего слагаемого.
// Например:
// Для строки "asdd1vnb24vnf63vbn,-5h-2kk"
// Сумма S=1-2+4-6+3-5+2= -3.

#include <stdio.h>

#define MAX 100

int main(){

    char c;
    int array[MAX] = {0};
    int j = 0;
    int summ = 0;

    printf("\n      Enter the string \n");

    while( (c = getchar()) != '\n'){

        if (c >= '0' && c <= '9'){

           array[j++] = (c - '0');
        }
    }

    for (int i = 0; i < j; ){

        if (i%2 != 0){

            summ += ~array[i++]+1;
        }

        else summ += array[i++];
    }

    printf("\n   Task summary:  %d \n", summ);

return 0 ;
}
