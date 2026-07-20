#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <windows.h>
#include <algorithm> // For std::swap

using namespace std;

// Settings you can change
const int DELAY_MS = 400;
const char BAR_CHAR = '#';

// Clears the console screen
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Draws the array as horizontal bars
void drawArray(const vector<int>& arr, int compareIndex1 = -1, int compareIndex2 = -1) {
    clearScreen();
    cout << "----- DSA Visualizer -----\n\n";
    for (int i = 0; i < (int)arr.size(); i++) {
        cout << "Index " << i << " [" << arr[i] << "]\t";
        
        // Red for compared, green otherwise
        if (i == compareIndex1 || i == compareIndex2) {
            cout << "\033[1;31m"; 
        } else {
            cout << "\033[1;32m";
        }

        for (int j = 0; j < arr[i]; j++) {
            cout << BAR_CHAR;
        }
        cout << "\033[0m" << "\n";
    }
    cout << "\n";
    //this_thread::sleep_for(chrono::milliseconds(DELAY_MS));
    Sleep(DELAY_MS);
}

// Bubble Sort implementation
void bubbleSortVisual(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            drawArray(arr, j, j + 1);
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                drawArray(arr, j, j + 1);
            }
        }
    }
    drawArray(arr);
}

// Selection Sort implementation
void selectionSortVisual(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            drawArray(arr, i, j);
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            drawArray(arr, i, minIndex);
        }
    }
    drawArray(arr);
}

int main() {
    vector<int> arr;
    int n, choice;

    cout << "How many numbers do you want to visualize? ";
    cin >> n;
    cout << "Enter " << n << " numbers, one by one:\n";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    cout << "\nChoose an algorithm:\n1. Bubble Sort\n2. Selection Sort\nChoice: ";
    cin >> choice;

    if (choice == 1) {
        bubbleSortVisual(arr);
    } else if (choice == 2) {
        selectionSortVisual(arr);
    } else {
        cout << "Invalid choice!" << endl;
    }

    cout << "Sorting complete!" << endl;
    return 0;
}