/*
** EPITECH PROJECT, 2020
** pushswap_h
** File description:
** pushswap_h
*/

#ifndef PUSHSWAP_H_
#define PUSHSWAP_H_

#include <stdlib.h>
#include <unistd.h>

//init_list.c
int *init_list(int *list, int argc, char **argv);

//swap_elem.c
void swap_elem(int *array, int index1, int index2);

//choose_correct_fct.c
int find_diff(int *list);
int verif_list(int *list, int size);
int control_swap(int *list, int size);

//control_fcts_by_size
int find_ind_small_int(int *list, int size);
void control_three_size_sup(int *list_a, int size);
void control_three_size_inf(int *list_a, int size);
void control_small_int_ind(int *list_a, int *list_b, int *size_list_a, \
int *size_list_b);
void control_big_size(int *list_a, int *list_b, int size_list_a);

//operations/operations_swap_first
void swap_a(int *list, int size);
void swap_b(int *list, int size);
void swap_ab(int *list_a, int *list_b, int size_list_a, int size_list_b);

//operations/operations_switch_list
void swap_pa(int *list_a, int *list_b, int *size_list_a, int *size_list_b);
void swap_pb(int *list_a, int *list_b, int *size_list_a, int *size_list_b);

//operations/operations_push_beg
void swap_ra(int *list, int size);
void swap_rb(int *list, int size);
void swap_rr(int *list_a, int *list_b, int size_list_a, int size_list_b);

//operations/operations_push_end
void swap_rra(int *list, int size);
void swap_rrb(int *list, int size);
void swap_rrr(int *list_a, int *list_b, int size_list_a, int size_list_b);

//test/redirect_all_std.c
void redirect_all_std(void);

#endif /* !PUSHSWAP_H_ */
