
		#ifndef ROOM_H
	#define ROOM_H


	#include <iostream>
	#include <string>
using namespace std;

class Room
{
private:
	int id;
	string name;
	string desc;
	int north;
	int south;
	int east;
	int west;
	Inventory inventory;

public:

	Room(int p_id, string p_name, string p_desc, Inventory p_inventory)
	{
		id = p_id;
		name = p_name;
		desc =  p_desc;
		inventory = p_inventory;
		north = 0;
		south = 0;
		east= 0;
		west= 0;
	}

	void removeItem()
	{

	}

	void setNorth(int roomid)
	{
		north = roomid;
	}

	void setSouth(int roomid)
	{
		south = roomid;
	}

	void setEast(int roomid)
	{
		east = roomid;
	}

	void setWest(int roomid)
	{
		west = roomid;
	}

};
#endif