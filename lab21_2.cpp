#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2){
	double Horizon;
	double Vertical;
	if(R1->x+R1->w > R2->x){

		if(R1->x > R2->x){
			Horizon=R1->w-(R1->x-R2->x);
		}else{
			Horizon=R1->w-(R2->x-R1->x);
		}
//--------------------------------------------------------
		if(Horizon > R1->w){
			Horizon=R1->w;
		}else if(Horizon > R2->w){
			Horizon=R2->w;
		}else{
			Horizon=Horizon;
		}
//--------------------------------------------------------
		if(R1->y > R2->y){
			Vertical=R1->h-(R1->y-R2->y);
		}else{
			Vertical=R1->h-(R2->y-R1->y);
		}
//--------------------------------------------------------
		if(Vertical > R1->h){
			Vertical=R1->h;
		}else if(Vertical > R2->h){
			Vertical=R2->h;
		}else Vertical=Vertical ;

		return Horizon*Vertical;
//--------------------------------------------------------
	}else return 0;
}

int main(){
	// Rect R1 = {1,1,5,5};
	// Rect R2 = {2,2,5,5};	
	// cout << overlap(R1,R2);	

	// Rect R1 = {1,1,5,5};
	// Rect R2 = {7,2,3,3};	
	// cout << overlap(R1,R2);	

	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};	
	cout << overlap(&R1,&R2);	
}