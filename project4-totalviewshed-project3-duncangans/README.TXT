Duncan Gans
GIS Algorithms
October 31, 2017

viewshed.c
  This file is what runs the viewshed algorithm. It takes a file with a terrain
  grid, and a file to return the data, and creates a total viewshed from the 
  first file, and moves it into the second file.  

viewshed_blocked.c
  Does the same thing as above, but using a blocked layout.

viewshed_parallel.c
  Does the same thing as viewshed.c but parallelizes the for loop

viewshed.h
  Includes the code that creates the Grid structure as well as all of the 
  function declarations

test1.asc, test2.asc, test3.asc, set1.asc
  Various test files. They all work well.


 Problems, qualifications:
  To my knowledge, the code works well. In all of the small tests I created
for it, it worked well. It would not entirely surprise me if there are minor
problems, but I have not come across them. When testing it against the set1.vis
offered by professor Toma, my results matched Toma's. However, the way they
are rendered is slightly different. Mine map across the other side in a way that
Professor Toma's don't. The actual positioning is the same, but my rendering 
seems to be cut and wrapped onto the other side. It will be more obvious with
the attached images. This difference was likely in the format of the files or
how render works and NOT in my algorithm. This is obvious because the renders
are identical once the wrapping is done. Overall a fun, challenging lab. It
probably took me around 15 hours total (partially because I was just being dumb). 
