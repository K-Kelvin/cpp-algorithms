
void insertion_sort(int array[], int length){
    for (int i = 1; i < length; ++i) { // we assume the 1st element is sorted
        int key = array[i]; // current element being checked
        int j = i - 1;

        while (j >= 0 && array[j] > key) { // shift the elements
            array[j + 1] = array[j];
            j = j - 1;
        }
        
        array[j + 1] = key;
    }
}
