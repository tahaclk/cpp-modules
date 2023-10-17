#pragma once
#include <iostream>
#include <unistd.h>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <ctime>
#define btcDbFile "data.csv"

struct tmCompare {
	bool operator()(const std::tm& left, const std::tm& right) const {
		if (left.tm_year < right.tm_year) return true;
		if (left.tm_year > right.tm_year) return false;
		if (left.tm_mon < right.tm_mon) return true;
		if (left.tm_mon > right.tm_mon) return false;
		return left.tm_mday < right.tm_mday;
	}
};

class DateConversionFailed: public std::exception{
	public:
		virtual const char *what() const throw(){
			return ("Error: bad input =>");
		}
};
class WrongDate: public std::exception{
	public:
		virtual const char *what() const throw(){
			return ("Error: bad input =>");
		}
};

void	convertBtcToUsd(std::map<std::tm, float, tmCompare>& btcDB, std::string& _date, float value, std::string& line);
void	convertDatas(std::map<std::tm, float, tmCompare>& btcDB, std::ifstream& inputFile);
int	openInputFile(std::ifstream& inputFile, std::string fileName);
int	fill_csv_data(std::map<std::tm, float, tmCompare>& btcDB);
int	initFileDatas(std::map<std::tm, float, tmCompare>& btcDB, std::ifstream& inputFile, std::string fileName);
