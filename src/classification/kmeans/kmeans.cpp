//
// Created by mini on 15.08.21.
//
#include <iostream>
#include "kmeans.h"
int main() {
//    std::cout <<  << std::endl;
    Kmeans<double> kmeans;
    double **x = new double*[18];
    double dataset[18][2] = {{0, 0}, {0, 1},{0, 2},{1, 0},{1, 1},{1, 2},{2, 0},{2, 1},{2, 2},{5, 5},{5, 6},{5, 7},{6, 5},{6, 6},{6, 7},{7, 5},{7, 6},{7, 7}};

    for (int i = 0; i < 18; ++i) {
        x[i] = new double[2];
        x[i] = dataset[i];
    }

    kmeans.fit(x, 2, 18, 2);

    for (int i = 0; i < 18; ++i) {
        delete [] x[i];
    }

    delete [] x;
}