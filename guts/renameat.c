/* 
 * static int
 * wrap_renameat(int olddirfd, const char *oldpath, int newdirfd, const char *newpath) {
 *	int rc = -1;
 */

	pseudo_diag("help! unimplemented renameat [%s -> %s].\n", oldpath, newpath);
	rc = real_renameat(olddirfd, oldpath, newdirfd, newpath);

/*	return rc;
 * }
 */
