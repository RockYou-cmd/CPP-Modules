#include "replace.hpp"

void replace(char *srcf, char *s1, char *s2)
{
	std::string s;
	std::string src(srcf);
	std::ifstream sfile(src);
	std::ofstream dfile(src + ".replace");
	int i = 0;

	if (!sfile.is_open())
	{
		std::cout << "File not found!" << std::endl;
		return;
	}
	while (1)
	{
		sfile >> s;
		if (sfile.eof())
			break;
		if (!s.compare(s1))
		{
			i = 1;
			dfile << s2;
		}
		else
			dfile << s;
		dfile << " ";       
	}
	if (i)
		std::cout << "string replaced!" << std::endl;
	else
		std::cout << "string not found!" << std::endl;
	sfile.close();
}