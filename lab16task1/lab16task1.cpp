// lab16task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
int main() {
    int counter = 0;
    const int n = 5;
    const int m = 7;
    const int array[n][m] = {
        {-1, -2, -3, -4, -5, -6, -7},
        { -8, -9, -10, -11, -12, -13, -14 },
        { 15, 16, 17, 18, 19, 20, 21 },
        { 22, 23, 24, 25, 26, 27, 28 },
        { -29, -30, -31, -32, -33, -34, -35 }
    };
    for (int i = 0; i < n; i++) {
        bool isnegative = true;
        for (int j = 0; j < m; j++) {
            if (array[i][j] > 0) {
                isnegative = false;
            }

        }
        if (isnegative) {
            counter++;
            if (counter == 2) {
                for (int j = 0; j < m; j++) {
                    printf("%d ", array[i][j]);
                }
                printf("\n");
                }
            
        }
    }

}
