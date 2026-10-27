#include <iostream>

// Lab 9 — Bavly Y
// CIS 5 Week 09 · Call and return
// Homework continues this program. Do not start a second file.

// TODO: double average(const int a[], int n);
// TODO: void printSummary(double avg);
double average(const int a[], int n);
void printSummary(double avg);

int main() {
  const int N = 4;
  int scores[N] = {82, 90, 70, 100};
  // TODO: double avg = average(scores, N);
  // TODO: printSummary(avg);
  double avg = average(scores, N);
  printSummary(avg);
  return 0;
}

double average(const int a[], int n) {
  if (n == 0) {
    return 0;
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }
  return static_cast<double>(sum) / n;
}

void printSummary(double avg) {
  std::cout << "Average: " << avg << std::endl;
}