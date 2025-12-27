// Example 3: Custom Handling for Private-Use Characters
#include <wcwidth9.h>
#include <stdio.h>


int main() {
  int private_use_chars[] = {0xE000,
                             0xF8FF}; // Start and end of Private Use Area

  printf("%-30s %-10s\n", "Character", "Width");
  printf("-----------------------------------------\n");

  for (int i = 0; i < 2; i++) {
    int width = wcwidth9(private_use_chars[i]);
    if (width == -3) {
      printf("%-30s %-10s\n", "Private Use Character", "Custom Width");
    } else {
      printf("%-30s %-10d\n", "Private Use Character", width);
    }
  }

  return 0;
}
