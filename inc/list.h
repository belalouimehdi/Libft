/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 17:45:13 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/23 14:40:40 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include "libft.h"

BOOL		ft_add_bgn_int_list(intmax_t nbr, t_int_list**list);
BOOL		ft_add_end_int_list(intmax_t nbr, t_int_list **list);
BOOL		ft_add_elem_int_list(int index, intmax_t nbr, t_int_list **list);
BOOL		ft_avg_int_list(const t_int_list *list, long double *avg);

void		ft_bubble_sort_int_list(t_int_list **list);

void		ft_clear_int_list(t_int_list **list);
BOOL		ft_dell_bgn_int_list(t_int_list**list);
BOOL		ft_dell_elem_int_list(intmax_t nbr, t_int_list **list);
BOOL		ft_dell_end_int_list(t_int_list **list);
BOOL		ft_dell_index_int_list(int index, t_int_list **list);

int			ft_getnbr_found_elem_int_list(const intmax_t e,
		const t_int_list *list);
BOOL		ft_getval_int_list(const t_int_list *list, const size_t index,
			intmax_t *data);
BOOL		ft_intervert_head_int_list(t_int_list **list);
BOOL		ft_intervert_head_tow_int_list(t_int_list **list_a,
			t_int_list **list_b);
BOOL		ft_is_empty_int_list(const t_int_list *list);
BOOL		ft_is_in_int_list(const intmax_t e, const t_int_list *list);
BOOL		ft_is_sorted_asc_int_list(const t_int_list *list);
BOOL		ft_is_sorted_des_int_list(const t_int_list *list);
BOOL		ft_max_int_list(const t_int_list *list, intmax_t *max);
void		ft_mergesort_int_list(t_int_list **list, int size);

long double	ft_med_int_list(t_int_list *list);

BOOL		ft_min_int_list(const t_int_list *list, intmax_t *min);
t_int_list	*ft_new_int_list(const intmax_t nbr);
BOOL		ft_push_first_to_list(t_int_list **list_a, t_int_list **list_b);
void		ft_put_int_list(const t_int_list *list);
void		ft_put_tow_piles(t_int_list *list_a, t_int_list *list_b);
BOOL		ft_shift_bottom_int_list(t_int_list **list);
BOOL		ft_shift_bottom_tow_int_list(t_int_list **list_a,
		t_int_list **list_b);
BOOL		ft_shift_top_int_list(t_int_list **list);
BOOL		ft_shift_top_tow_int_list(t_int_list **list_a, t_int_list **list_b);
size_t		ft_size_int_list(const t_int_list *list);

t_int_list	*ft_tab_to_int_list(intmax_t *tab, size_t size);
void		ft_clear_int_list(t_int_list **list);




intmax_t	*ft_int_list_to_int_tab(t_int_list *list);

#endif
