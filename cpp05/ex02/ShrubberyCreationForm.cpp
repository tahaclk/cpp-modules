#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form(){

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): Form("ShrubberyCreationForm",  target, 145, 137){

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form(copy.getName(), copy.getTarget(), copy.getGradeSign(), copy.getGradeExec()) {

}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

void	ShrubberyCreationForm::executePure() const{
	std::fstream shrubbery;

	shrubbery.open(target + "_shrubbery", std::ios::out | std::ios::trunc);
	if (!shrubbery.is_open())
	{
		std::cerr << "File couldn't open !" << std::endl;
		return ;
	}
	shrubbery <<"                                                         ." << std::endl <<
				"                                              .         ;" << std::endl <<
				"                 .              .              ;%     ;;" << std::endl <<
				"                   ,           ,                :;%  %;" << std::endl <<
				"                    :         ;                   :;%;'     .," << std::endl <<
				"           ,.        %;     %;            ;        %;'    ,;" << std::endl <<
				"             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl <<
				"              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl <<
				"               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
				"                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
				"                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
				"                    `:%;.  :;bd%;          %;@%;'" << std::endl <<
				"                      `@%:.  :;%.         ;@@%;'" << std::endl <<
				"                        `@%.  `;@%.      ;@@%;" << std::endl <<
				"                          `@%%. `@%%    ;@@%;" << std::endl <<
				"                            ;@%. :@%%  %@@%;" << std::endl <<
				"                              %@bd%%%bd%%:;" << std::endl <<
				"                                #@%%%%%:;;" << std::endl <<
				"                                %@@%%%::;" << std::endl <<
				"                                %@@@%(o);  . '" << std::endl <<
				"                                %@@@o%;:(.,'" << std::endl <<
				"                            `.. %@@@o%::;" << std::endl <<
				"                               `)@@@o%::;" << std::endl <<
				"                                %@@(o)::;" << std::endl <<
				"                               .%@@@@%::;" << std::endl <<
				"                               ;%@@@@%::;." << std::endl <<
				"                              ;%@@@@%%:;;;." << std::endl <<
				"                          ...;%@@@@@%%:;;;;,..    tcelik"<< std::endl;
	shrubbery.close();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& value){
	(void) value;
	return (*this);
}
