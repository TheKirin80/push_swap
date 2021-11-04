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

typedef struct s_member t_member; 
struct s_member
{
    int             val;
	t_member		*suiv;
	t_member		*prec;
};

typedef struct s_list t_list;
struct s_list
{
	t_member		*first;
	t_member		*last;
};

int		ft_strlen(char *s);
long		ft_atoi(char *str);
int		test_chaine(char *str);
void	ft_putstr(char *s);
void	init_list(t_list *list);
int		rempli_list(t_list *list, char **av);
int		gest_error(t_list *a, t_list *b);
int		libere(t_list *list);
int		swap_a(t_list *a, int i);
int		swap_b(t_list *b, int i);
int		swap_s(t_list *a, t_list *b);
int		push_a(t_list *a, t_list *b);
int		push_b(t_list *a, t_list *b);
int		rotate_a(t_list *list, int i);
int		rotate_b(t_list *list, int i);
int		rotate_r(t_list *a, t_list *b);
int		rrotate_a(t_list *list, int i);
int		rrotate_b(t_list *list, int i);
int		rrotate_r(t_list *a, t_list *b);
#endif
