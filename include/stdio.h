#ifndef _STDIO_H
#define _STDIO_H

#include <stddef.h>
#include <stdarg.h>

typedef void FILE;  /* opaque to users */
#define EOF (-1)

#ifdef _WIN32
extern char* __iob_func();
#define stdin  (&__iob_func()[0])
#define stdout (&__iob_func()[48])
#define stderr (&__iob_func()[96])
#else
extern FILE *stdin, *stdout, *stderr;
#endif

typedef long fpos_t;
extern int remove(const char *filename);
extern int rename(const char *old, const char *new_);
extern FILE *tmpfile(void);
extern char *tmpnam(char *s);
extern int fclose(FILE *stream);
extern int fflush(FILE *stream);
extern FILE *fopen(const char * filename, const char * mode);
extern FILE *freopen(const char * filename, const char * mode, FILE * stream);
extern void setbuf(FILE * stream, char * buf);
extern int setvbuf(FILE * stream, char * buf, int mode, size_t size);
extern int fprintf(FILE * stream, const char * format, ...);
extern int fscanf(FILE * stream, const char * format, ...);
extern int printf(const char * format, ...);
extern int scanf(const char * format, ...);
extern int snprintf(char * s, size_t n, const char * format, ...);
extern int sprintf(char * s, const char * format, ...);
extern int sscanf(const char * s, const char * format, ...);
extern int vfprintf(FILE * stream, const char * format, va_list arg);
extern int vfscanf(FILE * stream, const char * format, va_list arg);
extern int vprintf(const char * format, va_list arg);
extern int vscanf(const char * format, va_list arg);
extern int vsnprintf(char * s, size_t n, const char * format, va_list arg);
extern int vsprintf(char * s, const char * format, va_list arg);
extern int vsscanf(const char * s, const char * format, va_list arg);
extern int fgetc(FILE *stream);
extern char *fgets(char * s, int n, FILE * stream);
extern int fputc(int c, FILE *stream);
extern int fputs(const char * s, FILE * stream);
extern int getc(FILE *stream);
extern int getchar(void);
extern char *gets(char *s);
extern int putc(int c, FILE *stream);
extern int putchar(int c);
extern int puts(const char *s);
extern int ungetc(int c, FILE *stream);
extern size_t fread(void * ptr, size_t size, size_t nmemb, FILE * stream);
extern size_t fwrite(const void * ptr, size_t size, size_t nmemb, FILE * stream);
extern int fgetpos(FILE * stream, fpos_t * pos);
extern int fseek(FILE *stream, long int offset, int whence);
extern int fsetpos(FILE *stream, const fpos_t *pos);
extern long int ftell(FILE *stream);
extern void rewind(FILE *stream);
extern void clearerr(FILE *stream);
extern int feof(FILE *stream);
extern int ferror(FILE *stream);
extern void perror(const char *s);

#endif
