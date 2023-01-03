<<<<<<< HEAD
#include <Python.h>
#include <stdio.h>

/**
 * print_python_string - prints a python string in C
 *
 * @p: the PyUnicode Object
 */
void print_python_string(PyObject *p)
{
	fflush(stdout);

	printf("[.] string object info\n");
	if PyUnicode_CheckExact(p)
=======
#include "Python.h"

/**
 * print_python_string - Prints information about Python strings.
 * @p: A PyObject string object.
 */
void print_python_string(PyObject *p)
{
	long int length;

	fflush(stdout);

	printf("[.] string object info\n");
	if (strcmp(p->ob_type->tp_name, "str") != 0)
>>>>>>> ca00d7aa602ec7e7a270205e33edfb1faddda739
	{
		printf("  type: ");
		if (PyUnicode_IS_COMPACT_ASCII(p))
			printf("compact ascii\n");
		else
			printf("compact unicode object\n");
		printf("  length: %zd\n", PyUnicode_GetLength(p));
		printf("  value: %ls\n", PyUnicode_AsWideCharString(p, NULL));
	}
<<<<<<< HEAD
	else
		printf("  [ERROR] Invalid String Object\n");
=======

	length = ((PyASCIIObject *)(p))->length;

	if (PyUnicode_IS_COMPACT_ASCII(p))
		printf("  type: compact ascii\n");
	else
		printf("  type: compact unicode object\n");
	printf("  length: %ld\n", length);
	printf("  value: %ls\n", PyUnicode_AsWideCharString(p, &length));
>>>>>>> ca00d7aa602ec7e7a270205e33edfb1faddda739
}
