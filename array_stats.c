#include <stdio.h>

int main() {
  // Initialize the arrey 
  int scores[5];
  int min;
  int max;
  float average;

  printf("Enter 5 number: ");

  // loop to fill the array with user inputs
  for(int i = 0; i < 5; i++) {
    scanf("%d", &scores[i]);
  } 

  min = scores[0];
  max = scores[0];

  // loop to find the min, max, and average
  for(int j = 1; j < 5; j++) {
    if(scores[j] < min) {
      min = scores[j];
    }
    if(scores[j] > max) {
      max = scores[j];
    }
  }

  // find the average
  float sum = scores[0] + scores[1] + scores[2] + scores [3] + scores[4];
  average = sum / 5;

  printf("min: %d, max: %d, average: %.2f", min, max, average);
  return 0;

}