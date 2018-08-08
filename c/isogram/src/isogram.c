#include "isogram.h"
#include <ctype.h>
#include <string.h>

bool is_isogram(const char phrase[]) {
#define ALPHABET 26

  bool letters[ALPHABET] = {false};
  const int length = strlen(phrase);
  const int adjuster = 'a';

  for (int i = 0; i < length; i++) {
    int letter = phrase[i];

    if (!isalpha(letter)) {
      continue;
    } else if (letters[tolower(letter) - adjuster]) {
      return false;
    } else {
      letters[tolower(letter) - adjuster] = true;
    }
  }

  return true;
}
