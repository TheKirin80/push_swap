#include "push_swap.h"

void    printlist(t_list *a)
{
    int i = 1;
    t_member    *trot = a->first;
    while ((trot != NULL))
    {
        
        printf("val : %i ; i = %i\n", trot->val, i);
        trot = trot->suiv;
        i++;
    }
}

void    printlists(t_list *a, t_list *b)
{
    int i = 1;
    t_member    *trota = a->first;
    t_member    *trotb = b->first;
    while ((trota != NULL))
    {
        
        printf("pile a ; val : %i ; i = %i\n", trota->val, i);
        trota = trota->suiv;
        i++;
    }
    printf("\n");
    i = 1;
    while ((trotb != NULL))
    {
        
        printf("pile b ; val : %i ; i = %i\n", trotb->val, i);
        trotb = trotb->suiv;
        i++;
    }
    printf("\n");
}


int main(int ac, char **av)
{
	t_list		a;
	t_list		b;

    (void)ac;
	init_list(&b);
	if (rempli_list(&a, av) == ERROR || test_list(&a) == ERROR)
		return (gest_error(&a, &b));
    

    printf("debut test \n");
    printlists(&a, &b);
    // push_b(&a, &b);
    // printlists(&a, &b);
    // push_b(&a, &b);
    // printlists(&a, &b);
    // push_b(&a, &b);
    // printlists(&a, &b);
    // rotate_a(&a, OK);
    // rotate_b(&b, OK);
    // printlists(&a, &b);
    // rrotate_a(&a, OK);
    // rrotate_b(&b, OK);
    // printlists(&a, &b);
    // rotate_r(&a, &b);
    // printlists(&a, &b);
    // rrotate_r(&a, &b);
    push_swap(&a, &b);
    printlists(&a, &b);
    libere(&a);
    libere(&b);
	return (0);
}