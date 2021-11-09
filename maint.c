#include "push_swap.h"

void printfi(int i)
{
	printf ("Je suis ici a i = %i\n", i);
}

void    printlist(t_list *a)
{
    int i = 1;
    t_member    *trot = a->first;
    printf("\n");
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

printf("\n");
    while ((trota != NULL))
    {
        
        printf("pile a ; val : %i ; i = %i ; pos = %i\n", trota->val, i, trota->pos);
        trota = trota->suiv;
        i++;
    }

    printf("\n");
    i = 1;
    while ((trotb != NULL))
    {
        
        printf("pile b ; val : %i ; i = %i ; pos = %i\n", trotb->val, i, trotb->pos);
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
    

    //printf("debut test \n");
    //push_b(&a, &b);
    //printlists(&a, &b);
    //push_b(&a, &b);
    //printlists(&a, &b);
    //push_b(&a, &b);
    //printlists(&a, &b);
    //rotate_b(&a, OK);
    //rotate_a(&b, OK);
    // rotate_b(&b, OK);
    // printlists(&a, &b);
    // rrotate_a(&a, OK);
    
    // printlists(&a, &b);
    // rotate_r(&a, &b);
    // printlists(&a, &b);
    // rrotate_r(&a, &b);
    push_swap(&a, &b);
    //printf("len = %i\n", a.len);
    //printlists(&a, &b);
    //rotate_b(&a, OK);
    //rotate_a(&b, OK);
    //printlists(&a, &b);
    libere(&a);
    libere(&b);
	return (0);
}