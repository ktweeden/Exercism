#include "acronym.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *abbreviate(const char *phrase) {
  if (phrase == NULL) {
    return (char*) phrase;
  }
  else {
    const int length = strlen(phrase);
    char* p = (char*) malloc(length);

    int letter_count = 0;
    
    for (int i = 0; i < length; i++) {
      if(i == 0) {
        p[i] = phrase[i];
        letter_count += 1;
      } else if (isseparator(phrase[i])) {
        p[letter_count] = phrase[i +1];
        letter_count += 1;
      }
    }

    char result[letter_count];
    for (int i = 0; i < letter_count; i++) {
      result[i] = p[i];
    }

    return (char*) result;
  // free(p);
  }
}

bool isseparator(char c) {
  if (isspace(c)) {
    return true;
  }
  return false;
}
