#include <iostream>
#include <fstream>

std::string	ft_replace(std::string line, std::string str1, std::string str2)
{
	std::size_t idx;
	std::size_t n;

	idx = 0;
	while ((n = line.find(str1, idx)) != std::string::npos)
	{
		line.erase(n, str1.length());
		line.insert(n, str2);
		idx = n + str2.length();
	}
	return line;
}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "ERROR : Wrong argument" << std::endl;
		return 1;
	}

	std::string replaced_name = argv[1];

	replaced_name.append(".replace");	

	std::ifstream ifs;

	ifs.open(argv[1]);
	if (ifs.fail())
	{
		std::cout << "ERROR : Cannot open" << argv[1] << std::endl;
		return 1;
	}

	std::ofstream ofs;

	ofs.open(replaced_name);
	if (ofs.fail())
	{
		std::cout << "ERROR : Cannot open" << replaced_name << std::endl;
		ifs.close();
		return 1;
	}

	while (true)
	{
		std::string line;
		getline(ifs, line);

		ofs << ft_replace(line, argv[2], argv[3]);
		if (ifs.eof())
			break;
		ofs << std::endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}