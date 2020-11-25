/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-capu <fde-capu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 09:49:11 by fde-capu          #+#    #+#             */
/*   Updated: 2020/05/13 13:51:25 by fde-capu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	subst_quotes(void)
{
	t_com	*c;
	size_t	i;
	char	*unq;

	c = g_com_head;
	while (c)
	{
		i = 0;
		while (++i < c->argc)
		{
			unq = ft_removequotes(c->args[i]);
			free(c->args[i]);
			c->args[i] = unq;
		}
		c = c->next;
	}
	return ;
}

void	subst_envs(void)
{
	t_com	*c;
	size_t	i;

	c = g_com_head;
	while (c)
	{
		i = 0;
		while (++i < c->argc)
			subst_env_line(&c->args[i]);
		c = c->next;
	}
	return ;
}

void	subst_env_line(char **str)
{
	char	*p;
	int		on;
	char	*out;
	char	*word;

	out = ft_strdup("");
	p = *str;
	on = 1;
	while (*p)
	{
		p += *p == '\\' ? 2 : 0;
		if (*p == '\"')
			on = on ? 0 : 1;
		if ((*p == '$') && on)
		{
			word = ft_get_word(p + 1);
			out = ft_strcatx(out, get_env(word));
			p += ft_strlen(word) + 1;
			free(word);
		}
		else
			out = ft_strcatchrx(out, p++);
	}
	*str = ft_strx(out, *str);
	return ;
}
