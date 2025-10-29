// ННГУ, ИИТММ, Курс "Алгоритмы и структуры данных"
//
// Copyright (c) Сысоев А.В.
//
// Тестирование матриц

#include <iostream>
#include "tmatrix.h"
//---------------------------------------------------------------------------

void main()
{
  TDynamicMatrix<int> a(5), b(5), c(5);
  int i, j;

  setlocale(LC_ALL, "Russian");
  cout << "Тестирование класс работы с матрицами"
    << endl;
  for (i = 0; i < 5; i++)
    for (j = i; j < 5; j++ )
    {
      a[i][j] =  i * 10 + j;
      b[i][j] = (i * 10 + j) * 100;
    }
  c = a + b;
  cout << "Matrix a = " << endl << a << endl;
  cout << "Matrix b = " << endl << b << endl;
  cout << "Matrix c = a + b" << endl << c << endl;
  TDynamicMatrix<int> a1(5), b1(5), c1(5);
  for (i = 0; i < 5; i++)
      for (j = 0; j < 5; j++)
      {
          a1[i][j] = i ;
          b1[i][j] = j + 1;
      }
  c1 = a1 * b1;
  cout << "Matrix a = " << endl << a1 << endl;
  cout << "Matrix b = " << endl << b1 << endl;
  cout << "Matrix c = a * b" << endl << c1 << endl;

}
//---------------------------------------------------------------------------
