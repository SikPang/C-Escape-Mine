#pragma once
#ifndef MAP_H
#define MAP_H
class Map
{
	static int map1[25][25];
	static int map2[25][25];
	static int map3[25][25];
public:
	static int mapNum;
	static int map[25][25];
	static void SetMap(int stage);
	static bool MapChecker(int x, int y);
	static void DrawMap();
};
#endif