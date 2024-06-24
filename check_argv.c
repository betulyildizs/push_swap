#include "push_swap.h"

static int	ft_contains(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_argv(int argc, char **argv)
{
	int		i;
	long	tmp;
	char	**args;	

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (!ft_isnum(args[i]))
			ft_error("Error");
		if (ft_contains(tmp, args, i))
			ft_error("Error");
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error("Error");
		i++;
	}
	if (argc == 2)
		ft_free(args);
		/*argsye ft_split fonksiyonu ile bir 2 boyutlu dizi atanır, 
		böylece dinamik yer tahsis edilmiş olunur. Ancak diğer durumda, 
		args çift pointerı argv pointerının işaret ettiği çift boyutlu diziye 
		işaret ettirilir sadece, onun tutması gereken yeni bir dizi oluşmaz. 
		ft_split, döndürdüğü dizi ile char **pointer veri türündeki değişkenin 
		daha önce yer tahsis edilmemiş bir şeyi tutmasını sağlar.

argc'nin 2'den fazla olduğu durumlarda argümanlar, terminale tek tek sayılar 
içererek girilmiş demektir. 
Bu durumda verilerin yer tahsisi argv değişkeni ile gerçekleşir. 
Bu durumda args için yeniden yer tahsisine gerek yoktur.

Eğer argc 2'ye eşitse, yani argümanlar boşluk karakteri ile ayrılmış olarak 
tek argümanla alınmışsa, bu argüman ft_split ile çift pointerlı char dizisine dönüştürülür 
ve argsnin tutabilmesi için dinamik yer tahsisi gerçekleşir. Bu durumda, işimiz bittiğinde 
bu belleği serbest bırakmak gerekir.*/
}
