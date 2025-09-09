//Напишите функцию, которая принимает от пользователя число и выводит на экран его факториал
/* #include <stdio.h>
int factor(int a){
    int res=1;
    while (a>1){
        res=res*a;
        a--;
    }
    return res;
}

int main(){
    int num; //num=4 ;
    scanf("%d", &num);
    printf("%d", factor(num));
    printf("\n");
}*/

//Напишите функцию, которая принимает от пользователя число и проверяет, является ли оно простым.

/*#include <stdio.h>
int prost(int a){
    if(a==0 || a==1){return 0;}
    int d=0;
    for(int i=1; i<=a; i++){ 
        if(a%i==0){ 
            d++;
        }
    }
    if(d>2) {
        return 0;
    }
    else {
        return 1;
    }
}
int main(){
    int num;
    scanf("%d", &num);
    int x; x=prost(num);   
    if(x==0){printf(" Не простое");}
    else if(x==1){printf("Простое");}
}*/

//Напишите функцию, которая принимает от пользователя число и выводит на экран все его делители.
//ПРОСТО УЖАСНАЯЯЯЯЯ ЗАДАЧА!!

/*#include <stdio.h>

void dels(int n) {
for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main(){

    int num;
    scanf("%d", &num);
    dels(num);
}*/

//Напишите функцию, которая принимает от пользователя два числа и выводит на экран все числа между ними.
/*#include <stdio.h>
void mezd(int a, int b){
    if (a>b){
        while(a>=b){
            
            printf("%d  ", a);
            a--;
        } 
    }
    else if (b>a){
        while(b>=a){
            
            printf("%d  ", b);
            b--;
        } 
    }
    else {printf("Числа равны");} 
}

int main(){

    int num1, num2;
    scanf("%d%d", &num1, &num2);
    mezd(num1, num2);
}*/

// Являются ли они дружественными (сумма делителей первого числа равна второму числу, а сумма делителей второго числа равна первому числу).
/*#include <stdio.h>
int druz(int a, int b){
    int sum1=0; 
    int sum2=0;
    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            sum1=sum1+i;
        }
    }

    for (int i = 1; i < b; i++) {
        if (b % i == 0) {
            sum2=sum2+i;
        }
    }

    if(sum1==b && sum2==a){
        return 1;
    }
    else {
        return 0;
    }
}
int main(){

    int num1, num2, res;
    scanf("%d%d", &num1, &num2);
    res=druz(num1, num2);
    if(res==1){
        printf("Числа дружественные");
    }
    else{ printf("Числа не дружественные");}
}*/


