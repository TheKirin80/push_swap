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
}

size_t	ft_strlen(const char *s);

#endif
