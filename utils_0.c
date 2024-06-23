#include "push_swap.h"

static size_t	ft_toklen(const char *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

char	*ft_strdup(const char *str)
{
	size_t	a;
	char	*r;

	a = ft_strlen(str);
	r = (char *)malloc(sizeof(char) * (a + 1));
	if (!r)
		return (0);
	ft_strlcpy(r, str, a + 1);
	return (r);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	if (!s || !*s)
		return (ft_strdup(""));
	slen = ft_strlen(s);
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	if (start > slen || len == 0)
		return (ft_strdup(""));
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, finish + 1);
	return (new);
}

void    split_cond(const char *s, char **ret, char c, size_t  i)
{
    size_t  len;

	len = 0;
    while (*s && *s != c && ++len)
		++s;
	ret[i++] = ft_substr(s - len, 0, len);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
    size_t  i;

	if (!s)
		return (0);
    i = 0;
	ret = malloc(sizeof(char *) * (ft_toklen(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
            split_cond(s, ret, c, i);
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}
