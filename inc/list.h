/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 17:45:13 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/05 18:52:42 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include "libft.h"

typedef struct			s_int_list
{
	intmax_t			data;
	struct s_int_list	*next;
}						t_int_list;

BOOL					ft_add_bgn_int_list(intmax_t nbr, t_int_list**list);
BOOL					ft_add_end_int_list(intmax_t nbr, t_int_list **list);
BOOL					ft_avg_int_list(const t_int_list *list,
		long double *avg);
void					ft_clear_int_list(t_int_list **list);
BOOL					ft_dell_bgn_int_list(t_int_list**list);
BOOL					ft_dell_end_int_list(t_int_list **list);
int						ft_getnbr_found_elem_int_list(const intmax_t e,
		const t_int_list *list);
BOOL					ft_getval_int_list(const t_int_list *list,
		const size_t index, intmax_t *data);
BOOL					ft_is_empty_int_list(const t_int_list *list);
BOOL					ft_is_in_int_list(const intmax_t e,
		const t_int_list *list);
BOOL					ft_is_sorted_asc_int_list(const t_int_list *list);
BOOL					ft_is_sorted_des_int_list(const t_int_list *list);
BOOL					ft_max_int_list(const t_int_list *list, intmax_t *max);
BOOL					ft_min_int_list(const t_int_list *list, intmax_t *min);
t_int_list				*ft_new_int_list(const intmax_t nbr);
void					ft_put_int_list(const t_int_list *list);
size_t					ft_size_int_list(const t_int_list *list);

#endif
