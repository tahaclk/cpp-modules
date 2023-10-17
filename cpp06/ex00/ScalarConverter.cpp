#include "ScalarConverter.hpp"

int			ScalarConverter::type = UDTYPE;
double		ScalarConverter::value = 0;

char		ScalarConverter::charVal = 0;
int			ScalarConverter::intVal = 0;
float		ScalarConverter::floatVal = 0.0f;
double		ScalarConverter::doubleVal = 0.0;

std::string ScalarConverter::charTxt = "";
std::string ScalarConverter::intTxt = "";
std::string ScalarConverter::floatTxt = "";
std::string ScalarConverter::doubleTxt = "";

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter& copy){ *this = copy; }

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy){
	(void) copy;
	return (*this);
}

ScalarConverter::~ScalarConverter(){}

int	ScalarConverter::setType(const std::string& input){
	char	*endptr;
	value = strtod(input.c_str(), &endptr);
	if (input.length() == 1 && isprint(input[0]) && !isnumber(input[0]))
		type = CHAR;
	else if (endptr != input.c_str() && *endptr == '\0'){
		if (input.find('.') != std::string::npos)
			type = DOUBLE;
		else
			type = INT;
	}else if (endptr != input.c_str() && *endptr == 'f' && *(++endptr)== '\0'){
		type = FLOAT;
	}
	return (type);
}

int	ScalarConverter::uniqControl(const std::string& input){
	if (input.compare("nan") == 0 || input.compare("nanf") == 0){
		std::cout<<"char: impossible"<<std::endl;
		std::cout<<"int: impossible"<<std::endl;
		std::cout<<"float: nanf"<<std::endl;
		std::cout<<"double: nan"<<std::endl;
		return (1);
	}else if (input.compare("+inf") == 0 || input.compare("+inff") == 0){
		std::cout<<"char: impossible"<<std::endl;
		std::cout<<"int: impossible"<<std::endl;
		std::cout<<"float: +inff"<<std::endl;
		std::cout<<"double: +inf"<<std::endl;
		return (1);
	}else if (input.compare("-inf") == 0 || input.compare("-inff") == 0){
		std::cout<<"char: impossible"<<std::endl;
		std::cout<<"int: impossible"<<std::endl;
		std::cout<<"float: -inff"<<std::endl;
		std::cout<<"double: -inf"<<std::endl;
		return (1);
	}
	return (0);
}

void	ScalarConverter::fromChar(const std::string& input){
	charVal = input[0];
	intVal = static_cast<int>(input[0]);
	floatVal = static_cast<float>(input[0]);
	doubleVal = static_cast<double>(input[0]);
}

void	ScalarConverter::fromInt(const std::string& input){
	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		intTxt = "impossible";
	intVal = static_cast<int>(value);

	if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
		charTxt = "impossible";
	else if (!isprint(intVal))
		charTxt = "Non displayable";
	else
		charVal = static_cast<char>(value);
	floatVal = static_cast<float>(value);
	doubleVal = static_cast<double>(value);
	(void)input;
}

void	ScalarConverter::fromFloat(const std::string& input){
	if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
		charTxt = "impossible";
	else if (!isprint(value))
		charTxt = "Non displayable";
	else
		charVal = static_cast<char>(value);

	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		intTxt = "impossible";
	else
		intVal = static_cast<int>(value);
	floatVal = static_cast<float>(value);
	doubleVal = static_cast<double>(value);
	(void)input;
}

void	ScalarConverter::fromDouble(const std::string& input){
	if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
		charTxt = "impossible";
	else if (!isprint(value))
		charTxt = "Non displayable";
	else
		charVal = static_cast<char>(value);

	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		intTxt = "impossible";
	else
		intVal = static_cast<int>(value);

	floatVal = static_cast<float>(value);
	doubleVal = static_cast<double>(value);
	(void)input;
}

void	ScalarConverter::printVals(const std::string& input){
	std::cout << "char: ";
	if (charTxt != "")
		std::cout << charTxt << std::endl;
	else
		std::cout << "\'" << charVal << "\'" << std::endl;

	std::cout << "int: ";
	if (intTxt != "")
		std::cout << intTxt << std::endl;
	else
		std::cout << intVal << std::endl;

	std::cout << "float: ";
	if (floatTxt != "")
		std::cout << floatTxt << std::endl;
	else if (floatVal == static_cast<int>(floatVal) && floatVal < 1000000.0f)
		std::cout << floatVal << ".0f" << std::endl;
	else
		std::cout << floatVal << "f" << std::endl;
	std::cout << "double: ";
	if (doubleTxt != "")
		std::cout << doubleTxt << std::endl;
	else if (doubleVal == static_cast<int>(doubleVal) && doubleVal < 1000000.0)
		std::cout << doubleVal << ".0" << std::endl;
	else
		std::cout << doubleVal << std::endl;
	(void)input;
}

void	ScalarConverter::convert(const std::string& input){
	if (input.empty())
		return ;
	if (uniqControl(input))
		return ;
	switch(setType(input)){
		case CHAR:
			fromChar(input);
			break;
		case INT:
			fromInt(input);
			break;
		case FLOAT:
			fromFloat(input);
			break;
		case DOUBLE:
			fromDouble(input);
			break;
		default:
			charTxt = "impossible";
			intTxt = "impossible";
			floatTxt = "impossible";
			doubleTxt = "impossible";
	}
	printVals(input);
}
