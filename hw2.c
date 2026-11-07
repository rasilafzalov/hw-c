#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define EPS 1e-9

typedef struct{
    double a;
    double b;
    double c;
} Coefficients;

bool is_zero(double var){
    return fabs(var) < EPS;
}


void quadratic_equation(Coefficients eq){

    double D = eq.b * eq.b -4 * eq.a * eq.c;

    if (is_zero(D)){
         double x = (-eq.b)/(2*eq.a);
        printf("x = %f\n", x);
    } else if (D > 0){
        double sqrt_D = sqrt(D);
        double x_1 = ((-eq.b)+sqrt_D)/(2*eq.a);
        double x_2 = ((-eq.b)-sqrt_D)/(2*eq.a);
        printf("x_1 = %f\n x_2 = %f\n", x_1, x_2);
    } else {
        printf("Уравнение не имеет действительных корней\n");
    }
}

void linear_equation(Coefficients eq){
    if (is_zero(eq.b) && is_zero(eq.c)){
        printf("Бесконечно много решений\n");
    } else if(is_zero(eq.b)) {
        printf("Решений нет\n");
    } else {
        double x = -(eq.c/eq.b);
        printf("x = %f\n", x);
    }
} 

int main(){
        Coefficients eq = {0.0, 0.0, 0.0};

    printf("Введите коэфициенты кваадратного уравнения в порядке a, b, c\n");

    scanf("%lf %lf %lf", &eq.a, &eq.b, &eq.c); 


    if (is_zero(eq.a)){
        linear_equation(eq);
    } else {
        quadratic_equation(eq);
    }
    return 0;
}