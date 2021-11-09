/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:58:52 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/09 22:01:38 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# define ERROR -1
# define OK 0
# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_member	t_member;
struct s_member
{
	int				val;
	int				pos;
	t_member		*suiv;
	t_member		*prec;
};

typedef struct s_list	t_list;
struct s_list
{
	t_member		*first;
	t_member		*last;
	int				len;
};

int			ft_strlen(char *s);
long		ft_atoi(char *str);
int			test_chaine(char *str);
void		ft_putstr_fd(char *s, int fd);
void		ft_putstr(char *s);
void		init_list(t_list *list);
int			rempli_list(t_list *list, char **av, int ac);
int			test_list(t_list *list);
void		position(t_list *list);
void		length_list(t_list	*list);
int			gest_error(t_list *a, t_list *b);
int			libere(t_list *list);
int			swap_a(t_list *a, int i);
int			swap_b(t_list *b, int i);
int			swap_s(t_list *a, t_list *b);
int			push_a(t_list *a, t_list *b);
int			push_b(t_list *a, t_list *b);
int			rotate_a(t_list *list, int i);
int			rotate_b(t_list *list, int i);
int			rotate_r(t_list *a, t_list *b);
void		rot(char c, t_list *list, t_member *trot);
int			rrotate_a(t_list *list, int i);
int			rrotate_b(t_list *list, int i);
int			rrotate_r(t_list *a, t_list *b);
void		rrot(char c, t_list *list, t_member *trot);
int			croissant(t_list *list);
void		recherche(t_list *a, t_list *b);
t_member	*chercheur(t_list *list, int i);
void		top_back_choice(t_list *list, t_member *memb, char c);
void		classement(t_list *a, t_list *b, char c);
int			push_swap(t_list *a, t_list *b);
void		sort_three(t_list *a);
void		sort_five(t_list *a, t_list *b);
char		**ft_split(const char *s, char c);
void		libere_split(char **av);
#endif
