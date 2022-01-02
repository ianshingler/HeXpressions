#ifndef Hexpressions
#define Hexpressions

#define ROW_SIZE     8 // The number of LEDs in a row
#define COL_SIZE     8 // The number of LEDs in a column


/* Empty matrix template        */
// int mtx_empty[8][8] = {
//     { 0, 0, 0, 0, 0, 0, 0, 0 },
//     { 0, 0, 0, 0, 0, 0, 0, 0 },
//     { 0, 0, 0, 0, 0, 0, 0, 0 },
//     { 0, 0, 0, 0, 0, 0, 0, 0 },
//     { 0, 0, 0, 0, 0, 0, 0, 0 },
//     { 0, 0, 0, 0, 0, 0, 0, 0 },
//     { 0, 0, 0, 0, 0, 0, 0, 0 },
//     { 0, 0, 0, 0, 0, 0, 0, 0 }
// };

/* Standard matrix definitions.
 * It's recommended that you comment out unused matrices
 * to save on-board memory, as per mtx_empty above.
 */

/* ------------------------
            Spiral 
   ------------------------ */
int mtx_spiral1[8][8] = {
    { 0, 0, 1, 1, 1, 1, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 1, 0 },
    { 1, 0, 0, 0, 0, 0, 1, 0 },
    { 1, 0, 0, 1, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 1, 0, 0, 1 },
    { 0, 1, 0, 0, 0, 0, 0, 1 },
    { 0, 1, 0, 0, 0, 0, 1, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0 }
};

int mtx_spiral2[8][8] = {
    { 0, 0, 1, 1, 1, 1, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 0, 1, 1, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 1, 1, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 1, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0 }
};

int mtx_spiral3[8][8] = {
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 1, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 1, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 }
};

int mtx_spiral4[8][8] = {
    { 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 1, 0 },
    { 1, 0, 0, 1, 0, 0, 0, 1 },
    { 1, 0, 0, 0, 1, 0, 0, 1 },
    { 1, 0, 0, 1, 0, 0, 0, 1 },
    { 1, 0, 0, 0, 1, 0, 0, 1 },
    { 0, 1, 0, 0, 0, 1, 1, 0 },
    { 0, 0, 1, 0, 0, 0, 0, 0 }
};
int mtx_spiral5[8][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 0, 0, 1, 0 },
    { 1, 0, 0, 0, 1, 0, 0, 1 },
    { 1, 0, 0, 0, 1, 0, 0, 1 },
    { 1, 0, 0, 1, 0, 0, 0, 1 },
    { 1, 0, 0, 1, 0, 0, 0, 1 },
    { 0, 1, 0, 0, 1, 1, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};

int mtx_spiral6[8][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 1, 0, 1 },
    { 1, 0, 0, 0, 1, 0, 0, 1 },
    { 1, 0, 0, 1, 0, 0, 0, 1 },
    { 1, 0, 1, 0, 0, 0, 1, 0 },
    { 0, 0, 0, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 }
};


/* ------------------------
          Expressions 
   ------------------------ */
int mtx_smiley[8][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 1, 0 },
    { 1, 0, 1, 0, 0, 1, 0, 1 },
    { 1, 0, 1, 0, 0, 1, 0, 1 },
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 0, 0, 0, 0, 0, 0, 1 },
    { 0, 1, 0, 0, 0, 0, 1, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0 }
};


/* ------------------------
            Numbers 
   ------------------------ */
int mtx_0[8][8] = {
    { 0, 0, 1, 1, 1, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 1, 0, 0 },
    { 0, 1, 0, 0, 1, 1, 0, 0 },
    { 0, 1, 0, 1, 0, 1, 0, 0 },
    { 0, 1, 0, 1, 0, 1, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 0, 0 },
    { 0, 1, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 1, 1, 1, 0, 0, 0 }
};

int mtx_1[8][8] = {
    { 0, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 0, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 1, 0, 0 },
};

int mtx_2[8][8] = {
   { 0, 0, 1, 1, 1, 0, 0, 0 },
   { 0, 1, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 0, 0, 1, 0, 0, 0 },
   { 0, 0, 0, 1, 0, 0, 0, 0 },
   { 0, 0, 1, 0, 0, 0, 0, 0 },
   { 0, 1, 0, 0, 0, 0, 0, 0 },
   { 0, 1, 1, 1, 1, 1, 0, 0 }
};

int mtx_3[8][8] = {
   { 0, 0, 1, 1, 1, 0, 0, 0 },
   { 0, 1, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 0, 1, 1, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 0, 0, 0, 1, 0, 0 },
   { 0, 1, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 1, 1, 1, 0, 0, 0 }
};

int mtx_4[8][8] = {
   { 0, 0, 0, 0, 1, 0, 0, 0 },
   { 0, 0, 0, 1, 1, 0, 0, 0 },
   { 0, 0, 1, 0, 1, 0, 0, 0 },
   { 0, 1, 0, 0, 1, 0, 0, 0 },
   { 0, 1, 1, 1, 1, 1, 0, 0 },
   { 0, 0, 0, 0, 1, 0, 0, 0 },
   { 0, 0, 0, 0, 1, 0, 0, 0 },
   { 0, 0, 0, 0, 1, 0, 0, 0 }
};

int mtx_5[8][8] = {
   { 0, 1, 1, 1, 1, 1, 0, 0 },
   { 0, 1, 0, 0, 0, 0, 0, 0 },
   { 0, 1, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 1, 1, 1, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 0, 0, 0, 1, 0, 0 },
   { 0, 1, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 1, 1, 1, 0, 0, 0 }
};

int mtx_6[8][8] = {
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0 },
};

int mtx_7[8][8] = {
   { 0, 1, 1, 1, 1, 1, 0, 0 },
   { 0, 0, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 0, 0, 1, 0, 0, 0 },
   { 0, 0, 0, 1, 0, 0, 0, 0 },
   { 0, 0, 1, 0, 0, 0, 0, 0 },
   { 0, 0, 1, 0, 0, 0, 0, 0 },
   { 0, 0, 1, 0, 0, 0, 0, 0 }
};

int mtx_8[8][8] = {
   { 0, 0, 1, 1, 1, 0, 0, 0 },
   { 0, 1, 0, 0, 0, 1, 0, 0 },
   { 0, 1, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 1, 1, 1, 0, 0, 0 },
   { 0, 1, 0, 0, 0, 1, 0, 0 },
   { 0, 1, 0, 0, 0, 1, 0, 0 },
   { 0, 1, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 1, 1, 1, 0, 0, 0 }
};

int mtx_9[8][8] = {
   { 0, 0, 1, 1, 1, 0, 0, 0 },
   { 0, 1, 0, 0, 0, 1, 0, 0 },
   { 0, 1, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 1, 1, 1, 1, 0, 0 },
   { 0, 0, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 0, 0, 0, 1, 0, 0 },
   { 0, 1, 0, 0, 0, 1, 0, 0 },
   { 0, 0, 1, 1, 1, 0, 0, 0 }
};

int mtx_hex[8][8] = {
   { 0, 1, 0, 1, 1, 1, 0, 0 },
   { 1, 0, 1, 0, 0, 0, 1, 0 },
   { 1, 1, 0, 0, 0, 0, 1, 1 },
   { 1, 1, 0, 0, 1, 1, 1, 1 },
   { 1, 1, 1, 1, 0, 0, 1, 1 },
   { 1, 1, 0, 0, 0, 0, 1, 1 },
   { 0, 1, 0, 0, 0, 1, 0, 1 },
   { 0, 0, 1, 1, 1, 0, 1, 0 }
};


// Function declarations - do not touch.
void set_by_matrix(int**, CRGB);
void show_pattern(int**, CRGB);

#endif
