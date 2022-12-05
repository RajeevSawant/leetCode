



ListNode* deleteDuplicateUnsorted(ListNode* head){

	unordered_map<int, int> mp;

	ListNode* temp = head;

	while(temp != NULL){
		mp[temp -> val]++;
		temp = temp -> next;
	}

	temp = head;
	ListNode* cur = NULL;
	ListNode* head2 = head;

	while(temp != NULL){

		while(temp != NULL && mp[temp -> val] > 1)
			temp  = temp -> next;

		if (!cur){
			cur = temp;
			head2 = cur;
		}else{

			cur -> next = temp;
			cur = temp;
		}


		if (temp != NULL)
			temp = temp -> next;
	}

	return head2;

}
