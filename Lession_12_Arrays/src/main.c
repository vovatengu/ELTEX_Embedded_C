#include <stdio.h>
#define N 10

void solvingTask1();
void solvingTask2();
void solvingTask3();
void solvingTask4();

int main(void)
{
    solvingTask1();
    solvingTask2();
    solvingTask3();
    solvingTask4();
}
void solvingTask1()
{
    int array[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array[i][j] = i * N + j + 1;
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }
}
void solvingTask2()
{

    int array[N];
    int temp = 0;
    printf("Введите 10 чисел через enter\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < N / 2; i++)
    {
        temp = array[i];
        array[i] = array[N - i - 1];
        array[N - i - 1] = temp;
    }
    printf("Полученный массив\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", array[i]);
    }
}
void solvingTask3()
{
    int array[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i + j < N - 1)
            {
                array[i][j] = 0;
            }
            else
            {
                array[i][j] = 1;
            }
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
}
void solvingTask4()
{
    int array[N][N];
    int Ibeg = 0, Ifin = 0, Jbeg = 0, Jfin = 0;
    int k = 1;
    int i = 0;
    int j = 0;
    while (k <= N * N)
    {
        array[i][j] = k;
        if (i == Ibeg && j < N - Jfin - 1)
            ++j;
        else if (j == N - Jfin - 1 && i < N - Ifin - 1)
            ++i;
        else if (i == N - Ifin - 1 && j > Jbeg)
            --j;
        else
            --i;

        if (i == Ibeg + 1 && j == Jbeg && Jbeg != N - Jfin - 1)
        {
            ++Ibeg;
            ++Ifin;
            ++Jbeg;
            ++Jfin;
        }
        ++k;
    }
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
            printf("%3d", array[i][j]);
        printf("\n");
    }
}