/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"
#include <string.h>

void trim(const char* source, char* trimmed_string)
{
  int firstLetterIndex;
  int lastLetterIndex;
  int counter = 0;

  firstLetterIndex=getLastLetterIndex(source);
  lastLetterIndex=getLastLetterIndex(source);

  if (strlen(source) > 0 )
  {
  for (int i = firstLetterIndex; i <= lastLetterIndex; i++)
  {
    trimmed_string[counter] = source[i];
    counter ++;
  }
}
else
{
  strcpy(trimmed_string, "");
}

}
int getFirstLetterIndex(const char* source)
{
  int counter;
  while(source[counter] == ' ')
  {
    counter++;
  }
  return counter;
}
int getLastLetterIndex(const char* source)
{
  int counter = strlen(source)-1;
  while(source[counter] == ' ')
  {
    counter--;
  }
  return counter;
}
