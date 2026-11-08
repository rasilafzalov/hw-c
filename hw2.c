#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define EPS 1e-9

typedef struct{
    double a;
    double b;
    double c;
    double x_1;
    double x_2;
}Coefficients;

bool is_zero(double var){
    return fabs(var) < EPS;
}

void linear_equation(Coefficients* equation){
    if (is_zero(equation->b) && is_zero(equation->c)){
        printf("Бесконечно много решений\n");
    } else if(is_zero(equation->b)) {
        printf("Решений нет\n");
    } else {
        equation->x_1 = -(equation->c/equation->b);
        printf("x = %f\n", equation->x_1);
    }
} 

void solve_equation(Coefficients* equation){

    if (is_zero(equation->a)){
        linear_equation(equation);
    }else{

    double D = equation->b * equation->b -4 * equation->a * equation->c;

    if (is_zero(D)){
         equation->x_1 = (-equation->b)/(2*equation->a);
        printf("x = %f\n", equation->x_1);
    } else if (D > 0){
        double sqrt_D = sqrt(D);
        equation->x_1 = ((-equation->b)+sqrt_D)/(2*equation->a);
        equation->x_2 = ((-equation->b)-sqrt_D)/(2*equation->a);
        printf("x_1 = %f\nx_2 = %f\n", equation->x_1, equation->x_2);
    } else {
        printf("Уравнение не имеет действительных корней\n");
    }
    
    }
}

int main(){
        Coefficients equation = {0};

    printf("Введите коэфициенты кваадратного уравнения в порядке a, b, c\n");

    scanf("%lf %lf %lf", &equation.a, &equation.b, &equation.c); 


    solve_equation(&equation);
    return 0;
}