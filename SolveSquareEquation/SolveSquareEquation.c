// SolveSquareEquation.c : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
    float a, b, c;
    system("cls");
    printf("Input coefficients of square equation\r\n");
    scanf("%f%f%f", &a, &b, &c);
    printf("Try to solve the equation: %f * x ^ 2 + %f * x + %f = 0\r\n", a, b, c);
    if ((a == 0) && (b == 0) && (c == 0))
    {
        printf("The answer is any number\r\n");
    }
    else if ((a == 0) && (b == 0) && (c != 0))
    {
        printf("The equation has no solution\r\n");
    }
    else if ((a == 0) && (b != 0) && (c != 0))
    {
        printf("The equation has the following solution : x = %f\r\n",-c / b);
    }
    else
    {
        float d = b * b - 4 * a * c;
        int sign = (d > 0) - (d < 0);
        int nRoots = sign + 1;
        if (nRoots > 0)
        {
            float x1 = (-b - sqrt(d)) / (2 * a);
            float x2 = (-b + sqrt(d)) / (2 * a);
            printf("The equation has the following roots : \r\n");
            printf("x1 = %f\r\n", x1);
            printf("x2 = %f\r\n", x2);
        }
        else
            printf("The equation has no roots\r\n");
    }
    getchar();
    getc(stdin);
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
