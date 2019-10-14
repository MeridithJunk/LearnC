#include <stdio.h>

  /* Declare methods before main or it results in a warning. */
int LearningVariables();
void LearningArrays();


int main (void) {
    LearningArrays();
    return 0;
}

void LearningArrays(){
    int numbers[7];

/* populate the array */
numbers[0] = 10;
numbers[1] = 20;
numbers[2] = 30;
numbers[3] = 40;
numbers[4] = 50;
numbers[5] = 60;
numbers[6] = 70;

/* Print each number in the array */
   for(int a = 0; a < (sizeof(numbers) / sizeof(int)); a = a + 1 ){
    printf("The %d th number in the array is %d \n", a, numbers[a]);
   }
}

int LearningVariables(){
  /* Defining variables examples: */
    int a = 0,b = 1,c = 2,d = 3, e = 4;
    a = b - c + d * e;
    printf("%d", a);

    /* make sure to list out a return value, or a warning will appear. */
    return a;
}