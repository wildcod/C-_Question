#include <iostream>
using namespace std;
int x = 0,y = 0;
int turn = 1,t;

int incr(){
	t = t+10;
	return t;
}


void turn_direction(){
	if(turn == 1){
		x = x + incr();
		
	} 
	else if(turn == 2){
		y = y + incr();
	
	}
	else if(turn == 3){
		x = x - incr();
	
	}
	else {
		y = y - incr();
		
	}

	if(turn == 4){
		turn = 1;
	}
	else{
		turn++;
	}
}

int main()
{
	int n;
	cin >> n;

	while(n--){
		turn_direction();
	}

	cout << x << " " << y;
}