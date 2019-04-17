#include <stdio.h>

#include "tests.h"

void output_start_test(char* test_name){
	printf("TEST %s STARTED\n\n", test_name);
}

void output_end_test(char* test_name){
	printf("\nTEST %s ENDED\n\n", test_name);
}



void should_not_failed_in_function_calling(){
	output_start_test("should_not_failed_in_function_calling");

	output_number(0, OUTPUT_TYPE_UNDEFINED);

	create_zero_matrix(0,0);
	create_cos_ln_matrix(0,0);
	fill_matrix_with_cos_ln(0);
	delete_matrix(0);
	output_matrix(0, OUTPUT_TYPE_UNDEFINED);
	get_size_of_matrix(INPUT_TYPE_UNDEFINED);
	get_borders_of_segment(INPUT_TYPE_UNDEFINED);

	output_end_test("should_not_failed_in_function_calling");
}

void should_create_and_delete_zero_matrix(){
	output_start_test("should_create_and_delete_zero_matrix");
	MATRIX_TYPE matrix = create_zero_matrix(1,4);
	
	// TODO some assert stuff here

	delete_matrix(matrix);
	output_end_test("should_create_and_delete_zero_matrix");
}

void should_create_and_delete_cos_ln_matrix(){
	output_start_test("should_create_and_delete_cos_ln_matrix");
	MATRIX_TYPE matrix = create_cos_ln_matrix(1,4);
	// TODO some assert stuff here

	delete_matrix(matrix);
	output_end_test("should_create_and_delete_cos_ln_matrix");
}

void should_fill_existing_matrix_with_cos_ln(){
	output_start_test("should_fill_existing_matrix_with_cos_ln");
	MATRIX_TYPE matrix = create_zero_matrix(1,4);

	fill_matrix_with_cos_ln(matrix);

	// TODO some assert stuff here

	delete_matrix(matrix);
	output_end_test("should_fill_existing_matrix_with_cos_ln");
}

void should_output_zero_matrix(){
	output_start_test("should_output_zero_matrix");
	MATRIX_TYPE matrix = create_zero_matrix(1,4);

	output_matrix(matrix, OUTPUT_TYPE_CONSOLE);
	// TODO some assert stuff here

	delete_matrix(matrix);
	output_end_test("should_output_zero_matrix");
}

void should_output_cos_ln_matrix(){
	output_start_test("should_output_cos_ln_matrix");
	MATRIX_TYPE matrix = create_cos_ln_matrix(1,4);

	output_matrix(matrix, OUTPUT_TYPE_CONSOLE);

	// TODO some assert stuff here

	delete_matrix(matrix);
	output_end_test("should_output_cos_ln_matrix");
}

// Функция запуска всех тестов
void run_tests(){
	should_not_failed_in_function_calling();
	should_create_and_delete_zero_matrix();
	should_create_and_delete_cos_ln_matrix();
	should_fill_existing_matrix_with_cos_ln();
	should_output_zero_matrix();
	should_output_cos_ln_matrix();
}