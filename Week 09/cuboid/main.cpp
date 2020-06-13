// Madison Jordan
// CS120-15
// Desc: calculates volume of a cubiod


#include <iostream>
#include <assert.h>
#include "Cuboid.h"
using namespace std;

int main() {
	Cuboid my_cuboid[4];

	my_cuboid[0].setWidth(5.0);


	my_cuboid[1].setHeight(3.00013);


	my_cuboid[3].setDepth(4.7);

	Cuboid foo = Cuboid(13.6666);
	Cuboid bar = Cuboid(17.01, 9.87, 1.23);

	assert(my_cuboid[2].isCube() == true);

	cout << "== Volumes ==" << endl
		 << "1: " << my_cuboid[0].calcVolume() << endl
		 << "2: " << my_cuboid[1].calcVolume() << endl
		 << "3: " << my_cuboid[2].calcVolume() << endl
		 << "4: " << my_cuboid[3].calcVolume() << endl
		 << "Foo: " << foo.calcVolume() << endl
		 << "Bar: " << bar.calcVolume() << endl;

	return 0;
}
