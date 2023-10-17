#include <iostream>
#include <fstream>

void    replace_file(std::ifstream &file, std::string file_name, std::string text, std::string n_text){
    std::ofstream   outfile;
    std::string     all_lines;
    size_t          pos;
    char            c;

    while (!file.eof() && file >> std::noskipws >> c)
        all_lines += c;

    outfile.open((file_name + ".replace").c_str());
    if (outfile.fail())
        return ;

    for (int i = 0; i < (int) all_lines.size(); i++){
        pos = all_lines.find(text, i);
        if (pos != std::string::npos && (int) pos == i)
        {
            outfile << n_text;
            i += text.size() - 1;
        }
        else
        {
            outfile << all_lines.c_str()[i];
        }
    }
    outfile.close();
}

void    open_file(std::ifstream &file, int ac, char **av){
    if (ac == 4)
        file.open(av[1]);
    else
    {
        std::cout << "Inputs wrong" << std::endl;
        exit(1);
    }
    if (!file.is_open()){
        std::cout << "File is not found!" << std::endl;
        exit(1);
    }
}

int main(int ac, char **av){
    std::ifstream file;

    open_file(file, ac, av);
    replace_file(file, av[1], av[2], av[3]);
    file.close();
    return (0);
}
