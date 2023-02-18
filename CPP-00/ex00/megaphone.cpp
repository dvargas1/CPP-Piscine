#include <iostream>

void ft_putstr(char *str){
	int i = -1;
	while(str[++i] != '\0')
		std::cout<<(char)toupper(str[i]);
}

int main(int argc, char **argv){
	int i = 0;

	if(argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while(++i<argc)
			ft_putstr(argv[i]);
	std::cout<<std::endl;
}
