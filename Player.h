#pragma once
#include "Product.h"
//#include "FootballDataBase.h"
//#include "Team.h"
//#include  <memory>
//#include "Creator.h"
class Player final: public Product{
	int id;
	std::string name;
	int team_id;
public:
	Player(int id, const std::string& name, int team_id);
	~Player();
	//bool operator==(const Player& another) const;
	
	Member_Types get_type() const override;
	//int get_id() const override;
	void print_data(std::ostream& ostream) const override;
	/*void print_data_with_team(std::ostream& ostream) {
		print_data(ostream);
		std::shared_ptr<Product> team = (*data_base.lock()).find_object(team_id, Member_Types::TEAM);
		(*team).print_data(ostream);
	}*/
};
