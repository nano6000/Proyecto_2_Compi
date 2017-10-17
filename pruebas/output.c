 
 
 
 ifndef 	 _CTYPE_H_ 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 ifdef   _NONSTD_SOURCE 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 endif   
 
 
 
 
 
 
 if   ! defined ( _DONT_USE_CTYPE_INLINE_ )   &&   \ 
         ( defined ( _USE_CTYPE_INLINE_ )   ||   defined ( __GNUC__ )   ||   defined ( __cplusplus ) ) 
 
 
 __BEGIN_DECLS 
 unsigned   long 	 	 ___runetype ( __darwin_ct_rune_t ) ; 
 __darwin_ct_rune_t 	 ___tolower ( __darwin_ct_rune_t ) ; 
 __darwin_ct_rune_t 	 ___toupper ( __darwin_ct_rune_t ) ; 
 __END_DECLS 
 
 __header_inline   int 
 isascii ( int   _c ) 
 { 
 	 return   ( ( _c   &   ~ 0x7F )   ==   0 ) ; 
 } 
 
 ifdef   USE_ASCII 
 __header_inline   int 
 __maskrune ( __darwin_ct_rune_t   _c ,   unsigned   long   _f ) 
 { 
 	 return   ( int ) _DefaultRuneLocale . __runetype [ _c   &   0xff ]   &   ( __uint32_t ) _f ; 
 } 
 else   
 __BEGIN_DECLS 
 int                           	 __maskrune ( __darwin_ct_rune_t ,   unsigned   long ) ; 
 __END_DECLS 
 endif   
 
 __header_inline   int 
 __istype ( __darwin_ct_rune_t   _c ,   unsigned   long   _f ) 
 { 
 ifdef   USE_ASCII 
 	 return   ! ! ( __maskrune ( _c ,   _f ) ) ; 
 else   
 	 return   ( isascii ( _c )   ?   ! ! ( _DefaultRuneLocale . __runetype [ _c ]   &   _f ) 
 	 	 :   ! ! __maskrune ( _c ,   _f ) ) ; 
 endif   
 } 
 
 __header_inline   __darwin_ct_rune_t 
 __isctype ( __darwin_ct_rune_t   _c ,   unsigned   long   _f ) 
 { 
 ifdef   USE_ASCII 
 	 return   ! ! ( __maskrune ( _c ,   _f ) ) ; 
 else   
 	 return   ( _c   < 0 || _c >= _CACHED_RUNES) ? 0 :
		!!(_DefaultRuneLocale.__runetype[_c] & _f);
#endif /* USE_ASCII */
}

#ifdef USE_ASCII
__DARWIN_CTYPE_inline __darwin_ct_rune_t
__toupper(__darwin_ct_rune_t _c)
{
	return _DefaultRuneLocale.__mapupper[_c & 0xff];
}

__DARWIN_CTYPE_inline __darwin_ct_rune_t
__tolower(__darwin_ct_rune_t _c)
{
	return _DefaultRuneLocale.__maplower[_c & 0xff];
}
#else /* !USE_ASCII */
__BEGIN_DECLS
__darwin_ct_rune_t	__toupper(__darwin_ct_rune_t);
__darwin_ct_rune_t	__tolower(__darwin_ct_rune_t);
__END_DECLS
#endif /* USE_ASCII */

__DARWIN_CTYPE_inline int
__wcwidth(__darwin_ct_rune_t _c)
{
	unsigned int _x;

	if (_c == 0)
		return (0);
	_x = (unsigned int)__maskrune(_c, _CTYPE_SWM|_CTYPE_R);
	if ((_x & _CTYPE_SWM) != 0)
		return ((_x & _CTYPE_SWM) >> _CTYPE_SWS);
	return ((_x & _CTYPE_R) != 0 ? 1 : -1);
}

#ifndef _EXTERNALIZE_CTYPE_INLINES_

#define	_tolower(c)	__tolower(c)
#define	_toupper(c)	__toupper(c)

__DARWIN_CTYPE_TOP_inline int
isalnum(int _c)
{
	return (__istype(_c, _CTYPE_A|_CTYPE_D));
}

__DARWIN_CTYPE_TOP_inline int
isalpha(int _c)
{
	return (__istype(_c, _CTYPE_A));
}

__DARWIN_CTYPE_TOP_inline int
isblank(int _c)
{
	return (__istype(_c, _CTYPE_B));
}

__DARWIN_CTYPE_TOP_inline int
iscntrl(int _c)
{
	return (__istype(_c, _CTYPE_C));
}

/* ANSI -- locale independent */
__DARWIN_CTYPE_TOP_inline int
isdigit(int _c)
{
	return (__isctype(_c, _CTYPE_D));
}

__DARWIN_CTYPE_TOP_inline int
isgraph(int _c)
{
	return (__istype(_c, _CTYPE_G));
}

__DARWIN_CTYPE_TOP_inline int
islower(int _c)
{
	return (__istype(_c, _CTYPE_L));
}

__DARWIN_CTYPE_TOP_inline int
isprint(int _c)
{
	return (__istype(_c, _CTYPE_R));
}

__DARWIN_CTYPE_TOP_inline int
ispunct(int _c)
{
	return (__istype(_c, _CTYPE_P));
}

__DARWIN_CTYPE_TOP_inline int
isspace(int _c)
{
	return (__istype(_c, _CTYPE_S));
}

__DARWIN_CTYPE_TOP_inline int
isupper(int _c)
{
	return (__istype(_c, _CTYPE_U));
}

/* ANSI -- locale independent */
__DARWIN_CTYPE_TOP_inline int
isxdigit(int _c)
{
	return (__isctype(_c, _CTYPE_X));
}

__DARWIN_CTYPE_TOP_inline int
toascii(int _c)
{
	return (_c & 0x7F);
}

__DARWIN_CTYPE_TOP_inline int
tolower(int _c)
{
        return (__tolower(_c));
}

__DARWIN_CTYPE_TOP_inline int
toupper(int _c)
{
        return (__toupper(_c));
}

#if !defined(_ANSI_SOURCE) && (!defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE))
__DARWIN_CTYPE_TOP_inline int
digittoint(int _c)
{
	return (__maskrune(_c, 0x0F));
}

__DARWIN_CTYPE_TOP_inline int
ishexnumber(int _c)
{
	return (__istype(_c, _CTYPE_X));
}

__DARWIN_CTYPE_TOP_inline int
isideogram(int _c)
{
	return (__istype(_c, _CTYPE_I));
}

__DARWIN_CTYPE_TOP_inline int
isnumber(int _c)
{
	return (__istype(_c, _CTYPE_D));
}

__DARWIN_CTYPE_TOP_inline int
isphonogram(int _c)
{
	return (__istype(_c, _CTYPE_Q));
}

__DARWIN_CTYPE_TOP_inline int
isrune(int _c)
{
	return (__istype(_c, 0xFFFFFFF0L));
}

__DARWIN_CTYPE_TOP_inline int
isspecial(int _c)
{
	return (__istype(_c, _CTYPE_T));
}
#endif /* !_ANSI_SOURCE && (!_POSIX_C_SOURCE || _DARWIN_C_SOURCE) */
#endif /* _EXTERNALIZE_CTYPE_INLINES_ */

#else /* not using inlines */

__BEGIN_DECLS
int     isalnum(int);
int     isalpha(int);
int     isblank(int);
int     iscntrl(int);
int     isdigit(int);
int     isgraph(int);
int     islower(int);
int     isprint(int);
int     ispunct(int);
int     isspace(int);
int     isupper(int);
int     isxdigit(int);
int     tolower(int);
int     toupper(int);
int     isascii(int);
int     toascii(int);

#if !defined(_ANSI_SOURCE) && (!defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE))
int     _tolower(int);
int     _toupper(int);
int     digittoint(int);
int     ishexnumber(int);
int     isideogram(int);
int     isnumber(int);
int     isphonogram(int);
int     isrune(int);
int     isspecial(int);
#endif
__END_DECLS

#endif /* using inlines */

#ifdef _USE_EXTENDED_LOCALES_
#include <xlocale/_ctype.h> 
 endif   
 
 endif   
 
  int   c ; 
 
 int   main ( ) 
 { 
 	 a   =   7 ; 
 	 gg   =   10 ; 
 } 
 
 
 int   hola ( ) 
 { 
 	 b   =   8 ; 
 } 
 
 
 
 