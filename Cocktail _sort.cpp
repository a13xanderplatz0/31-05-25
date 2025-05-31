//Ordenamiento de burbuja bidireccional
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void shakersort(int vect[], int size) {
    int step, current;
    for (step = 1; step <= size / 2; step++)
    {
        for (current = step - 1; current < size - step; current++)
            if (vect[current] > vect[current+1])
                swap(&vect[current], &vect[current + 1]);
        for (current = size - step - 1; current >= step; current--)
            if (vect[current] < vect[current-1])
                swap(&vect[current], &vect[current - 1]);
    }
}
