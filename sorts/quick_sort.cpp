
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// move elements less than or equal to the pivot to the left of the array,
// and elements greater than the pivot to the right of the array
// move the pivot to the center of the array
/// @returns The pivot index  
int partition(int array[], int low, int high){
    int pivot_value = array[high];
    int i = low;
    for (int j = low; j < high; ++j) {
        if (array[j] <= pivot_value) {
            swap(&array[i], &array[j]);
            ++i;
        }
    }
    swap(&array[i], &array[high]);
    return i; // return the pivot index
}

// wrapper to handle recursive sorting using quick sort algorithm
void recurse_quicksort(int array[], int low, int high){
    if (low > high) return; // stop condition
    int pivot_index = partition(array, low, high);
    recurse_quicksort(array, low, pivot_index - 1); // sort the left side of the pivot
    recurse_quicksort(array, pivot_index + 1, high); // sort the right side of the pivot
};

// sort an array using quick sort algorithm,
// mutates the original array
void quick_sort(int array[], int length) {
    recurse_quicksort(array, 0, length - 1);
}
