#include <stdio.h>
#include <math.h>


void quadratic_equation(double D, double a, double b, double c){
    if (D > 0){
        double x_1 = ((-b)+sqrt(D))/(2*a);
        double x_2 = ((-b)-sqrt(D))/(2*a);
        printf("x_1 = %lf\n x_2 = %lf\n", x_1, x_2);
    } else if (D == 0){
        double x = (-b)/(2*a);
        printf("x = %lf\n", x);
    } else {
        printf("Уравнение не имеет действительных корней");
    }
}

void linear_equation(double b, double c){
    if (b==0 && c==0){
        printf("Бесконечно много решений\n");
    } else if(b == 0) {
        printf("Решений нет\n");
    } else {
        double x = -(c/b);
        printf("x = %lf\n", x);
    }
} 

int main(){
    double a = 0.0, b = 0.0, c = 0.0;

    printf("Введите коэфициенты кваадратного уравнения в порядке a, b, c\n");

    scanf("%lf %lf %lf", &a, &b, &c); 

    double D = b*b - 4*a*c;

    if (a==0){
        linear_equation(b, c);
    } else {
        quadratic_equation(D, a, b, c);
    }
    return 0;
}