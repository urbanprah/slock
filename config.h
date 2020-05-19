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

/* default message */
static const char * message = "suckless - `software that sucks less`";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-misc-fixed-medium-r-semicondensed--0-0-200-200-c-0-iso8859-1";
