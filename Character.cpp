// This is the implementation file for the Character class.

#include <iostream>
#include "Utils.h"
#include "Character.h"
using namespace std;

void Character::Setup(const string& name, int hp, int atk, int def)
{
	m_name = name;
	m_hp = hp;
	m_atk = atk;
	m_def = def;
	m_attackType;
}

void Character::DisplayStats()
{
	cout << "Name is: " << m_name << endl;
	cout << "HP: " << m_hp << endl;
	cout << "Attack: " << m_atk << endl;
	cout << "Defense: " << m_def << endl;
}

void Character::SelectAction() // This function will be empty for the character class
{
	;
}

void Character::GetHit(int attack) // This function will take the input of attack damage
{
	int dmg;
	if (m_attackType == OFFENSIVE)
	{
		dmg = attack - m_def;
		m_hp - dmg; // Damage delt is the attack minus the defense stat
	}
	else if (m_attackType == DEFENSIVE)
	{
		dmg = (attack - m_def) - GetRandom(1, 3);
		if (dmg >= 0)
		{
			m_hp - dmg;
		}
	}
}

int Character::GetAttack() // This function will determine how much damage the character will do
{
	if (m_attackType == OFFENSIVE)
	{
		return (m_atk+ GetRandom(1, 3));
	}
	else
	{
		return m_atk;
	}
}


//void Setup(const string& name, int hp, int atk, int def); // initializes the member variables with the values passed in
//void DisplayStats(); // Utilize cout to display character's name, HP, ATK, and DEF
//void SelestAction(); // This function will be empty for the character class
//void GetHit(int attack); // This function will take the input of attack damage
//int GetAttack(); // This function will determine how much damage the character will do
//int getHP() { return m_hp; }