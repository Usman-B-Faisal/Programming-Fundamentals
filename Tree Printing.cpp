#include <iostream>
using namespace std;
int main() {
int height; // Height of tree
cout << "Enter height of tree: ";
cin >> height; // Get height from user
int row = 0; // First row, from the top, to draw
while (row < height) { // Draw one row for every unit of height
// Print leading spaces
int count = 0;
while (count < height - row) {
cout << " ";
count++;
}
// Print out stars, twice the current row plus one:
// 1. number of stars on left side of tree
// = current row value
// 2. exactly one star in the center of tree
// 3. number of stars on right side of tree
// = current row value
count = 0;
while (count < 2*row + 1) {
	cout << "^";
count++;
}
// Move cursor down to next line
cout << endl;
// Change to the next row
row++;
}
}
