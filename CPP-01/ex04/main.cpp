#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void HelpMenu()
{
	std::cout<<"The first argument should be a File Name"<<std::endl;
	std::cout<<"The second argument should be the replaced string"<<std::endl;
	std::cout<<"The third argument should be the new string"<<std::endl;
	std::cout<<"CYA"<<std::endl;
}


int main(int argc, char **argv){

	if(argc < 4){
		HelpMenu();
		return(1);
	}

	std::string filename = argv[1];
	std::string search = argv[2];
	std::string replace = argv[3];

	std::ifstream file(filename.c_str());

	if(!file)
		return(std::cout<<"Cannot open the file"<<std::endl, 1);
	
	std::stringstream temporary;
	temporary<<file.rdbuf();
	std::string content = temporary.str();

	size_t pos = content.find(search);
	if(pos == std::string::npos)
		return(std::cout<<"Cant find your string on this file, sorry"<<std::endl, 1);
    while (pos != std::string::npos) {
        content = content.substr(0, pos) + replace + content.substr(pos + search.size());
        pos = content.find(search, pos + replace.size());
    }

	std::ofstream Outfile((filename + "_replace").c_str());
	if(!Outfile)
		return(std::cout<<"Cannot open the outfile"<<std::endl, 1);

	Outfile<<content;
	std::cout<<"your file named "<<filename + "_replace"<<" is ready"<<std::endl;
	return 0;

}
