#ifndef ARRAYS_H
#define ARRAYS_H

void insertion_sort(int *A, int length)
{
        for (int j = 1; j < length; j++) {
                int key = A[j];
                int i = j - 1;
                while ((i >= 0) && (A[i] > key)) {
                        A[i + 1] = A[i];
                        i = i - 1;
                }
                A[i + 1] = key;
        }
}

#endif