#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#define ROW  3
#define COL  3
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void Initbord( char bord[ROW][COL],int row,int col);
void Displaybord(char bord[ROW][COL], int row, int col);
void PlayMove(char bord[ROW][COL], int row, int col);
void ComMove(char bord[ROW][COL], int row, int col);
char IsWin(char bord[ROW][COL], int row, int col);