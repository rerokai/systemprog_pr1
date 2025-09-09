//Напишите программу, которая выводит на экран числа от 1 до 10.
/* #include <stdio.h>
int main() {
    int i = 1;
    while (i < 11) {
        printf("%d \n", i);
        i++;
    }
}*/

//Напишите программу, которая выводит на экран таблицу умножения на 5
/* #include <stdio.h>
int main(){
    int i = 1;
    while (i < 11) {
        printf("%d", i);
        printf(" x 5 = ");
        printf("%d \n", i*5);
        i++;
    }
}*/

//Напишите программу, которая выводит на экран сумму чисел от 1 до 100
/* #include <stdio.h>
int main(){
    int i = 1;
    int x=0;
    while (i < 101) {
        printf("%d", x);
        printf(" + ");
        printf("%d", i);
        printf(" = ");
        printf("%d", x=x+i);
        printf("\n");
        i++; //как-то маловато printfов, надо больше
    }
} */ 

// Напишите программу, которая выводит на экран все числа от 1 до 100, кратные 3 или 5.
/* #include <stdio.h>
int main(){
    int i = 1;
    int x=0;
    while (i < 101) {
        x=x+i;
        if (x%3==0 || x%5==0){
            printf("%d", x);
        }
        printf("\n");
        i++; 
    }
} */

// Напишите программу, которая запрашивает у пользователя число и выводит на экран все его делители
/* #include <stdio.h>
int main(){
    int a, b, i;
    i=1;
    scanf("Введите число: %d", &a); 
    while (i <= a){ 
        if(a%i==0){ 
            printf("%d", i);
            printf("\n");
        }
        i++;
    }
} */

// Напишите программу, которая создает массив из 10 чисел и выводит на экран все его элементы.
/* #include <stdio.h>
int main(){

    int mass[10]= {1, 2, 3, 4, 5, 6, 7, 7, 9, 34};
    for(int i=0;i<10;i++){
        printf("%d\n", mass[i]);
    } 
}*/

// Напишите программу, которая заполняет массив из 10 чисел случайными значениями и выводит на экран все его элементы.
/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    srand(time(NULL));
    int mass[10];
    for(int i=0;i<10;i++){
        mass[i]=rand()%100;
    } 
    for(int i=0;i<10;i++){
        printf("%d\n", mass[i]);
    } 
}*/

// Напишите программу, которая заполняет массив из 10 чисел, принимаемых от пользователя, и выводит на экран все его элементы
/* #include <stdio.h>
int main(){

    int mass[10];

    for(int i=0; i<10; i++){
        int a;
        scanf("%d",&a);
        mass[i]=a;
    }
    printf("Все элементы массива: ");
    for(int i=0;i<10;i++){
        printf("%d    ", mass[i]);
    } 
    printf("\n");
} */

//Напишите программу, которая создает массив из 10 чисел и выводит на экран его сумму.
/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    srand(time(NULL));
    int mass[10];
    for(int i=0;i<10;i++){
        mass[i]=rand()%100;
    } 
    int sum;
    for(int i=0;i<10;i++){
        printf("%d  ", mass[i]);
        sum= sum+ mass[i];
    } 
    printf("\n");
    printf("%d\n", sum);
} */

// Напишите программу, которая создает два массива из 10 чисел, затем складывает их и выводит результат на экран
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    srand(time(NULL));
    int mass[10];
    int mass2[10];
    
    for(int i=0;i<10;i++){
        mass[i]=rand()%100;
    } 
    for(int i=0;i<10;i++){
        mass2[i]=rand()%100;
    } 
    
    int sum1, sum2, sumall;
    
    for(int i=0;i<10;i++){
        printf("%d  ", mass[i]);
        sum1= sum1+ mass[i];
    } 
    printf("\n");
    for(int i=0;i<10;i++){
        printf("%d  ", mass2[i]);
        sum2= sum2+ mass2[i];
    } 
    sumall= sum1+sum2;
    printf("\n");
    printf("%d\n", sumall);
}*/
