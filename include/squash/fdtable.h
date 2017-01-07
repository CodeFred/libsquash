/*
 * Copyright (c) 2016-2017 Minqi Pan <pmq2001@gmail.com>
 *                         Shengyuan Liu <sounder.liu@gmail.com>
 *
 * This file is part of libsquash, distributed under the MIT License
 * For full terms see the included LICENSE file
 */

#ifndef FDTABLE_H_60F13289
#define FDTABLE_H_60F13289

#include "squash/common.h"

struct squash_file {
	sqfs *fs;
	sqfs_inode node;
	struct stat st;
	uint64_t pos;
};

struct squash_fdtable {
	int nr;
	struct squash_file **fds;
};

extern struct squash_fdtable squash_global_fdtable;

#endif /* end of include guard: FDTABLE_H_60F13289 */
