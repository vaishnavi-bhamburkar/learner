/*
1) Take an list from the user as input and reverse it before      printing it to the user

 #include <stdio.h>

 int main() {
    int n;
    printf("Enter the size of the list: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the list: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original list: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed list: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/



/*
2) Take an list from the user as input and print the mean, median, and mode of the list

#include <stdio.h>

// Function to sort the array in ascending order
void sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to calculate the mean of the array
double mean(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum/n;
}

// Function to calculate the median of the array
double median(int arr[], int n) {
    sort(arr, n);

    if (n % 2 == 0) {
        return (double)(arr[n/2] + arr[n/2-1])/2;
    } else {
        return (double)arr[n/2];
    }
}

// Function to calculate the mode of the array
int mode(int arr[], int n) {
    int max_count = 0, mode = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            mode = arr[i];
        }
    }
    return mode;
}

int main() {
    int n;
    printf("Enter the size of the list: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the list: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    double mean_val = mean(arr, n);
    double median_val = median(arr, n);
    int mode_val = mode(arr, n);

    printf("Mean: %lf\n", mean_val);
    printf("Median: %lf\n", median_val);
    printf("Mode: %d\n", mode_val);

    return 0;
}
*/



/*
3) Take an list of size N and a number K from the user as input, and print the elements of
an list in a rotated manner with a gap of K. Eg, let us say the list is - 3, 6, 7, 5, 10. And the
value of k = 3. The output should be - 7, 3, 10, 6, 5. If k = 2, the output should be - 6, 5, 3,
10, 7

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the size of the list: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the list: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        int j = (i + k) % n;
        printf("%d ", arr[j]);
    }

    return 0;
}
*/



/*
4) Take an list from the user as input and find duplicate elements in an list.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the list: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the list: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicates[n], count = 0;
    printf("Duplicate elements in the list are: ");
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                int found = 0;
                for (int k = 0; k < count; k++) {
                    if (duplicates[k] == arr[j]) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    duplicates[count++] = arr[j];
                    printf("%d ", arr[j]);
                }
            }
        }
    }

    if (count == 0) {
        printf("None\n");
    }

    return 0;
}
*/



/*
5)Take two sorted lists from the user as input and Merge them into a single sorted list

 #include <stdio.h>

int main() {
    int n, m, i, j, k;
    printf("Enter the size of the first list: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the elements of the first list in ascending order: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second list: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter the elements of the second list in ascending order: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n + m];
    i = 0; // index of first list
    j = 0; // index of second list
    k = 0; // index of merged list

    // merge the two lists into merged[]
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // copy any remaining elements from first list
    while (i < n) {
        merged[k++] = arr1[i++];
    }

    // copy any remaining elements from second list
    while (j < m) {
        merged[k++] = arr2[j++];
    }

    // print the merged list
    printf("Merged list in ascending order: ");
    for (i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
*/



/*
6) Given an unsorted list of size N that contains only non-negative integers, find a
contiguous sublist that adds to a given number S. In case of multiple sublists, return the
sublist which comes first on moving from left to right. Let us say the list is - 3, 6, 7, 5, 10.
And the value of S = 12. The output should be - 7, 5

#include <stdio.h>

int main() {
    int n, s, i, j, sum, start, end;
    printf("Enter the size of the list: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the list elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum to be found: ");
    scanf("%d", &s);
    sum = arr[0];
    start = 0;
    end = -1;
    for (i = 1; i <= n; i++) {
        while (sum > s && start < i-1) {
            sum -= arr[start];
            start++;
        }
        if (sum == s) {
            end = i-1;
            break;
        }
        if (i < n) {
            sum += arr[i];
        }
    }
    if (end == -1) {
        printf("No sublist found\n");
    } else {
        printf("Sublist found: ");
        for (i = start; i <= end; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
*/


/*
7) Take two sorted lists from the user as input and find the Union and Intersection of the
lists.

#include <stdio.h>

void findUnion(int arr1[], int m, int arr2[], int n) {
    int i = 0, j = 0;
    printf("Union of the arrays: ");
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i++]);
        }
        else if (arr2[j] < arr1[i]) {
            printf("%d ", arr2[j++]);
        }
        else {
            printf("%d ", arr1[i++]);
            j++;
        }
    }
    while (i < m) {
        printf("%d ", arr1[i++]);
    }
    while (j < n) {
        printf("%d ", arr2[j++]);
    }
    printf("\n");
}

void findIntersection(int arr1[], int m, int arr2[], int n) {
    int i = 0, j = 0;
    printf("Intersection of the arrays: ");
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            j++;
        }
        else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    printf("\n");
}

int main() {
    int m, n;
    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter the elements of the first array in sorted order: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter the elements of the second array in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    findUnion(arr1, m, arr2, n);
    findIntersection(arr1, m, arr2, n);
    return 0;
}

    



8) Take two sorted lists of size m and n from the user as input and return the median of the two sorted lists.

#include <stdio.h>

double findMedian(int arr1[], int m, int arr2[], int n) {
    int i = 0, j = 0, k = 0;
    int merged[m + n];
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        }
        else {
            merged[k++] = arr2[j++];
        }
    }
    while (i < m) {
        merged[k++] = arr1[i++];
    }
    while (j < n) {
        merged[k++] = arr2[j++];
    }
    int mid = (m + n) / 2;
    if ((m + n) % 2 == 0) {
        return (double)(merged[mid - 1] + merged[mid]) / 2;
    }
    else {
        return (double)merged[mid];
    }
}

int main() {
    int m, n;
    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter the elements of the first array in sorted order: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter the elements of the second array in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    double median = findMedian(arr1, m, arr2, n);
    printf("The median of the two arrays is %lf", median);
    return 0;
}


9) Take a sorted list from the user as input and find a number using Binary Search the list. 


#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the number to be searched: ");
    scanf("%d", &target);
    int index = binarySearch(arr, 0, n - 1, target);
    if (index == -1) {
        printf("The number %d is not present in the array", target);
    }
    else {
        printf("The number %d is present at index %d", target, index);
    }
    return 0;
}
   
