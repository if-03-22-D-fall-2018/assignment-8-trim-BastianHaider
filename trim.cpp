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
 #include <string.h>
 #include "trim.h"


  void trim(const char * source, char *trimmed_string)
  {
    int count = 0;
    int firstLetterIndex = 0;
    int lastLetterIndex = strlen(source) -1;

    getFirstLetterIndex(source, &firstLetterIndex);
    getLastLetterIndex(source, &lastLetterIndex);

    if (strlen(source) > 0 )
    {
      for (int i = firstLetterIndex; i <= lastLetterIndex; i++) {
        trimmed_string[count] = source[i];
        count ++;
      }
    }
    else
    {
      strcpy(trimmed_string, "");
    }
  }

  void getFirstLetterIndex(const char* source, int *firstLetterIndex)
  {
    while (source[*firstLetterIndex] == ' ')
    {
      *firstLetterIndex = *firstLetterIndex+1;
    }
  }

  void getLastLetterIndex(const char* source, int *lastLetterIndex)
  {
    while (source[*lastLetterIndex] == ' ') {
      *lastLetterIndex = *lastLetterIndex-1;
    }
  }

