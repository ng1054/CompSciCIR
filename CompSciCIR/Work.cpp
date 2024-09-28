#include <iostream>
#include "Declaration.h"

int Formula(int a, int b, int c, int d, int e, int f) {
    int localD = opposite(d);
    int localX = a * b * ORGate(c * localD, e * f);
    return localX;
}

int Automatic(int a, int b, int c, int d, int e, int f) {
    int localD = opposite(d);
    int localX = a * b * ORGate(c * localD, e * f);
    std::cout << "A=" << a << " B=" << b << " C=" << c
        << " D=" << d << " E=" << e << " F=" << f
        << " -> Output: " << localX << std::endl;
    return localX;
}
int Nest() {
    for (int A = 0; A <= 1; ++A) {
        for (int B = 0; B <= 1; ++B) {
            for (int C = 0; C <= 1; ++C) {
                for (int D = 0; D <= 1; ++D) {
                    for (int E = 0; E <= 1; ++E) {
                        for (int F = 0; F <= 1; ++F) {
                            int Cout = Automatic(A, B, C, D, E, F);
                            
                            
                        }
                    }
                }
            }
        }
    }
    return -1;
}
int main()
{
    //Change these to match signal parameters 
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int E = 0;
    int F = 0;

    //int X = Formula(A, B, C, D, E, F);

    //OR if you want to iterate through all the combinations automatically, uncomment the following line:
             Nest();
    //std::cout << X;

}