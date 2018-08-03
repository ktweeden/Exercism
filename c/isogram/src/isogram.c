#include "isogram.h"
#include <string.h>

bool is_isogram(const char phrase[])
{
  bool letters[26] = { false };
  int length = strlen(phrase);

  for (int i = 0; i < length; i++) {
    int letter = phrase[i];
    int adjuster;

    if (letter >= 97 && letter <= 122) { adjuster = 97; }
    else if (letter >= 65 && letter <= 90) { adjuster = 65; }
    else { continue; }

    if (letters[letter - adjuster]) { return false; }
    letters[letter - adjuster] = true;
  }
  return true;
}
