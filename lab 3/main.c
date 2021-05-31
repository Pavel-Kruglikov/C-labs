﻿// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fact(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return (double)(n * fact(n - 1));
}

double factorial(int n) {
    int i;
    long double fact = 1;
    if (N < 0)
    {
        return 0;
    }
    if (N == 0)
    {
        return 1;
    }
    else
    {
        for (i = 1; i < N; i++)
        {
            fact *= i;
        }
    }
}

int res(int x, double e) {
    int n = 0;
    double curr = 0;
    do {
        n++;
        curr += pow(-1, n - 1) * (pow(x, 2 * n - 1) / fact(2 * n - 1));
    } 	while (fabs(sin(x) - curr) >= e);
    return n;
}

int main()
{
    double epsilon, x;
    printf("Enter x:");
    scanf("%lf", &x);
    printf("Enter epsilon:");
    scanf("%lf", &epsilon);
    printf("n=%d", res(x, epsilon));
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