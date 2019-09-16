#include <iostream>
#include <fstream>
using namespace std;

class Soldier
{
	protected:
		string  id ;
		float  attack ;
		float defend ;
		bool equipment ;
		int strength ;
	public:
		Soldier();
		Soldier(string id,float  attack,float defend,bool equipment,int strength);
		void virtual  Set_value()
		{
			cout<<id<<endl;
		}	
};

Soldier:: Soldier(string id,float  attack,float defend,bool equipment,int strength)
{
	id = id ;
	attack = attack;
	defend = defend;
	equipment =equipment;
	strength = strength ;
}
Soldier::Soldier()
{
}


class Army_General: public Soldier
{
	protected:
		int experience;
	public:
		Army_General();
		Army_General(string id,float  attack,float defend,bool equipment,int strength,int experience);
};
Army_General::Army_General(string id,float  attack,float defend,bool equipment,int strength,int experience)
 {
 	id = id ;
	attack = attack;
	defend = defend;
	equipment =equipment;
	strength = strength ;
	experience = experience;
 }
 Army_General::Army_General()
 {
 }
 
 
 
class Valiant: public Soldier
{
	public:
		Valiant();
		Valiant(string id,float  attack,float defend,bool equipment,int strength);
		void Set_value() override
		{
			if(equipment == true)
			{
			defend = defend*2;
			}
		}
 };
 Valiant::Valiant(){
 }
 Valiant::Valiant(string id,float  attack,float defend,bool equipment,int strength)
 {
 	id = id ;
	attack = attack;
	defend = defend;
	equipment =equipment;
	strength = strength ;
 }
 
 
 
 class Archer: public Soldier
 {
 	public:
 		Archer();
 		Archer(string id,float  attack,float defend,bool equipment,int strength);
 		void Set_value() override
 		{
 			if(equipment == true)
 			{
 				attack= attack*1,5;
			 }
		 }
 };
 Archer::Archer(){
 }
 Archer::Archer(string id,float  attack,float defend,bool equipment,int strength)
 {
 	id = id ;
	attack = attack;
	defend = defend;
	equipment =equipment;
	strength = strength ;
 }
 
 
class Knight: public Soldier
{
	public:
		Knight();
		Knight(string id,float  attack,float defend,bool equipment,int strength);
		void Set_value() override
		{
			if(equipment == true)
			{
					defend = defend*3;
					attack= attack*3;
			}
		}
};
 Knight:: Knight(){
 }
 Knight::Knight(string id,float  attack,float defend,bool equipment,int strength)
  {
  	id = id ;
	attack = attack;
	defend = defend;
	equipment =equipment;
	strength = strength ;
  }
int main()
{ 

	string a[100];
	string TeamA[100];
	string TeamB[100];
	int n =0 ;
	std::ifstream fileInput("C:/Users/ADMIN/Desktop/input.txt");

	if (fileInput.fail())
	{
		std::cout << "Failed to open this file!" << std::endl;
	//	return -1;
	}
	while (!fileInput.eof())
	{
		string b ;
		fileInput >> b;
		a[n] = b ;
		n ++ ;
	}
	
for(int i = 0;i<=27; i++)
{
	TeamA[i] = a[i];
}
	for(int i=0; i<27;i++)
		{
			cout<<TeamA[i]<<" " ;
		}
for(int i = 28;i<=49; i++)
{
	TeamA[i] = a[i];
}
for(int i=0; i<27;i++)
	{
		cout<<TeamB[i]<<" " ;
	}
Soldier g;
g.id = "1" ;
g.Set_value();
//Army_General b ;
//Valiant c ;
//c.Set_value();
// Archer d ;
// d.Set_value();
// Knight e ;
//	e.Set_value();
}


