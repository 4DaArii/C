#ifndef INPUT_H
#define INPUT_H
	
	enum InputType{
		INPUT_TYPE_UNDEFINED=0,
		INPUT_TYPE_CONSOLE=1,
		INPUT_TYPE_FILE=2,
	};

	struct Borders{
		int left_border;
		int right_border;
	};


	int get_size_of_matrix(int input_type);

	struct Borders get_borders_of_segment(int input_type);

#endif