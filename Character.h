// Character Class header file
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Character
{
protected:
	int m_hp, m_atk, m_def;
	string m_name;
	enum AttackType {OFFENSIVE = 1, DEFENSIVE = 2};
	AttackType m_attackType;

public:
	void Setup(const string& name, int hp, int atk, int def); // initializes the member variables with the values passed in
	void DisplayStats(); // Utilize cout to display character's name, HP, ATK, and DEF
	void SelectAction(); // This function will be empty for the character class
	void GetHit(int attack); // This function will take the input of attack damage
	int GetAttack(); // This function will determine how much damage the character will do
	int getHP() { return m_hp; }

};