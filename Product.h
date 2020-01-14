#pragma once
#include <iostream>
#include <utility>
#include <memory>
//#include "FootballDataBase.h"

class FootballDataBase;

enum class Member_Types {
	TEAM,
	PLAYER,
	MATCH
};

class Product {
public:
	Product() = default;
	Product(int id, const std::string & name) : id(id), name(name) {}
	virtual ~Product() = default;
	
	virtual void print_data(std::ostream& ostream) const= 0;
	virtual Member_Types get_type() const = 0;
	//virtual int get_id() const = 0;
	
	//std::weak_ptr<FootballDataBase> data_base;
	const std::string& get_name() const { return name; }
	int get_id() const { return id; }
	//static std::shared_ptr<Product> create_product(std::istream &stream);
	static FootballDataBase data_base;
protected:
	std::string name;
	int id;
	
};