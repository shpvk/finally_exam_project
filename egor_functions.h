#pragma once
void unique_arrays_nums(int arr_a[], int arr_b[], int arr_c[], int rows, int cols)
{
	int arr_a_size = sizeof(arr_a) / sizeof(int);
	int arr_b_size = sizeof(arr_b) / sizeof(int);
	int arr_c_size = sizeof(arr_c) / sizeof(int);

	int total_size = arr_a_size + arr_b_size + arr_c_size;
	int* all_digits_array = new int[total_size];

	for (int i = 0; i < arr_a_size; ++i)
	{
		all_digits_array[i] = arr_a[i];
	}

	for (int i = arr_a_size; i < arr_a_size + arr_b_size; ++i)
	{
		all_digits_array[i] = arr_b[i];
	}

	for (int i = arr_b_size; i < arr_b_size + arr_c_size; ++i)
	{
		all_digits_array[i] = arr_c[i];
	}
}