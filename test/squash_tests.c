/*
 * Copyright (c) 2016 Minqi Pan
 *
 * This file is part of libsquash, distributed under the MIT License
 * For full terms see the included LICENSE file
 */

#include "squash.h"
#include "squash_tests.h"

int main(int argc, char const *argv[])
{
	test_squash_internals();
	test_one_file();
	return 0;
}
