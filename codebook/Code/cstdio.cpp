int printf(char *format, ...)
int sprintf(char *str, char *format, ...)
int scanf(char *format, ...)
int sscanf(char *str, char *format, ...)

/*
	format
	
	print	:	%[flags][width][.precision][length]specifier
	scan	:	%[*][width][length]specifier
	
	specifier:
	%c	:	character
	%s	:	string of characters
	%d	:	signed decimal
	%u	:	unsigned decimal
	%o	:	unsigned octal
	%x	:	unsigned hexadecimal
	%X	:	unsigned hexadecimal (upper)
	%%	:	%
*/