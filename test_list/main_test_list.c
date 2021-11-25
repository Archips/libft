#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	ft_printlst(t_list *list)
{
	if (list)
	{
		while (list)
		{
			printf("%s\n", list->content);
			list = list->next;
		}
	}
}
void	ft_iter_d(void *ct)
{
	int i;
	void	*c;
	char	*pouet;

	c = ct;
	i = 0;
	pouet = (char *)c;
	pouet[0] = 'v';
/*	pouet[0] = 'V';
	printf("%s\n", pouet);
	while (pouet[i])
	{
		printf("%c\n", pouet[i]);
		if (pouet[i] == 'A')
		{
			pouet[i] = 'w';
			printf("Now pouet[%d] is %c\n", i, pouet[i]);
		}
		i ++;
	}
	return (c); */
}
void	*ft_map(void *ct)
{
	int i;
	void	*c;
	char	*pouet;

	c = ct;
	i = 0;
	pouet = (char *)c;
/*	pouet[0] = 'V';
	printf("%s\n", pouet);
	while (pouet[i])
	{
		printf("%c\n", pouet[i]);
		if (pouet[i] == 'A')
		{
			pouet[i] = 'w';
			printf("Now pouet[%d] is %c\n", i, pouet[i]);
		}
		i ++;
	}*/
	return (c);
}

void    ft_del(void *content)
{
	free(content);
}

int main(void)
{
	t_list *list;

	list = ft_lstnew("aaa");
	ft_lstadd_back(&list, ft_lstnew("bbb"));
	ft_lstadd_back(&list, ft_lstnew("ccc"));
	ft_lstadd_back(&list, ft_lstnew("ddd"));
	ft_lstadd_back(&list, ft_lstnew("eee"));
	ft_lstadd_back(&list, ft_lstnew("fff"));
	ft_lstadd_back(&list, ft_lstnew("ggg"));
	ft_lstadd_front(&list, ft_lstnew("AAA"));
	ft_printlst(list);
	printf("%d\n", ft_lstsize(list));
	t_list *last = ft_lstlast(list);
	char *last_content = last->content;
	printf("%s\n", last_content);
	t_list *new_list;
	new_list = ft_lstmap(list, &ft_map, *ft_del);
	ft_printlst(new_list);
	ft_lstiter(new_list, &ft_iter_d);
	//ft_lstclear(&list, free);
	ft_printlst(new_list);
}
