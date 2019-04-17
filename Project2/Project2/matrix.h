#ifndef MATRIX_H
#define MATRIX_H
	#define MATRIX_TYPE int**
	#include "output.h"

	// создаем матрицу, заполненную нулями
	MATRIX_TYPE create_zero_matrix(int n, int m);

	// создаем матрицу, заполненную косинусом натурального логарифма
	MATRIX_TYPE create_cos_ln_matrix(int n, int m);

	// Заполняем матрицу косинусами натурального логарифма
	void fill_matrix_with_cos_ln(MATRIX_TYPE matrix);

	// Удаляем матрицу
	void delete_matrix(MATRIX_TYPE matrix);

	// Функция вывода матрицы в консоль
	void output_matrix(int type);

#endif
