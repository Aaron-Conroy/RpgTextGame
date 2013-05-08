	#ifndef PLAYER_H
	#define PLAYER_H


	#include <iostream>
	#include <string>
using namespace std;

class Player
{
private:
	string name;
	int m_health;
	int m_gold;
	int maxhealth;
	int m_damage;
	int m_defence;
	int m_speed;
	int m_level;
	int m_exp;
	int maxexp;
	int points;
	public:
	Player()
	{
		name = "Default";
		maxhealth = 100;
		m_health = 100;
		m_gold = 0;
		m_damage = 0;
		m_defence = 0;
		m_speed = 0;
		m_level = 1;
		m_exp = 0;
		maxexp = 100;
		points = 20;
	}

	string getName()
	{
		return name;
	}

	void setName(string p_name)
	{
		name = p_name;
	}

	void increaseGold(int p_gold)
	{
		m_gold += p_gold;
	}

	void spendGold(int p_gold)
	{
		m_gold -= p_gold;
	}

	void createChar()
	{
		cout << "Welcome warrior. Now customise your character to how you would like. You have 20 points to apply." <<endl;
		applyPoints();
	}

	void increaseExp(int exp)
	{
		m_exp = m_exp + exp;
		if(m_exp >= maxexp)
		{
			levelUp();
		}
	}

	void levelUp()
	{
		m_level++;
		m_exp = 0;
		maxexp = maxexp + 20;
		points = points+5;
		cout << "Concrats you have leveled up. You must go to the in to apply your skill points." <<endl;
	}

	void applyPoints()
	{
		int upgrade = 0;
		
		while(points != 0)
		{
			cout << "Points: " << points << endl;
			cout << "------------------------" << endl;
			cout << "1. Health: " << m_health << endl;
			cout << "2. Damage: " << m_damage << endl;
			cout << "3. Defence: " << m_defence << endl;
			cout << "4. Speed: " << m_speed << endl;
		
			cin >> upgrade;
			if(upgrade == 1)
			{
				m_health = m_health + 20;
				maxhealth = maxhealth + 20;
				points--;
			}
			else if(upgrade == 2)
			{
				m_damage = m_damage + 5;
				points--;
			}
				else if(upgrade == 3)
			{
				m_defence = m_defence + 5;
				points--;
			}
				else if(upgrade == 4)
			{
				m_speed = m_speed + 5;
				points--;
			}
			else
			{
				cout << "Error try again" << endl;
			}
		}
	}
	void viewStats()
	{
		cout << "Name: " << name << endl;
		cout << "Gold: " << m_gold << endl;
		cout << "Health: " << m_health << endl;
		cout << "Damage: " << m_damage << endl;
		cout << "Defence: " << m_defence << endl;
		cout << "Speed: " << m_speed << endl;
		cout << "Level: " << m_level << endl;
		cout << "Experience: " << m_exp << endl;
		cout << "Points to Spend: " << points << endl;
	}

	void rest()
	{
		m_health = maxhealth;
	}

	void takeDamage(int damage)
	{
		m_health -= damage;
	}

};

#endif