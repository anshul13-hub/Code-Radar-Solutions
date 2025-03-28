#include <stdio.h>

int findFirstOccurrence(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            result = mid;
            right = mid - 1;  // Search the left half to find the first occurrence
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int findLastOccurrence(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            result = mid;
            left = mid + 1;  // Search the right half to find the last occurrence
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int findOccurrence(int arr[], int n, int target, char mode) {
    if (mode == 'F') {
        return findFirstOccurrence(arr, n, target);
    } else if (mode == 'L') {
        return findLastOccurrence(arr, n, target);
    }
    return -1;  // Invalid mode
}

