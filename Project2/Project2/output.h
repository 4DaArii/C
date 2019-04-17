#ifndef OUTPUT_H
#define OUTPUT_H
	enum OutputType {
		OUTPUT_TYPE_UNDEFINED=0,
		OUTPUT_TYPE_CONSOLE=1,
		OUTPUT_TYPE_FILE=2
	};

	// Функция вывода числа
	void output_number(int type);
#endif