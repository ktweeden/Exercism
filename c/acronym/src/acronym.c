#include "acronym.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *abbreviate(const char *phrase) {
  if (phrase == NULL || phrase[0] == '\0') {
    return NULL;
  }

  const int length = strlen(phrase);
  char* p = malloc(length);
  char* first = p;
  
  for (int i = 0; i < length; i++) {
    if(i == 0) {
      *p = toupper(phrase[i]);
      p++;
    } else if (isseparator(phrase[i])) {
      *p = toupper(phrase[i +1]);
      p++;
      i++;
    }
  }

  char* result = (char*) realloc(first, p-first);
  return (char*) result;
}

bool isseparator(char c) {
  if (isspace(c)) {
    return true;
  }
  else if (c == '-') {
    return true;
  }
  return false;
}
