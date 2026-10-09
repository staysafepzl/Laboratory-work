#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // //////////
    // printf("--- ЗАДАНИЕ 2 ---\n");
    // int n = 10, m = 2;
    // printf("Начальные значения: n = %d, m = %d\n", n, m);
    // printf("n+++m = %d (значение n изменилось)\n", n+++m);
    // printf("m-->n = %d (значение m изменилось)\n", m-->n);
    // printf("n-->m = %d (значение n изменилось)\n\n", n-->m);

    // //////////
    // printf("--- ЗАДАНИЕ 3 ---\n");
    // int a, b;
    // printf("Введите целые числа a и b (от 0 до 99): ");
    // scanf("%d %d", &a, &b);

    // printf("-----------------------------------------\n");
    // printf("|  a+b  |  a-b  |  a*b  |  a%%b  |\n");
    // printf("-----------------------------------------\n");
    // printf("|  %-3d  |  %-3d  |  %-3d  |  %-3d  |\n", (a + b), (a - b), (a * b), (a % b));
    // printf("-----------------------------------------\n");

    // //////////
    // int x, y, z;
    // double v, w;
    // printf("--- ЗАДАНИЕ 4 (Вариант 11) ---\n");
    // printf("Введите целые числа x, y, z: ");
    // scanf("%d %d %d", &x, &y, &z);
    // printf("Введите вещественные числа v, w: ");
    // scanf("%lf %lf", &v, &w);

    // double F = (5.0 * x / (3.0 * y)) + (2.0 * y / (3.0 * z)) + (4.0 * v / (3.0 * w)) + (1.0 / 2.0) * x * y * z;
    // double G = ((double)(x * y) / z) + ((double)y / (x * z)) + ((2.0 + (double)y / z) / (3.0 + w / v));
    // double H = pow(10, 5) * x * y * z + pow(10, 3) * v * w;
    
    // printf("F = %.3f, G = %.3f, H = %.3f\n\n", F, G, H);


    // //////////
    // double x;
    // printf("--- ЗАДАНИЕ 5 (Вариант 6) ---\n");
    // printf("Введите значение x для f(x): ");
    // scanf("%lf", &x);

    // double log3_val = log(3.0 * x * x + 5.0) / log(3.0);
    // double term2 = log3_val * log3_val; 
    // double term3 = pow(fabs(3.141592653589793 - 6.0 * x * x), 2.0 / 9.0);
    // double f_x = pow(x, 5) + term2 + term3;
    // printf("f(x) = %.3f\n\n", f_x);
}
