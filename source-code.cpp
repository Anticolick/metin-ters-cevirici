#include <iostream>
  #define MAKS 100
  using namespace std;

  int main()
  {
   char cumle[MAKS];
  	char tersi[MAKS];
  	cin.getline(cumle, MAKS - 1);

  	int i = -1, t = 0, basi = 0, sonu;
  	do {
  		++i;
  		for(; cumle[i] != ' ' && cumle[i] != '\0'; i++);
  		sonu = i - 1;

  		while(sonu >= basi) tersi[t++] = cumle[sonu--];
  		tersi[t++] = ' ';

  		basi = i + 1;
  	} while(cumle[i]);
  	tersi[t] = '\0';

  	cout << tersi << '\n';

  	return 0;
  }
