/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 23:58:28 by alematos          #+#    #+#             */
/*   Updated: 2023/01/24 23:58:28 by alematos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    size_t	i;

    i = 0;
    if (dst == 0 && src == 0)
        return (0);
    if (dst > src)
    {
        while (len > 0)
        {
            ((char *)dst)[len - 1] = ((char *)src)[len - 1];
            len--;
        }
    }
    else
    {
        while (i < len)
        {
            ((char *)dst)[i] = ((char *)src)[i];
            i++;
        }
    }
    return (dst);
}