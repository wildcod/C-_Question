#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,lastAnswer = 0,queries,type,x,y,seq,ind;
	cin >> n >> queries;

	vector<int> seq1,seq2;

	while(queries--){
		cin >> type;
		cin >> x >> y;

		if(type == 1){
			seq = (x ^ lastAnswer) % n;
			if(seq == 0){
			seq1.push_back(y);
		    }
		    else seq2.push_back(y);
		}
		if(type == 2){
			seq = (x ^ lastAnswer) % n;
			if(seq == 0){
				ind = y % seq1.size();
				lastAnswer = seq1[ind];
			}else {
				ind = y % seq2.size();
				lastAnswer = seq2[ind];
			}
			cout << lastAnswer << endl;
		}

	}



}