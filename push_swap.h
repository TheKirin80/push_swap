#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_member t_member; 
struct s_member
{
    int             val;
	t_member		*suivant;
	t_member		*precedent;
};

typedef struct s_list t_list;
struct s_list
{
	t_member		*first;
}

size_t	ft_strlen(const char *s);

#endif
