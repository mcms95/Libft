/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucardos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:34:24 by nucardos          #+#    #+#             */
/*   Updated: 2023/06/23 19:34:27 by nucardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	i = 0;
	if (!ft_strlen((char *)needle))
		return ((char *)haystack);
	if (n == 0)
		return (NULL);
	while (haystack[i] && i <= n - needle_len)
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
	const char s1[] = " ";
	const char s2[] = "";
	size_t n = 0;

	printf("%s\n", ft_strnstr(0x561c7f255033: "abcdefgh", "abc", 2));
	return 0;
}
*/
