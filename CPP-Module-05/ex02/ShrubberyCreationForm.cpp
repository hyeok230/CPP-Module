#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreation", 145, 137), target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : Form(src), target(src.target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	Form::operator=(src);
	target = src.target;
	return (*this);
}

void	ShrubberyCreationForm::action(void) const
{
	std::string filename = target + "_shrubbery";
	std::ofstream writeFile(filename);

	if (writeFile.is_open() == false)
		throw std::ofstream::failure("Could not open file " + target + "_shrubbery");
	writeFile << 
"                                  .    						\n" 
"                                   .         ;					\n"
"      .              .              ;%     ;;					\n"
"        ,           ,                :;%  %;					\n"
"         :         ;                   :;%;'     .,			\n"
",.        %;     %;            ;        %;'    ,;				\n"
"  ;       ;%;  %%;        ,     %;    ;%;    ,%'				\n"
"   %;       %;%;      ,  ;       %;  ;%;   ,%;'				\n"
"    ;%;      %;        ;%;        % ;%;  ,%;'					\n"
"     `%;.     ;%;     %;'         `;%%;.%;'					\n"
"      `:;%.    ;%%. %@;        %; ;@%;%'						\n"
"         `:%;.  :;bd%;          %;@%;'							\n"
"           `@%:.  :;%.         ;@@%;'							\n"
"             `@%.  `;@%.      ;@@%;							\n"
"               `@%%. `@%%    ;@@%;								\n"
"                 ;@%. :@%%  %@@%;								\n"
"                   %@bd%%%bd%%:;								\n"
"                     #@%%%%%:;;								\n"
"                     %@@%%%::;									\n"
"                     %@@@%(o);  . '							\n"
"                     %@@@o%;:(.,'								\n"
"                 `.. %@@@o%::;									\n"
"                    `)@@@o%::;									\n"
"                     %@@(o)::;									\n"
"                    .%@@@@%::;									\n"
"                    ;%@@@@%::;.								\n"
"                   ;%@@@@%%:;;;.								\n"
"               ...;%@@@@@%%:;;;;,.. 							\n" ;			
	writeFile.close();
}