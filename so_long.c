#include <stdio.h>
int ft_bin(char *str)
{
	int i;
	char c;
	i = 0;
	c = '.';
	while(str)
	{
		if(str[i] == c)
			return(1);
		i++;
	}
	return (0);
}
int main(int ac,char **av)
{
	int i;
	char c;
	char *str;
	i = 0;
	c = '.';
	if (ac==2)
	{
		while(av[1][i])
		{
			if(av[1][i]==c)
			{
				i+=1;
				if(av[1][i]=='b')
				{
					i+=1;
					if(av[1][i]=='e')
					{
						i+=1;
						if(av[1][i]=='r')
						{
							i+=1;
							if(av[1][i]=='\0');
								return(1);
						}

					}
				}
				
			}
			i++;		
		}

	}
}
