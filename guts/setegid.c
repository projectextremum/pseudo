/* 
 * static int
 * wrap_setegid(gid_t egid) {
 *	int rc = -1;
 */
	if (pseudo_euid == 0 || egid == pseudo_egid || egid == pseudo_rgid || egid == pseudo_sgid) {
		pseudo_egid = egid;
		pseudo_fgid = egid;
		pseudo_client_touchgid();
		rc = 0;
	} else {
		rc = -1;
		errno = EPERM;
	}
/*	return rc;
 * }
 */
