#include "isogram.h"
#include <stdio.h>
#include <string.h>




// bool is_isogram(const char phrase[]) 
// {
//   int length = strlen(phrase);
//   bool result = true;
//   for(int i = 0; i < length; i++)
//   {
//     if(strchr(phrase, phrase[i]) == phrase)
//     {
//       result = false;
//     }
//   }
//   return result;
// }



bool is_isogram(const char phrase[])
{
  int length = strlen(phrase);
  char arr[length];
  bool result = true;
  
  for(int i = 0; i < length; i++)
  {
    if(contains(phrase[i], arr))
    {
      result = false;
    }
    else 
    {
      arr[i] = phrase[i];
    }
  }
  return result;
}

bool contains(const char character, const char container[])
{
  int length = strlen(container);
  bool result = false;
  
  for(int i = 0; i < length; i++)
  {
    if(character == container[i])
    {
      result = true;
    }
  }
  return result;
}
