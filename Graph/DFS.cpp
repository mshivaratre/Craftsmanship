struct Node
{
	int val;
	getAdjacentNodes(list<Node*> adjacent);
};



void DFS(Node* n)
{
	map<visited,bool>visitedmap;
	stack<Node*> mystack;
	list<Node*> adjacent =NULL;
	mystack.push(n);
	visitedmap[n] = true;
	while(!mystack.empty())
	{
		Node* currentNode = mystack.top();
		mystack.pop();
		adjacent.clear();
		currentNode->getAdjacentNodes(adjacent);
		list<Node*>::iterator it;
		for(it = adjacent.begin(); it != adjacent.end(); it++)
		{
			if(visitedmap.find(*it) == visitedmap.end())
			{
				mystack.push(*it);
				visitedmap[*it] = true;
			}
		}
	}
}

