#include "push_swap.h"

void    printlist(t_member *trot)
{
    int i = 1;
    while ((trot != NULL))
    {
        
        printf("val : %i ; i = %i\n", trot->val, i);
        trot = trot->suiv;
        i++;
    }
}


int main(int ac, char **av)
{
	t_list		a;
	t_list		b;
    t_member    *trota;
    t_member    *trotb;

    (void)ac;
    trotb = NULL;
	init_list(&b);
	if (rempli_list(&a, av) == ERROR)
	{
		gest_error(&a, &b);
		return (0);
	}
    trota = a.first;
    printlist(trota);
    swap_a(&a);
    swap_a(&a);
    trota = a.first;
    printlist(trota);
    libere(&a);
    libere(&b);
	return (0);
}