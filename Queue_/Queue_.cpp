#include "pch.h"
#include "Zadanie.h"
#include <iostream>
#include <queue>
#include <string>


queue<Zadanie> showQueue(queue<Zadanie> queue_)
{
	queue<Zadanie> temp;
	while (!queue_.empty())
	{
		cout << queue_.front();
		temp.push(queue_.front());
		queue_.pop();
	}
	return temp;
}


void showque(queue<Zadanie> queue_)
{
	cout << "TASKS:" << endl << "\t ID \t" << "TASK NAME:" << endl;
	queue_ = showQueue(queue_);
}


queue<Zadanie> randomQueue(queue<Zadanie> queue_)
{
	int randomInt = (std::rand() % 30) + 5;
	char * tab = new char[randomInt];
	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < randomInt; i++)
	{
		for (int i = 0; i < randomInt; ++i)
			tab[i] = alphanum[rand() % (sizeof(alphanum) - 1)];

		queue_.push(Zadanie(i, string(tab)));
	}
	return queue_;
}



using namespace std;
int main()
{

	queue<Zadanie> queue_ = randomQueue(queue_);
	int tempID;
	string tempName;
	int a;


	while (true)
	{
		cout << "Choose:    0 - exit,    1 - Pop from queue,     2- Push to queue"<< endl;
		cin >> a;

		switch (a)
		{
		case 0:
			cout << "Exit.";
			return 0;
			break;

		case 1:
			if (!queue_.empty())
			{
				cout << "Pop task: " << endl << queue_.front();
				queue_.pop();
				showque(queue_);
			}
			else 
			{
				cout << "Queue is empty."<< endl;
			}

			break;
		case 2:
			cout << "ID:";
			cin >> tempID;
			cout << "Task name:";
			cin >> tempName;
			queue_.push(Zadanie(tempID, tempName));
			showque(queue_);
			break;

		default:
			cout << "Wrong instruction number!"<< endl;
			break;
		}
	}

}