//creating huffman tree by storing nodes in min priority queue
//encoding by traversing tree in preorder(0 for left and 1 for right)
// S = "abcdef"
// f[] = {5, 9, 12, 13, 16, 45}
//f : 0
// c : 100
// d : 101
// a : 1100
// b : 1101
// e : 111
class Solution
{
	public:
 struct node{
	        char data;
	        int freq;
	        node* left=NULL,*right=NULL;
	        
	    };
	    
 struct compare {
 
    bool operator()(node* l, node* r)
 
    {
        return (l->freq > r->freq);
    }
};
    void print(node*t,string s,vector<string>&res)
	    {
	        if(!t) return;
	        if(t->data!='#') {res.push_back(s);}
	        print(t->left,s+"0",res);
	        print(t->right,s+"1",res);
	    }
	   
	 	vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    priority_queue<node*,vector<node*>,compare> hp;
		    for(int i=0;i<N;i++)
		    {
		        node* temp= new node();
		        temp->freq=f[i];
		        temp->data=S[i];
		        hp.push(temp);
		    }
		    
		    while(hp.size()!=1)
		    {
		        node* l=hp.top();
		        hp.pop();
		        node*r=hp.top();
		        hp.pop();
		        node* temp= new node();
		        temp->freq=l->freq+r->freq;
		        temp->data='#';
		        temp->left=l;
		        temp->right=r;
		        hp.push(temp);
		        
		    }
		    
		    vector<string>res;
		    print(hp.top(),"",res);
		    return res;
		}
};
