#ifndef _HOLBERTON_H
#define _HOLBERTON_H

int get_endianness(void);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int cp_file(const char *file_from, const char *file_to);

#endif /*_HOLBERTON_H*/
