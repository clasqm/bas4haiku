/* config.h.  Generated from config.h.in by configure.  */
/* The version string */
#define VERSION "2.4"

/* The package name. */
#define PACKAGE @PACKAGE@

/* Do you have tgetent()? */
/* #undef HAVE_TGETENT */

/* Should we need to include termcap.h? */
/* #undef HAVE_TERMCAP_H */

/* Should we need to include curses.h? */
/* #undef HAVE_CURSES_H */

/* Is there a tgmath.h? */
/* #undef HAVE_TGMATH_H */

/* Define this as 1 if your system has lrint(). */
#define HAVE_LRINT 1

/* Define this as 1 if your system has nanosleep(). */
#define HAVE_NANOSLEEP 1

/* What does tputs return? */
#define TPUTS_RETURNS_VOID 1

/* Define as 1 if you use dmalloc. */
/* #undef USE_DMALLOC */

/* Define as 1 if you want LR0 parser. */
/* #undef USE_LR0 */

/* Define either for large file support, if your OS needs them. */
/* #undef _FILE_OFFSET_BITS */
/* #undef _LARGE_FILES */

/* Define if you have the msgfmt(1) program and the gettext(3) function. */
#define HAVE_GETTEXT 1

/* Define if timeouts do not work in your termios (broken termios). */
/* #undef USE_SELECT */
