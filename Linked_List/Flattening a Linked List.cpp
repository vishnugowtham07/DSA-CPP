
public:
    Node *flatten(Node *root) {
        // code here
        vector <int> ans;
        
        Node* head = root;
        
        while(head  != NULL)
        {
            Node* temp = head;
            
            while(temp != NULL)
            {
                int val = temp -> data;
                ans.push_back(val);
                temp  = temp -> bottom ;
            }
            
            head = head -> next;
        }
        
        sort(ans.begin(), ans.end());
        
        Node* dummy = new Node(-1);
        Node* tail = dummy;
        
        int n = ans.size();
        for(int i = 0; i< n ; i++){
            
            Node* nn = new Node(ans[i]);
            tail -> bottom = nn;
            tail = tail -> bottom;
        }
        return dummy -> bottom;
        
    }
};
