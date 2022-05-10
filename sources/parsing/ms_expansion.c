/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_expansion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervoni <jcervoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:00:46 by jcervoni          #+#    #+#             */
/*   Updated: 2022/05/10 19:09:20 by jcervoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_to_expand(t_arg *arg, t_env *env)
{
	int	i;
	int	len;
	
	i = 0;
	len = ft_strlen(arg->content);
	if (arg->token == TOKEN_DQUOTE)
	{
		while (arg->content != '\0')
		{
			if (arg->content[i] == '$' && i < len - 2)
				ft_dquote_expand(arg, env, i);
			i++;
		}
	}
}

void	ft_dquote_expand(t_arg *arg, t_env *env, int end)
{
	char	*temp;
	char	*sub;
	int		i;

	i = 0;
	if (end != 0)
		sub = ft_substr(arg->content, 0, end);
}