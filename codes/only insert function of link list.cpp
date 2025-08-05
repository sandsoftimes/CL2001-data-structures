void insert_node() {
	int pos, num;
	cout << "enter the position where u want to add node\n";
	cin >> pos;
	cout << "enter the info of node\n";
	cin >> num;
	nodetype * newnode;
	newnode = new nodetype;
	newnode->data =num ;
	newnode->next = NULL;
	temp=first;
	
	for (int i = 2; i <= pos-1; i++) {
		
		temp = temp->next;
	}
	
		newnode->next = temp->next;
		temp->next = newnode;
		
}

