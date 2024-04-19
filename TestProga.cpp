#include <iostream>
#include <queue>

void sort(std::queue<int>& queue4)
{
	std::vector<int> vect;
	while (!queue4.empty())
	{
		vect.push_back(queue4.front());
	}
	std::sort(vect.begin(), vect.end());
	for (int i : vect)
	{
	    queue4.push(i);
	}
}

std::queue<int> makeQueues(std::queue<int>& queue1, std::queue<int>& queue2)
{
	std::queue<int> queue3;
	while (!queue1.empty() && !queue2.empty())
	{
		if (queue1.front() < queue2.front())
		{
			queue3.push(queue1.front());
		}
		else
		{
			queue3.push(queue2.front());
		}
		
	}
	return queue3;

}

int main()
{
    std::cout << "Hello World!\n";

	std::queue<int> queue1;
	std::cout << "Введите элементы очереди 1" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		int a;
		std::cin >> a;
		queue1.push(a);
	}

	std::queue<int> queue2;
	std::cout << "Введите элементы очереди 2" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		int a;
		std::cin >> a;
		queue2.push(a);
	}

	std::queue<int> makeQueue = makeQueues(queue1, queue2);
	sort(makeQueue);
	std::cout << "Объединённая очередь - ";
}
