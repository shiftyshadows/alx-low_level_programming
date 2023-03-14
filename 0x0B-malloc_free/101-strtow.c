#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * strtow - function that splits a string into words.
 *
 * @str: pointer of type char
 *
 * Return: Words from  string
 */

int count_words(char *str);
int get_word_length(char *str);
void free_words(char **words);

char **strtow(char *str)
{
	/* Declaration of Variables*/
	int num_words, word_index, word_length, i;
	char **words;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}
	/* count the number of words in the string */
	num_words = count_words(str);
	if (num_words == 0)
	{
		return (NULL);
	}
	/* allocate memory for the array of words */
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	/* initialize the array of words to null pointers */
	for (i = 0; i < num_words; i++)
	{
		words[i] = NULL;
	}
/* iterate through the string and extract each word */
	word_index = 0;
	while (*str != '\0')
	{
		/* skip leading whitespace */
		while (*str != '\0' && isspace(*str))
		{
			str++;
		}
		/* break out of loop if we're at the end of the string */
		if (*str == '\0')
		{
			break;
		}
		/* allocate memory for the word and copy it */
		word_length = get_word_length(str);
		words[word_index] = malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			free_words(words);
			return (NULL);
		}
		strncpy(words[word_index], str, word_length);
		words[word_index][word_length] = '\0';
		word_index++;
		str += word_length;
	}
	words[num_words] = NULL; /* set the last element to NULL */
	return (words);
}

/**
 * count_words - function that counts number of words in a string
 *
 * @str: pointer of type char
 *
 * Return: Integer value of number of words
 */

int count_words(char *str)
{
	/* Declaration of variables */
	int count = 0;
	int in_word = 0;

	/* Code Statements */
	while (*str != '\0')
	{
		if (isspace(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * get_word_length - function that finds integer word length
 *
 * @str: pointer of type char
 *
 * Return: Integer word length
 */

int get_word_length(char *str)
{
	/* Declaration of variables */
	int length = 0;

	/* Code Statements */
	while (*str != '\0' && !isspace(*str))
	{
		length++;
		str++;
	}
	return (length);
}

/**
 * free_words - function that frees memory pointed at
 * by parameter
 *
 * @words: pointer of type char
 *
 */

void free_words(char **words)
{
	/* Declaration of Variables */
	int i;

	/* Code Statements */
	for (i = 0; words[i] != NULL; i++)
	{
		free(words[i]);
	}
	free(words);
}

