#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Node {
public:
	int val;
	int player;
	Node* father;
	vector<Node*> children;

	Node(int val) {
		this -> val = val;	
	}

	Node(int val, int player, Node* father) {
		this -> val = val;
		this -> player = player;
		this -> father = father;
	}

};


int generate_tree(int a, int b, int m, Node* father, int player) {
	if(m - a >= 0) {
		Node * new_node = new Node(m - a, player, father);
		father -> children.push_back(new_node);
		generate_tree(a, b, m - a, new_node, player * -1);
	}

	if(m - b >= 0) {
		Node * new_node = new Node(m - b, player, father);
		father -> children.push_back(new_node);
		generate_tree(a, b, m - b, new_node, player * -1);
	}
}

vector<int> players;

int init_leafs(Node * node) {
	if(node -> children.size() > 0) {
		for(vector<Node*>::iterator it = node -> children.begin();
			it != node -> children.end(); it++) {
			init_leafs(*it);
		}
	} else {
		players.push_back(node -> player);		
	}
}

int winner(int a, int b, int m) {
	Node* father = new Node(m);
	generate_tree(a, b, m, father, 1);

	init_leafs(father -> children[0]);
	int player = 1;

	int result = 1;
	
	for(int i = 0; i < players.size(); i++) {
		if(players[i] != player) {
			result = 2;		
		}
	}
	if(result == 1) {
		return 1;	
	}
	result = 1;	

	players.clear();
	init_leafs(father -> children[1]);
	for(int i = 0; i < players.size(); i++) {
		if(players[i] != player) {
			result = 2;		
		}
	}


	return result;
}


int main() {
	vector<int> winners;
	int a, b;
	int m;
	int stars;
	cin >> a;
	cin >> b;
	cin >> m;
	for(int i = 0; i < m; i++) {
		cin >> stars;
		winners.push_back(winner(a, b, stars));
	}

	for(vector<int>::iterator it = winners.begin(); it != winners.end(); it++) {
		cout << *it << endl;	
	}
	return 0;
}

