#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <windows.h>
using namespace std;
// ---- Settings you can change ----
const int DELAY_MS = 200; // speed of animation (smaller = faster)
const char BAR_CHAR = '#'; // character used to draw each bar
// Clears the console screen (works on Windows, Linux, Mac)
void clearScreen() {
#ifdef _WIN32
system("cls");
#else
system("clear");
#endif
}
// Draws the array as horizontal bars.
// compareIndex1 / compareIndex2 mark the two bars currently being compared
// (they are shown in a different color). Pass -1 if not applicable.
void drawArray(const vector<int>& arr, int compareIndex1 = -1, int compareIndex2 = -1) {
clearScreen();
cout << "----- DSA Visualizer: Bubble Sort -----\n\n";
for (int i = 0; i < (int)arr.size(); i++) {
cout << "Index " << i << " [" << arr[i] << "]\t";
// Choose color: red for elements being compared, green otherwise
if (i == compareIndex1 || i == compareIndex2) {
cout << "\033[1;31m"; // red
} else {
cout << "\033[1;32m"; // green
}
for (int j = 0; j < arr[i]; j++) {
cout << BAR_CHAR;
}
cout << "\033[0m" << "\n"; // reset color
}
cout << "\n";
//this_thread::sleep_for(chrono::milliseconds(DELAY_MS));
//this_thread::sleep_for(std::chrono::milliseconds(DELAY_MS));
Sleep(DELAY_MS);
}
// Bubble sort, redrawing the array at every comparison and every swap
void bubbleSortVisual(vector<int>& arr) {
int n = arr.size();
for (int i = 0; i < n - 1; i++) {
for (int j = 0; j < n - i - 1; j++) {
// Show which two bars are being compared right now
drawArray(arr, j, j + 1);
if (arr[j] > arr[j + 1]) {
swap(arr[j], arr[j + 1]);
// Show the array again after the swap
drawArray(arr, j, j + 1);
}
}
}
drawArray(arr); // final, fully sorted state
}
int main() {
vector<int> arr;
int n;

cout << "How many numbers do you want to visualize? ";
cin >> n;
cout << "Enter " << n << " numbers, one by one (try values between 1 and 20):\n";
for (int i = 0; i < n; i++) {
int val;
cin >> val;
arr.push_back(val);
}
bubbleSortVisual(arr);
cout << "Sorting complete!\n";
return 0;
}