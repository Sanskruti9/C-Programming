//  If area of room is 144 sq m. Then how many tiles of size 12*12 sq cm will be required to cover the flooring of room.

#include<stdio.h>
void main()  {
	
	double room_area = 144;
	double tile_size = 12;
	double area_oneTile = 12*12;
	double no_of_tiles;
	double room_newArea = 144*10000;       //conversion of sq m to sq cm
	
	no_of_tiles = room_newArea / area_oneTile;
	
	printf("Total no of tiles required are %lf", no_of_tiles);
	
}
