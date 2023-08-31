#include <stdio.h>
#include <math.h>

int main() {
    char A[42][42];
    for (int i = 0; i < 42; i++) {
        for (int j = 0; j < 42; j++) {
            A[i][j] = ' ';
        }
    }
    double Pi = -3.14159265358979323846;
    double deltaX = (Pi * -2) / 41;
    double deltaY = 0.05;
    double Y = deltaY;
    double VA = 0;
    double LB = 0;
    double QG = 0;
    int z = 0;
    int flag = 0;
    for (int i = 0; i < 42; i++) {
        VA = 1 / (1 + pow(Pi, 2));
        LB = sqrt(sqrt(1.0 + 4.0 * pow(Pi, 2)) - pow(Pi, 2) - 1.0);
        QG = 1 / pow(Pi, 2);

        if (z == 19 && !flag)
        {
            flag = 1;
            i++;
            z++;
        }
        if (VA > Y && !flag) {
            while (VA > Y)
            {
                Y += deltaY;
                z++;
            }
            A[z][i] = '*';
        } else if(VA < Y && flag) {
            while (VA < Y) {
                Y -= deltaY;
                z--;
            }
            A[z][i] = '*';
        } else {
            A[z][i] = '*';
        }
        if(i > 12 && i < 31) 
            printf("%d %.7lf | %.7lf | %.7lf | %.7lf\n", i, Pi, VA, LB, QG);
        else
            printf("%d %.7lf | %.7lf | - | %.7lf\n", i, Pi, VA, QG);
        Pi +=deltaX;
    }

    for (int i = 0; i < 42; i++) {
        for (int j = 0; j < 42; j++) {
            printf("%c ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}