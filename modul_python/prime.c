#include <Python.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int isPrime(int n) {
  for (int i=2; i<n/2; i++) {
    if (n%i == 0)
      return 0;
  }
  return 1;
}

int kthPrime(int k) {
  int candidate = 2;
  while (k) {
    if (isPrime(candidate))
      k--;
    candidate++;
  }
  return candidate-1;
}

extern int kthPrime(int n);

int Nod(int a, int b){
    int t;
    while(b!=0){
    t=b;
    b=a%b;
    a=t;
    }
    return a;


    }

// Статическая функция, которая принимает аргументы PyObject и возвращает результат PyObject
static PyObject* py_kthPrime(PyObject* self, PyObject* args) {
  int n;
  if (!PyArg_ParseTuple(args, "i", &n)) // Проверка и анализ аргументов, полученных функцией, на возможность использования в C
    return NULL;
  return Py_BuildValue("i", kthPrime(n)); // Получаем результат из C, упаковываем его вместе с PyObject и возвращаем
}

static PyObject* py_Nod(PyObject* self, PyObject* args) {
  int a,b;
  if (!PyArg_ParseTuple(args, "ii", &a, &b)) // Проверка и анализ аргументов, полученных функцией, на возможность использования в C
    return NULL;
  return Py_BuildValue("i", Nod(a,b)); // Получаем результат из C, упаковываем его вместе с PyObject и возвращаем
}
// Определение коллекции методов, вызываемых из модуля
static struct PyMethodDef FastMethods[] = {
  {"kthPrime", py_kthPrime, METH_VARARGS, "Finds the kth prime number"},
  {"Nod", py_Nod, METH_VARARGS, "Finds max divisor"},
{NULL, NULL}
};
// Определение модуля
static PyModuleDef small_module = {
  PyModuleDef_HEAD_INIT,
  "prime",
  "This module calculates the kth prime number and NOD",
  -1,
  FastMethods
};
// Этот метод вызывается при импорте кода в Python. Он создает экземпляр модуля и возвращает ссылку на него
PyMODINIT_FUNC PyInit_prime(void)
{
  return PyModule_Create(&small_module);
}
