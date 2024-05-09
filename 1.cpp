#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countWaysToLoad(vector<int>& boxes, int containerLength, int currentIndex) {
  if (containerLength == 0) {
    return 1;
  }

  if (currentIndex >= boxes.size() || containerLength < 0) {
    return 0;
  }

  // Check if the current box is bigger than the remaining space
  if (boxes[currentIndex] > containerLength) {
      // Skip this box if it doesn't fit
      return countWaysToLoad(boxes, containerLength, currentIndex + 1);
  }

  return (countWaysToLoad(boxes, containerLength - boxes[currentIndex], currentIndex + 1) +
          countWaysToLoad(boxes, containerLength, currentIndex + 1)) % 1000000007;
}

int main() {
  int n, containerLength;
  cin >> n >> containerLength;

  vector<int> boxes(n);
  for (int i = 0; i < n; ++i) {
    cin >> boxes[i];
  }

  // Check if any box is larger than the container initially
  bool anyBoxTooBig = false;
  for (int box : boxes) {
      if (box > containerLength) {
          anyBoxTooBig = true;
          break;
      }
  }

  if (anyBoxTooBig) {
      cout << 0 << endl; // No way to fill the container
  } else {
      int ways = countWaysToLoad(boxes, containerLength, 0);
      cout << ways << endl;
  }

  return 0;
}