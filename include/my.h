/*
** EPITECH PROJECT, 2020
** my_h
** File description:
** my_h
*/

#ifndef MY_H_
# define MY_H_

void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(void);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
char **my_str_to_word_array(char const *str);
int search_integer(int index, char const *str);
int verif_integer(int index, char const *str);
int sign_verification(int index, char const *str);
void my_put_nbr_extrem(void);
int is_digit_lowercase_or_uppercase(char x);
int is_lowercase(char x);
int is_uppercase(char x);
char *put_lowercase(char *str);
void c_and_str_index_incrementation(int *c, int *str_index);
int count_word_len(char const *str, int str_index);
int count_words(char const *str);
int is_alphanum_char(char c);
int my_show_word_array(char * const *tab);

#endif
