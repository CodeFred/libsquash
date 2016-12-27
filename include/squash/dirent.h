/*
 * Copyright (c) 2016-2017 Minqi Pan and Shengyuan Liu
 *
 * This file is part of libsquash, distributed under the MIT License
 * For full terms see the included LICENSE file
 */

#ifndef DIRENT_H_245C4278
#define DIRENT_H_245C4278

#include <sys/types.h>
#include <sys/dir.h>

typedef struct {
	sqfs *fs;
	int	fd;	/* virtual file descriptor associated with directory */
	sqfs_inode node;
	sqfs_dir dir;
	// CAUTION: this is a big struct, mind the SQUASHFS_NAME_LEN 256 size
	struct {
		sqfs_dir_entry entry;
		struct dirent sysentry;
		sqfs_name name;
		bool not_eof;
	} *entries;
	size_t nr; /* allocated size for entries */
	int actual_nr; /* actual number of entries read */
	long loc;	/* offset in current buffer */
} SQUASH_DIR;

sqfs_err squash_dir_realloc(SQUASH_DIR *dir, size_t nr);

#endif /* end of include guard: DIRENT_H_245C4278 */
