#include "isogram.h"
#include <stdio.h>
#include <string.h>



bool is_isogram(const char phrase[])
{
  int letters[26] = {0};
  bool result = true;
  int length = strlen(phrase);
  for(int i = 0; i < length; i++ )
  {
    int letter = phrase[i];
    if(letter >= 97 && letter <= 122) 
    {
      if (letters[letter-97] == 1)
      {
        result = false;
        break;
      }
      else
      {
        letters[letter-97] = 1;
      }
    }
    else if(letter >= 65 && letter <= 90) 
    {
      if (letters[letter-65] == 1)
      {
        result = false;
        break;
      }
      else
      {
        letters[letter-65] = 1;
      }
    }
  }
  return result;
}



// bool is_isogram(const char phrase[])
// {
//   int length = strlen(phrase);
//   char arr[length];
//   bool result = true;
  
//   for(int i = 0; i < length; i++)
//   {
//     if(contains(phrase[i], arr))
//     {
//       result = false;
//     }
//     else 
//     {
//       arr[i] = phrase[i];
//     }
//   }
//   return result;
// }

// bool contains(const char character, const char container[])
// {
//   int length = strlen(container);
//   bool result = false;
  
//   for(int i = 0; i < length; i++)
//   {
//     if(character == container[i])
//     {
//       result = true;
//     }
//   }
//   return result;
// }
