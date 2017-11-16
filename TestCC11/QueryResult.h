#pragma once

#include <iostream>
#include <memory>
#include <set>
#include <vector>
#include <string>
#include "TextQuery.h"

class QueryResult
{
	friend std::ostream& print(std::ostream&, const QueryResult&);

public:
	using line_no = std::vector<std::string>::size_type;
	QueryResult(std::string s, std::shared_ptr<std::set<line_no>> p, std::shared_ptr<std::vector<std::string>> f) :
		sought(s), lines(p), file(f) {}

private:
	std::string sought;                                      // ��ѯ����
	std::shared_ptr<std::set<line_no>> lines;                // ���ֵ��к�
	std::shared_ptr<std::vector<std::string>> file;          // �����ļ�
 };

std::ostream& print(std::ostream&, const QueryResult&);
