/* user and group to drop privileges to */
static const char *user  = "aiden";
static const char *group = "wheel";
/* FIXME: when using with -i, user must be the image owner */

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

