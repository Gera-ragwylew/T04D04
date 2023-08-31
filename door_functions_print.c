#include <stdio.h>
#include <math.h>

int main() {
    double Pi = -3.14159265358979323846;
    double delta = 0;
    double VA = 0;
    double LB = 0;
    double QG = 0;
    delta = (Pi * -2) / 41;
    for (int i = 1; i <= 42; i++) {
        VA = 1 / (1 + pow(Pi, 2));
        LB = sqrt(sqrt(1.0 + 4.0 * pow(Pi, 2)) - pow(Pi, 2) - 1.0);
        QG = 1 / pow(Pi, 2);
        if(i > 12 && i < 31) 
            printf("%.7lf | %.7lf | %.7lf | %.7lf\n", Pi , VA, LB, QG);
        else
            printf("%.7lf | %.7lf | - | %.7lf\n", Pi , VA, QG);
        Pi +=delta;
    }
    return 0;
}