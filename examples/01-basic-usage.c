// Example 1: Basic Usage of wcwidth9
#include <wcwidth9.h>
#include <stdio.h>


int main() {
  int codepoints[] = {0x0041, 0x3042, 0x1F600, 0x200D}; // A, あ, 😀, ZWJ
  const char *descriptions[] = {"Latin Capital Letter A", "Hiragana Letter A",
                                "Grinning Face Emoji", "Zero Width Joiner"};

  printf("%-30s %-10s\n", "Character", "Width");
  printf("-----------------------------------------\n");

  for (int i = 0; i < 4; i++) {
    int width = wcwidth9(codepoints[i]);
    printf("%-30s %-10d\n", descriptions[i], width);
  }

  return 0;
}
