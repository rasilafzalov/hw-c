#include <stdio.h>
#include <math.h>

double quadratic_equation(double a, double b, double c){
    if(a == 0){
        printf("НИЗЯ ЖЕ ТАК");
        return 0;
    }

    double x1 = 0.0, x2 = 0.0;
    x1 = ((-b)+sqrt((b*b)-4*a*c))/(2*a);
    x2 = ((-b)-sqrt((b*b)-4*a*c))/(2*a);
    if(x1 == x2){
        printf("x1 = x2 = x = %lf", x1);
        } else {
        printf("x1 = %lf\n x2 = %lf", x1, x2);
        }
}

int main(){
    double a = 0.0, b = 0.0, c = 0.0;

    printf("Введите коэфициенты кваадратного уравнения в порядке a, b, c\n");

    scanf("%lf %lf %lf", &a, &b, &c); 

    quadratic_equation(a, b, c);


}