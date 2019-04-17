#ifndef OUTPUT_H
#define OUTPUT_H
	enum OutputType {
		OUTPUT_TYPE_UNDEFINED=0,
		OUTPUT_TYPE_CONSOLE=1,
		OUTPUT_TYPE_FILE=2
	};

	// Функция вывода матрицы в консоль
	void output_matrix(int type=OUTPUT_TYPE_CONSOLE);

	// Функция вывода числа
	void output_number(int type=OUTPUT_TYPE_CONSOLE);
#endif