
#include "libft.h"
#include <stdio.h>


/*char f(unsigned int i, char c)
{
	return (c);


}*/
/*int main ()
{
        char *k ;
	k = ft_strmapi("abcde",f);

	printf ("%s" , k);
	free(k);
	return(0);
	t_list *v;
	v = ft_lstnew("ahmad abukja");
	printf("%s" ,(char*)v->content);
        t_list *lst;
	t_list *new;
	t_list *tem;
	lst = ft_lstnew("moath abusham ");
	new = ft_lstnew("yazeed abubarkat");
	ft_lstadd_front(&lst , new);
	tem = lst;
	while(tem)
	{
		printf("%s\n" , (char*)tem->content);
		tem = tem ->next;
	}
	printf("%d",ft_lstsize(lst));
	printf("%s\n" , ft_lstlast(lst)->content);
	return (0);
	

}*/
void *my_f(void *content)
{
	return (ft_strdup((char *)content)):

}
void del (void *content)
{
	free(content);

}
int main()
{
	 t_list *lst;
	 t_list *new;
        t_list *tem;
        lst = ft_lstnew(ft_strdup("moath abusham "));
        new = ft_lstnew(ft_strdup("yazeed abubarkat"));
	tem = lst;
        while(tem)
        {
                printf("%s\n" , (char*)tem->content);
                tem = tem ->next;
        }
	ft_lstdelone(new , del);










}
