//It helps to sort a max heap which has a pair of integers in such a way that while comparison if the first numbers of the apir are unequal then we sort the elements in decreaing orderas is the case in a maxheap and if the first two numbers in the apir are the same then we sort the second elements in ascending order


struct Comp
{
    bool operator()(pair<ll, ll> const& p1, pair<ll, ll> const& p2)
    {
        if (p1.first == p2.first)
        {
            // If the first elements are the same, sort in ascending order of the second elements
            return p1.second > p2.second;
        }
        else
        {
            // If the first elements are different, sort in descending order
            return p1.first < p2.first;
        }
    }
};

void solve() {
	
	// for(auto it: v1){
	// 	cout<<it<<" ";
	// }
	//cout<<endl;
	priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, Comp> pq,pq1;
	
	// while(!pq1.empty()){
	// 	auto it=pq1.top();
	// 	pq1.pop();
	// 	cout<<it.first<<" "<<it.second<<endl;
	// }
    
}
