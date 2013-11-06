#pragma once

//#include "targetver.h"
#include "stdafx.h"
#include <iostream>
#include <fstream>
//#include <fsthlib.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>
#include <time.h>

using namespace std; 

short counter =0;
short id=0;
short tura=0;
short tur=0;
short **tables;// = NULL;		//do przypisywania graczy na stołach
string nameBuffer;
string surnameBuffer;

void push_player(short *tab, short data)
{
	tab = new short [tura+1];
}

string IntToString (short a)
{
	stringstream buf;
	buf<<a;
	string conv;
	buf>>conv;
	return  conv;
}

short StringToShort (string a)
{
	stringstream buf;
	buf<<a;
	short conv;
	buf>>conv;
	return conv;
}

class gamer
{
public:
	gamer *next;

private:
	string name;
	string surname;
	string army;
	string city;
	short game_points;
	short match_points;
	short ID;
	bool chalange;
	bool played;
	//do zapamiętywania wykorzystanych stołów
	short *played_tables;
	//do zapamiętywania id przeciwników
	short *played_players;
	//bonusy
	short penalty;
	short bonus;
	short summary;
	string ID_ligowe;

public:
	gamer (): 
	  name(""), surname(""),match_points(0), game_points(0) 
	{
		
		this->ID=0;
		this->played = true;
		this->chalange=false;
		this->played_tables=NULL;
		this->played_players=NULL;
		this->game_points=0;
		this->match_points=0;
		this->penalty=0;
		this->bonus=0;
	}
	gamer (string new_name, string new_surname, string new_city, string new_army) :
	  name(new_name), surname(new_surname), game_points(0), match_points(0), city(new_city), army(new_army)
	{
		id++;
		this->ID=id;
		this->played = true;
		this->chalange=false;
		this->played_tables=NULL;
		this->played_players=NULL;
		this->game_points=0;
		this->match_points=0;
		this->penalty=0;
		this->bonus=0;
		this->ID_ligowe = "-";
	}
	
	
	void score (short g_pts, short m_pts);
	short get_game_points();
	short get_match_points();
	short get_ID ();
	short get_penalty ();
	short get_bonus ();
	short get_summary ();
	short *get_played_players ()
	{	return this->played_players;	}
	short *get_played_tables ()
	{	return this->played_tables;		}
	void set_played_players (short *players)
	{	this->played_players = players;	}
	void set_played_tables (short *tables)
	{	this->played_tables = tables;		}
	void set_league_id (string id)
	{	this->ID_ligowe = id;	}
	string get_name ();
	string get_surname ();
	string get_army();
	string get_city();
	string get_league_ID();
	//sprawdzenie, czy gracz grał
	bool get_played ();
	//sprawdzeine, czy gracz grał już ze swoim przeciwnikiem
	bool check_played_player (short ID);
	//Do sprawdzania, czy para graczy grała już na danym stole
	bool check_played_table (short table);
	void set_army (string army);
	void set_played (bool set);
	void prshort_data ();
	void set_Buffers ();
	void set_tables ();
	void set_chalange(bool check);
	void push_played_player(short player_ID);
	void push_played_table(short table);
	void copy_data (gamer *origin);
	void add_penalty (short penalty);
	void add_bonus (short bonus);
	void set_points (short g_points, short m_points);
	void set_names (string name, string surname);
	void set_id (short id);
	void change_last_played (short opponent_id);
	void sum_up ();
	bool challange (short id);
	//gamer set_by_ID (short ID);

	~gamer()
	{
		delete[] played_tables;
		delete[] played_players;
	}
}*head, *last;

short gamer::get_summary()
{
	return this->summary;
}
void gamer::sum_up ()
{
	this->summary = this->game_points + this->bonus - this->penalty;
}
void gamer::set_id (short id)
{
	this->ID=id;
}
//do przycisku Edytuj
void gamer::set_names (string name, string surname)
{
	this->name=name;
	this->surname=surname;
}
void gamer::set_points (short g_points, short m_points)
{
	this->game_points=g_points;
	this->match_points=m_points;
}
//bonusy, karniaki
short gamer::get_bonus ()
{	return this->bonus;	}
short gamer::get_penalty ()
{	return this->penalty;	}
void gamer::add_penalty (short penalty)
{
	this->penalty=penalty;
}
void gamer::add_bonus (short bonus)
{
	this->bonus=bonus;
}

bool gamer::check_played_player (short ID)
{
	short *tab = this->played_players;

	for (short i=0; i<tura+1; i++)
	{
		if (tab [i] == ID)
		{
			tab = NULL;
			delete tab;
			return 1;
		}
	}
	tab = NULL;
	delete tab;
	return 0;
}

bool gamer::check_played_table (short table)
{
	short *tab = this->played_tables;
	for (short i=0; i<tura+1; i++)
	{
		if (table == tab[i])
		{
			tab = NULL;
			delete tab;
			return 1;
		}
	}
	tab = NULL;
	delete tab;
	return 0;
}

bool gamer::get_played ()
{	return this->played;	}

void gamer::set_army (string army)
{	this->army = army;		}

void gamer::set_played (bool set)
{	this->played = set;		}


void gamer::copy_data (gamer *origin)
{
	if (origin != NULL && this != NULL)
	{
		this->played = origin->played;
		this->name = origin->name;
		this->surname = origin->surname;
		this->city=origin->city;
		this->army=origin->army;
		this->game_points = origin->game_points;
		this->match_points = origin->match_points;
		this->ID = origin->ID;
		this->chalange = origin->chalange;
		this->played_tables = origin->played_tables;
		this->played_players = origin->played_players;
		this->ID_ligowe = origin->ID_ligowe;
	}
}

//przesuwa wskaźnik na zadane ID
gamer* set_by_ID (short ID)
{
	gamer *tmp;
	tmp = head;
	while (tmp->get_ID() != ID)
	{
		tmp = tmp->next;
		if (tmp == NULL) break;
	}
	return tmp;
}

//wyszukuje graczy wedłgu ID ligowego lub według imienia i nazwiska
short search (string ID_lig, string name, string surname)
{
	short found = 0;
	gamer *tmp= head;
	while (tmp!=NULL)
	{
		if (ID_lig == tmp->get_league_ID() || 
			(name == tmp->get_name() && surname == tmp->get_surname()))
		{
			found = tmp->get_ID();
			break;
		}
		tmp=tmp->next;
	}
	return found;
}

string leagueID_by_ID (short id)
{
	gamer *tmp = head;
	while (tmp!=NULL)
	{
		if (id == tmp->get_ID())
		{
			return tmp->get_league_ID();
		}
		tmp=tmp->next;
	}
	return "ERROR";
}


//Dodaj gracza, z którym grano
//Potrzbne, żeby gracze nie grali ze sobą więcej niż raz
void gamer::push_played_player (short player_ID)
{
	if (this->played_players == NULL)
	{
		this->played_players = new short [1];
		this->played_players [0] = player_ID;
	}
	else
	{
		short *tab;
		tab = new short [tura+1];
		for (short i=0; i<tura+1; i++)
		{
			tab[i] = this->played_players[i];
		}
		tab[tura+1] = player_ID;
		this->played_players = tab;
		tab = NULL;
		delete tab;
	}
}

void gamer::change_last_played (short opponent_id)
{
	this->played_players[tura-1] = opponent_id;
}

//Dodaj stół, na którym grał gracz
//Potrzbne, żeby nikt nie grał więcej niż raz na tych samych stołach
void gamer::push_played_table (short table)
{
	if (this->played_tables == NULL)
	{
		this->played_tables = new short [tura+1];
		this->played_tables [0] = table;
	}
	else
	{
		short *tab;
		tab = new short [tura+1];
		for (short i=0; i<tura+1; i++)
		{
			tab[i] = this->played_tables[i];
		}
		tab[tura+1] = table;
		this->played_players = tab;
		tab = NULL;
		delete tab;
	}
}

string gamer::get_name ()
{
	return this->name;
}

string gamer::get_surname ()
{
	return this->surname;
}

string gamer::get_army()
{	return this->army;	}

string gamer::get_city()
{	return this->city;	}

string gamer::get_league_ID()
{
	return this->ID_ligowe;
}

short gamer::get_ID ()
{return this->ID;}

void gamer::set_Buffers ()
{
	nameBuffer = this->name;
	surnameBuffer = this->surname;
}

void gamer::score (short g_pts, short m_pts)
{
	this->game_points+=g_pts;
	this->match_points+=m_pts;
}//score

short gamer::get_game_points()
{
	return this->game_points;
}

short gamer::get_match_points()
{
	return this->match_points;
}

/**********************void prshort_data()****************************/
//Funkcja do sprawdzenia poprawności przypisania danych,
//korzystać tylko w przypadku działania na konsoli
void gamer::prshort_data ()
{
	cout<<endl<<"================================"<<endl
		<<"ID: "<<this->ID<<endl
		<<"Nazwisko: "<<this->surname<<endl
		<<"Imie: "<<this->name<<endl
		<<"Duze punkty: "<<this->match_points<<endl
		<<"Male punkty: "<<this->game_points<<endl;
}//prshort_data ()

/**********************string name_by_id(short id)****************************/
//Funkcja wyszukuje nazwisko według podanego id
string name_by_id (short id)
{
	gamer *search = head;
	string name;
	while (1)
	{
		if (search->get_ID() == id) 
		{
			name = search->get_name();
			break;
		}
		if (search == last) 
		{
			name = "NIE ZNALEZIONO";
			break;
		}
		else search = search->next;
	}
	search = NULL;
	delete search;
	return name;
}//string name_by_id (short id)

/**********************string surname_by_id(short id)****************************/
//Funkcja wyszukuje nazwisko według podanego id
string surname_by_id (short id)
{
	gamer *search = head;
	string surname;
	while (1)
	{
		if (search->get_ID() == id) 
		{
			surname = search->get_surname();
			break;
		}
		if (search == last) 
		{
			surname = "NIE ZNALEZIONO";
			break;
		}
		else search = search->next;
	}
	search = NULL;
	delete search;
	return surname;
}//string surname_by_id (short id)

/**********************void set_tables()****************************/
//Funkcja przypisuje pary graczy do stołów
void gamer::set_chalange (bool set_ch)
{
	this->chalange = set_ch;
}

/**********************void add_gamer()****************************/
//Funkcja dodająca kolejnych graczy, od niej zaczynamy pracę programu
void add_gamer (string name, string surname, string city, string army)
{
	gamer*tmp=NULL;
	if (head==NULL)
	{
		head = new gamer (name,surname, city, army);
		last = head;
		head->next=last;
		
		delete tmp;
	}
	else
	{
		tmp = new gamer (name, surname, city, army);
		last->next=tmp;
		last=last->next;
		last->next=NULL;
		tmp=NULL;
		delete tmp;
	}
}//add_gamer()

void add_gamer (string name, string surname, string city, string army, short id,
				short *played_players, short *played_tables, short game_points, short match_points,
				string league_ID, short bonus, short penalty)
{
	gamer*tmp=NULL;
	if (head==NULL)
	{
		head = new gamer (name,surname, city, army);
		head -> set_points (game_points, match_points);
		head -> add_bonus (bonus);
		head -> add_penalty (penalty);
		head -> set_played_players (played_players);
		head -> set_played_tables (played_tables);
		head -> set_id (id);
		head -> set_league_id (league_ID);
		last = head;
		head->next=last;
		
		tmp=NULL;
		delete tmp;
	}
	else
	{
		tmp = new gamer (name, surname, city, army);
		tmp -> set_points (game_points, match_points);
		tmp -> add_bonus (bonus);
		tmp -> add_penalty (penalty);
		tmp -> set_played_players (played_players);
		tmp -> set_played_tables (played_tables);
		tmp -> set_id (id);
		tmp -> set_league_id (league_ID);
		last->next=tmp;
		last=last->next;
		last->next=NULL;
		tmp=NULL;
		delete tmp;
	}
}

/**********************void sort_players()****************************/
//Funkcja sortuje graczy według ich wyników, używamy 
//po pierwszej bitwie do ustawienia graczy w odpowiedniej kolejności
//przed przypisaniem ich do odpowiednich stołów
//gracze nie powtarzają się (nie grają ze sobą więcej niż jeden raz)
void sort_players ()
{
	gamer *tmp=NULL;
	gamer* chck1=NULL;
	gamer* chck2=NULL;
	if (head!=NULL)
		chck1=head;
	if (head->next!=NULL)
		chck2=head->next;
	bool ok = true;

	//bubblesort wdg. wyników graczy, najwyższy z przodu listy, najniższy na końcu listy
	while (1)
	{
		
		if ((chck1->get_game_points() < chck2->get_game_points())
			||((chck1->get_game_points() == chck2->get_game_points())
				&& (chck1->get_match_points()<chck2->get_match_points())))
		{
			tmp = new gamer ();
			tmp->copy_data(chck2);
			chck2->copy_data(chck1);
			chck1->copy_data(tmp);
			tmp=NULL;
			ok = false;
		}
		else
		{
			chck1=chck1->next;
			chck2=chck2->next;
		}
		if (ok == true && chck2 == NULL) break;
		if (ok == false && chck2 == NULL) 
		{
			chck1 = head;
			chck2 = head->next;
			ok = true;
		}
	}
	chck1 = head;
	chck2 = head->next;
	tmp = NULL;
	short pair_count=0;
	gamer *tmp2 = new gamer ();

	//sprawdzenie, czy graczy można ustawiać na stołach, tzn. czy nie grali już ze sobą
	while (1)
	{
		if(chck1->check_played_player (chck2->get_ID()) == true && pair_count%2==0)// && pair_count%2==0)
		{
		
			ok = false;
			tmp = new gamer ();
			
			tmp2 = chck2;

			short i = 1;
			short j = 0;
			short k = 0;
			while (1)
			{	
				j++;
				k++;
				//Szukamy najbliższych graczy od chck1
				if (j%2 == 0 && (chck2->get_ID()-(k-1) > 0)) 
				{
					j=0;
					k--;
					//i=chck2->get_ID() + (k*(-1));
					chck2 = set_by_ID (chck2->get_ID()+(k*(-1)));
				}
				else 
				{
					if (chck2->get_ID()+k < id+1)
						//i=chck2->get_ID() +k;
						chck2 = set_by_ID (chck2->get_ID()+(k));
				}
				if (chck1->check_played_player (chck2->get_ID())==false && chck2->get_ID() != chck1->get_ID())
				{
					//chck2 = set_by_ID (chck2->get_ID()+i);
					break;
				}
				//if(chck1->check_played_player (chck2->get_ID())== false && chck2 != chck1 ) break;
				//jeśli dojechało do końca to szukamy graczy z początku listy
				
				//Jeśli chck2 == tmp2, to upuszczamy pętlę, oznacza to, że zatoczyliśmy
				//pełne koło i nie ma lepszego kandydata od tmp2
				if (chck2->get_ID() == tmp2->get_ID()) break;
			}
			tmp->copy_data(tmp2);
			tmp2->copy_data(chck2);
			chck2->copy_data (tmp);
			chck2 = tmp2;
		}
		pair_count++;
		if (chck2->next!=NULL)
		{
		chck1 = chck1->next;
		chck2 = chck2->next;
		}
		if (ok == true  && chck2->next == NULL) break;
		if (ok == false && chck2->next == NULL) 
		{
			chck1 = head;
			chck2 = head->next;
			ok = true;
		}

	}

	chck1 = NULL;
	chck2 = NULL;
	tmp   = NULL;
	tmp2  = NULL;
	delete chck1;
	delete chck2;
	delete tmp;
	delete tmp2;
}//sort_players

/**********************void randomize_players()****************************/
//Funkcja ustawia graczy w losowej kolejności przed rozstawieniem stołów
//na bitwę pierwszą
void randomize_players ()
{
	gamer *random = head;
	gamer *tmp = head;
	gamer *chck = head;
	short size=id;
	bool dodaj;
	vector <short> sort_id (size);
	vector <short>::iterator sort_iterator;
	vector <short>::iterator myiterator2;
	short los;


	for (short i=0; i<id; i++)
	{
		los = rand()%id+1;
		for (short j=0; j<size; j++)
		{
			dodaj = true;
			//sprawdzenie, czy dany los jest już w wektorze
			if (sort_id[j] == los) 
			{
				if (i==0) 
				{
					dodaj = false;
					break;
				}
				else
				{
					dodaj = false;
					i--;
					break;
				}
			}
		}
		//jeśli doszło do tego miejsca, oznacza to, że można zapisać id w vectorze
		if (dodaj==true)
			sort_id [i] = los;
	}

	for (short i=0; i<size; i++)
	{
		tmp=head;
		while (tmp!=last)
		{
			if (last->get_ID()==sort_id[i] && tmp->next==last)
			{
				//obsługa przypadku, gdy następny posortowany element jest ostatnim elementem
				random= last;
				last = tmp;
				last->next=NULL;
				tmp->next=NULL;
				random->next=head;
				head=random;
				break;
			}
			else
			{
				if (tmp->next->get_ID() == sort_id[i] && tmp->next!=last)
				{
					random = tmp->next;
					tmp->next = tmp->next->next;
					random->next=head;
					head=random;
					break;
				}
				else tmp=tmp->next;
			}
		}
	}
	tmp=NULL;
	delete tmp;
	random=NULL;
	delete random;
}//randomize_players ()

/**********************void delete_gamers()****************************/
//Do zwalaniania pamięci przy wyłączaniu programu
//wywoływane w destruktorze ~Form1()
void delete_gamers ()
{
	while (head!=NULL)
	{
		gamer* tmp=head;
		head=head->next;
		tmp=NULL;
		delete tmp;
	}
}

/**********************void clear_tables()****************************/
//Do zwalniania pamięci przy wyłączaniu programu
//wywoływane w destruktorze ~Form1()
void clear_tables ()
{
	if (tables != NULL)
	{
		for (short i=0; i<(id/2);i++)
		{
			tables[i] = NULL;
			delete[] tables[i];
		}
		tables=NULL;
	}
	//delete[] tables;
}

/**********************void set_tables()****************************/
//Funkcja przypisuje pary graczy do stołów
//Sprawdzaj stoły, gracze nie mogą grać na stole, na którym już grali
void set_tables ()
{
	//tworzymy tabelę odwzorowującą graczy na stołach
	//deklarujemy jej rozmiar
	short size = (id/2);
	//tables = NULL;
	if (tura == 0 || tables == NULL)
	{
		tables = new short *[size];
		for (short i=0; i<size; i++)
		{
			tables [i] = new short [2];
			//size++;
		}
	}
	//zmienne gracze
	gamer *gracz = head;
	//przypisujemy graczy do stołów
	bool change = false;
	short j =-1;
	while (1)
	{
		
		j++;
		
		if (j%2 == 0)
		{
			tables [j/2][0] = gracz->get_ID();
		}
		else
		{
			tables [j/2][1] = gracz->get_ID();
		}
		if (gracz->next!=NULL)
		{
			gracz = gracz->next;
		}
		else break;
	}

	if ((id)%2 == 1)
	{
		tables[size][1] = id+1;
	}
	//sprawdzenie, czy gracze grali już na stołach
	bool count_down = false; //jeśli chociaż jednego z graczy ustawi na stole,
							// na którym już grał, to po skończeniu sortowania
							//w drugą stronę
	short counter = 0;
	bool ok = true;
	
	if (tura != 0)
	{
		gamer *gracz2 = head;
		for (short i=0; i<size; i++)
		{
			//jeśli robi już kolejną z rzędu turę losowań, to kończymy i chuj
			if (counter > 7) break;
			if (count_down == true)
			{
				//jeśli mielibyśmy zjechać poniżej jedynki, to lecimy w drugą stronę
				if ((i-2)<1)
				{
					count_down = false;
					counter ++;
				}
				else
					i-=2;
			}
			gracz = set_by_ID(tables[i][0]);
			gracz2 = set_by_ID(tables[i][1]);
			if(gracz->check_played_table(i) == true || gracz2->check_played_table(i) == true)
			{
				ok = false;
				if (i!=(size+1) && count_down == false)
				{
					tables[i][0] = tables[i+1][0];
					tables[i][1] = tables[i+1][1];
					tables[i+1][0] = gracz->get_ID();
					tables[i+1][1] = gracz2->get_ID();
				}
				//jeśli to jest ostatni stolik, to lecimy sprawdzanie w drugą stronę
				else
				{
					count_down = true;
					counter++;
				}
				if (count_down == true)
				{
					tables[i][0] = tables[i+1][0];
					tables[i][1] = tables[i+1][1];
					tables[i-1][0] = gracz->get_ID();
					tables[i-1][1] = gracz2->get_ID();
				}
				
			}
			gracz2=NULL;
			delete gracz2;
		}
	}
	
	//przypisujemy im stoły
	for (short i=0; i<size; i++)
	{
		tables;
		for (short g=0; g<2; g++)
		{
			//if (tables[i][g]!=(id+1))
			//{
				gracz = set_by_ID(tables[i][g]);
				gracz->push_played_table(i);
				if (g==0)
					gracz->push_played_player(tables[i][1]);
				if (g==1)
					gracz->push_played_player(tables[i][0]);
			//}
		}
	}
	gracz = NULL;
	delete gracz;

}//set_tables()

/**********************bool check_played ()****************************/
//Sprawdzenie, czy wszyscy gracze zagrali już bitwy
bool check_played ()
{
	gamer *tmp = head;
	while (tmp != NULL)
	{
		if (tmp->get_played () == false) return 0;
		tmp=tmp->next;
	}
	return 1;
}

/**********************void set_all_played (bool set)****************************/
//Ustawia this->played dla wszystkich graczy
void set_all_played (bool set)
{
	gamer *tmp = head;
	while (tmp != NULL)
	{
		tmp->set_played (set);
		tmp=tmp->next;
	}
}

//funkcja zwraca graczy, którzy jeszcze nie oddali wyników
string check_not_played ()
{
	gamer *tmp = head;
	string buff;
	while (tmp!= NULL)
	{
		if (tmp->get_played() == false)
			buff+= IntToString(tmp->get_ID())+" "+tmp->get_surname()+" "+tmp->get_name()+"\n";
		tmp = tmp->next;
	}
	return buff;
}

//Save to file
void save_to_file (string filename)
{
	short *played;
	gamer *tmp = head;
	filename+=".txt";
	ofstream file;
	file.open (filename.c_str(), ios::trunc);
	
	file<<id<<" "<<counter<<" "<<tura-1<<" "<<tur;

	while (tmp!=NULL)
	{
		file<<endl;
		file<<tmp->get_ID()<<" "
			<<tmp->get_name()<<" "
			<<tmp->get_surname()<<" "
			<<tmp->get_city()<<" "
			<<tmp->get_army()<<" "
			<<tmp->get_game_points()<<" "
			<<tmp->get_match_points()<<" "
			<<tmp->get_bonus()<<" "
			<<tmp->get_penalty()<<" "
			<<tmp->get_league_ID();//<<endl;
		if (tura>0)
		{
			//zapis graczy, z którymi została rozegrana gra
			played = tmp->get_played_players();
			for (int i=0; i<tura-1; i++)
			{
				file<<" "<<played[i];
			}

			//zapis stołów, na których została rozegrana gra
			played = tmp->get_played_tables ();
			for (int i=0; i<tura-1; i++)
			{
				file<<" "<<played[i];
			}
		}
		
		tmp=tmp->next;
	}
	played = NULL;
	delete played;
	tmp=NULL;
	delete tmp;
	file.close();
}

void read_from_file (string filename)
{
	short Tura = 0;
	short Tur = 0;
	short Counter = 0;
	short Ids = 0;
	if (tables != NULL)
		clear_tables();
	if (head != NULL)
		delete_gamers();
	short *played_players = NULL;
	short *played_tables = NULL;
	
	ifstream file;
	file.open (filename.c_str ());

	

	//dane gry
	string IDS, COUNTER, TURA, TUR;
	file>>IDS>>COUNTER>>TURA>>TUR;
	Tura = StringToShort (TURA);
	Tur = StringToShort (TUR);
	Counter = StringToShort (COUNTER);
	Ids = StringToShort (IDS);

	if (Tura != 0)
	{
		played_players = new short [Tura];
		played_tables = new short [Tura];
	}

	//dane graczy
	string ID, NAME, SURNAME, CITY, ARMY, GAME_POINTS, MATCH_POINTS,BONUS,PENALTY,LEAGUE_ID;
	while (!file.eof())
	{
		file>>ID>>NAME>>SURNAME>>CITY>>ARMY>>GAME_POINTS>>MATCH_POINTS>>BONUS>>PENALTY>>LEAGUE_ID;
		//ARMY1 += ARMY2;
		if (Tura > 0)
		{
			for (short i=0; i<Tura; i++)
			{
				string buf;
				file>>buf;
				short buff = StringToShort (buf);
				played_players[i] = buff;
			}
			for (short i=0; i<Tura; i++)
			{
				string buf;
				file>>buf;
				short buff = StringToShort (buf);
				played_tables[i] = buff;
			}
		}
		short Id = StringToShort (ID);
		short Game_Points = StringToShort (GAME_POINTS);
		short Match_Points = StringToShort (MATCH_POINTS);
		short Penalty = StringToShort (PENALTY);
		short Bonus = StringToShort (BONUS);
		add_gamer (NAME, SURNAME, CITY, ARMY, Id,
				played_players, played_tables, Game_Points, Match_Points,
				LEAGUE_ID, Bonus, Penalty);
		//add_gamer
	}
	file.close ();
	tur = Tur;
	tura = Tura;
	counter = Counter;
	id = Ids;
}

