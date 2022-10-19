#include "replace.hpp"

void replace(char *srcf, char *s1, char *s2)
{
	std::string s;
	std::string src(srcf);
	std::ifstream sfile(src);
	std::ofstream dfile(src + ".replace");
	while (!sfile.eof())
	{
		sfile >> s;
		if (!s.compare(s1))
			dfile << s2;
		else
			dfile << s;
		dfile << " ";       
	}
	sfile.close();
}