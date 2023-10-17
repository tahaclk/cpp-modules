#pragma once
#include <iostream>

enum {
	UDTYPE = -1,
	INT = 0,
	DOUBLE = 1,
	FLOAT = 2,
	CHAR = 3
};

class ScalarConverter{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter& operator=(const ScalarConverter& copy);
		~ScalarConverter();
	public:
		static void	convert(const std::string& input);
	private:
		static int	setType(const std::string& input);
		static int	uniqControl(const std::string& input);
		static void	fromChar(const std::string& input);
		static void	fromInt(const std::string& input);
		static void	fromFloat(const std::string& input);
		static void	fromDouble(const std::string& input);
		static void	printVals(const std::string& input);
	private:
		static int		type;
		static double	value;
		static char		charVal;
		static int		intVal;
		static float	floatVal;
		static double	doubleVal;
		static std::string	charTxt;
		static std::string	intTxt;
		static std::string	floatTxt;
		static std::string	doubleTxt;
};
