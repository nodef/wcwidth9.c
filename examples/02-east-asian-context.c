// Example 2: Handling Ambiguous Width Characters in East Asian Contexts
#include <wcwidth9.h>
#include <stdio.h>


void print_width(int codepoint, const char *description) {
  int width = wcwidth9(codepoint);
  printf("%-30s %-10d\n", description, width);
}

int main() {
  int ambiguous_chars[] = {0x00A1, 0x2013,
                           0xFF01}; // ¡, –, Fullwidth Exclamation Mark
  const char *descriptions[] = {"Inverted Exclamation Mark", "En Dash",
                                "Fullwidth Exclamation Mark"};

  printf("%-30s %-10s\n", "Character", "Width");
  printf("-----------------------------------------\n");

  for (int i = 0; i < 3; i++) {
    print_width(ambiguous_chars[i], descriptions[i]);
  }

  return 0;
}
