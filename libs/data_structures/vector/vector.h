//
// Created by Lesya on 10.04.2023.
//

#ifndef UNTITLED9_VECTOR_H
#define UNTITLED9_VECTOR_H

#include <ctype.h>
#include <malloc.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct vector {
    int *data; // указатель на элементы вектора
    size_t size; // размер вектора
    size_t capacity; // вместимость вектора
} vector;

vector createVector(size_t n);

void reserve(vector *v, size_t newCapacity);

void clear(vector *v);

void shrinkToFit(vector *v);

void deleteVector(vector *v);


#endif //UNTITLED9_VECTOR_H
