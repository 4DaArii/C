

#include "tests.h"

void should_not_failed_in_function_calling(){
	output_number(0);

	create_zero_matrix(0,0);
	create_cos_ln_matrix(0,0);
	fill_matrix_with_cos_ln(0);
	delete_matrix(0);
	output_matrix(0);
}

// Функция запуска всех тестов
void run_tests(){
	should_not_failed_in_function_calling();
}