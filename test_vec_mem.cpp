/*By Shuai Wei 1/7/2018
 *Simple testing code for memory check of a vector of pointers to vectors.
 * */

#include <vector>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
	int N = 10000; // a number of vector size.
	vector< vector<unsigned char>* > temp; // a vector of pointers to vectors of type unsigned char

	temp.resize(N); // N pointers in temp
	cout << (temp.size() == N) << endl; // should show 1

	for (int i=0; i<N; i++){
		temp[i] = new vector<unsigned char>;
		(*temp[i]).reserve(N); // reserve mem for each vector
		(*temp[i]).resize(N); // resize each vector
	}
	cout << (temp.size()) << endl;
	for (int i=0; i<N; i++){
		delete temp[i]; // free each inner vector
	}
	temp.clear(); // free the outer vector
	cout << (temp.size()) << endl; // now it should be 0
	return 0;
}
