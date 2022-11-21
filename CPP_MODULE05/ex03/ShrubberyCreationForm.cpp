#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form(_target, 145, 137)
{
	target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & obj) : Form(obj)
{
	target = obj.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & obj)
{
	Form::operator=(obj);
	target = obj.target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (getIsSigned() == false)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > getGradeToE())
		throw Form::GradeTooLowException();
	std::ofstream file;
	file.open(target + "_shrubbery");
	file << "###########################'`################################" << std::endl;
	file << "###########################  V##'############################" << std::endl;
	file << "#########################V'  `V  ############################" << std::endl;
	file << "########################V'      ,############################" << std::endl;
	file << "#########`#############V      ,A###########################V" << std::endl;
	file << "########' `###########V      ,###########################V',#" << std::endl;
	file << "######V'   ###########l      ,####################V~~~~'',###" << std::endl;
	file << "#####V'    ###########l      ##P' ###########V~~'   ,A#######" << std::endl;
	file << "#####l      d#########l      V'  ,#######V~'       A#########" << std::endl;
	file << "#####l      ##########l         ,####V''         ,###########" << std::endl;
	file << "#####l        `V######l        ,###V'   .....;A##############" << std::endl;
	file << "#####A,         `######A,     ,##V' ,A#######################" << std::endl;
	file << "#######A,        `######A,    #V'  A########'''''##########''" << std::endl;
	file << "##########,,,       `####A,           `#''           '''  ,,," << std::endl;
	file << "#############A,                               ,,,     ,######" << std::endl;
	file << "######################oooo,                 ;####, ,#########" << std::endl;
	file << "##################P'                   A,   ;#####V##########" << std::endl;
	file << "#####P'    ''''       ,###             `#,     `V############" << std::endl;
	file << "##P'                ,d###;              ##,       `V#########" << std::endl;
	file << "##########A,,   #########A              )##,    ##A,..,ooA###" << std::endl;
	file << "#############A, Y#########A,            )####, ,#############" << std::endl;
	file << "###############A ############A,        ,###### ##############" << std::endl;
	file << "###############################       ,#######V##############" << std::endl;
	file << "###############################      ,#######################" << std::endl;
	file << "##############################P    ,d########################" << std::endl;
	file << "##############################'    d#########################" << std::endl;
	file << "##############################     ##########################" << std::endl;
	file << "##############################     ##########################" << std::endl;
	file << "#############################P     ##########################" << std::endl;
	file << "#############################'     ##########################" << std::endl;
	file << "############################P      ##########################" << std::endl;
	file << "###########################P'     ;##########################" << std::endl;
	file << "###########################'     ,###########################" << std::endl;
	file << "##########################       ############################" << std::endl;
	file << "#########################       ,############################" << std::endl;
	file << "########################        d###########P'    `Y#########" << std::endl;
	file << "#######################        ,############        #########" << std::endl;
	file << "######################        ,#############        #########" << std::endl;
	file << "#####################        ,##############b.    ,d#########" << std::endl;
	file << "####################        ,################################" << std::endl;
	file << "###################         #################################" << std::endl;
	file << "##################          #######################P'  `V##P'" << std::endl;
	file << "#######P'     `V#           ###################P'" << std::endl;
	file << "#####P'                    ,#################P'" << std::endl;
	file << "###P'                      d##############P''" << std::endl;
	file << "##P'                       V##############'" << std::endl;
	file << "#P'                         `V###########'" << std::endl;
	file << "#'                             `V##P'" << std::endl;
}