#include <stdio.h>
#include <limits.h>

int main (int argc, char *argv[]){
    int input;
    int array[10] = {0};
    printf("Please input 10 numbers!\n");
    /*while (scanf("%d", &input) != EOF){
        printf("%d\n", input);
    }*/

    int counter = 0;
    while (counter < 10){
        scanf("%d", &input);
        array[counter] = input;
        counter++;
    }

    int length = counter;
    int sortDone = 0;
    int lastNo = array[0];
    int index = 0;

    while (sortDone < length){
        length = length - sortDone;
        index = 0;

        while (index < length - 1){
            if (array[index] > array[index + 1]){
                int temp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = temp;
            }
            index++;
        }
        sortDone++;
    }

    index = 0;

    while (index < counter){
        printf("%d ", array[index]);
        index++;
    }
    printf("\n");

}