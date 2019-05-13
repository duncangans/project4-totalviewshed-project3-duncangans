#ifndef viewshed
#define viewshed

#include <stdio.h>
#include <time.h>
#include <assert.h>
#include <stdlib.h>


typedef struct _grid {

     int  rows, cols, ndvalue, blocksPerRow, blocksPerCol;//Necessary variables

     float* data_rowmajor;   //the values in the grid, in row-major order

     float* data_blocked;    //the values in blocked layout(not actually used)

     int* total_view_shed; 

} Grid;

//Function declarations
void readGridfromFile (char * filename, char * newfile, Grid *grid);
void totalViewshed(Grid *grid);
void createBlockedLayout(Grid *grid);
void createBlockedGrid(Grid *grid);
int rowBlockMajor(int block, int place, Grid *grid);
int colBlockMajor(int block, int place, Grid *grid);
void printGrid(Grid * grid);
float getRowMajor(Grid *grid, int row, int col);
int createViewshed(Grid * grid, int testRow, int testCol);
int isVisible(Grid *grid, int block, int place, int testrow, int testcol);
void shedIntoFile(Grid *grid, char * newfile);
float getBlocked(Grid *grid, int row, int col);



#endif
