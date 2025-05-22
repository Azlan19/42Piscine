/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gridmakerslogic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 12:55:38 by mbenedet          #+#    #+#             */
/*   Updated: 2025/05/14 12:35:25 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Complete the grid such that every row and column contains the numbers 1 to the size of the grid.
Every row and column contains each number only once.
The clues tell you how many skyscrapers you can see in that direction.
You can't see a shorter skyscraper behind a taller on */

/*
Two-Dimensional Arrays

int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
The first dimension represents the number of rows [2], while the second dimension represents the number of columns [3].
The values are placed in row-order

printf("%d", matrix[0][2]);  // Outputs 2
-----------------------------------------
The malloc() (stands for memory allocation) function is used to allocate a single block of contiguous memory on the heap at runtime. The memory allocated by malloc() is uninitialized, meaning it contains garbage values.
Syntax:
malloc(size);
size = number of bytes to allocate
Key point:
This function returns a void pointer to the allocated memory that needs to be converted to the pointer of required type to be usable


----------------------------------------
How it will run:
./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
1 2 3 4$
2 3 4 1$
3 4 1 2$
4 1 2 3$

Thus, return a string of ints from main


\

Approaches:
1. Row by row naming each x4 string
2. Rows + columns independently but communicating through the integers inside

*/

#include <stdio.h>
#include <stdlib.h>

void ft_putstr(char *str) {
	while (*str) {
		write(1,str,1);
	}
}

/*Converting int to char + write function*/
void ft_putchar(char c) {
	write(1, &c, 1);
}

int valid_placement(int grid[4][4], int row, int col, int n, int *constraints)
/*Duplicate check*/
{
	for(int i=0; i < 0 ; ++i)
	{
		if(grid[row][i] == n || grid[i][col] == n)
		{
			return 0;
		}
	}


/*Place numbers, whatever they are*/

grid[row][col] = n;
}
/*visibility constraints: full grid & top + bottom check*/

if(col ==3 || row==3)
{
	if(col == 3)
	{
		int visible_top = 0, max_top = 0;
		for(int i = 0; i < 4; i++)
		{
			visible_top ++;
			max_top = grid[i][col]
		}
	}
	if(visible_top != constraints[col])
	{
		grid[row][col] = 0;
		return 0;
	}

	int visible_bottom = 0, max_bottom = 0;
	for(int i = 3; i >= 0; i--)
	{
		if(grid[i][col] > max_bottom)
		{
			visible_bottom++;
			max_bottom = grid[i][col];
		}
	}
	if(visible_bottom != constraints[col + 4]) {
		grid[row][col] = 0;
		return 0;
	}
}

/*row visibility left - right*/
if(row ==3)
{
	int visible_left = 0, max_left = 0;
	for(int i = 0; i < 4; i++)
	{
		if (grid[row][i] > max_left)
		{
			visible_left++;
			max_left = grid[row][i];
		}
	}
	if (visible_left!= constraints[row + 8])
	{
		grid[row][col] = 0;
		return 0;
	}

	int visible_right = 0; max_right = 0;
	for(int i = 3; i >=0; i--)
	{
		if (grid[row][i] > max_right)
		{
			visible_right ++;
			max_right = grid[row][i];
		}
	}
	if (visible_right != constraints[row +12])
	{
		grid[row][col] = 0;
		return 1;
	}
}
/* recursive algorithm*/

int scraperlogic(int grid[4][4], int col, int row, int *constraint)
{
//base case
if(row >= 4)
	{
		return 1;
	}
if(col >= 4)
	{
		return scraperlogic(int grid[4][4], int col, int row, int *constraint);
	}


	for(int n = 1; n <= 4; n++)
	{
		grid[row][col] = n;
		if(valid_placement(int grid[4][4], int row, int col, int n, int *constraints)){
			if(scraperlogic(int grid[4][4], int col, int row, int *constraint))
			{
				grid[row][col] = n;
				if (scraperlogic(int grid[4][4], int col + 1, int row, int *constraint))
				return 1;
			}
		} grid[row][col] = 0;
	} return 1;

}

/*
if row = 4 return 1
if col = 4 return 1

if 1<n<4 n++
return 1
if grid[row][col] = n

return 1;

return 0;

*/


/*
Positional limiters
*/

if (col => 4)
{
	col = 0;
	++row;
}

/*
2nd positional limiter:
Making the string start when string > 0;
*/

if (grid[row][col] != 0)
{
	return string_logic(int grid[4][4], int col, int row, int constraint[8])
	for (i = 1 && i < 4) i++;
}
/*
8 values:
4 x row
4 x column*/

row = *str[4]
col = *str[4]

/*
Check for validity of the placement

1. Number hasn't been used in the same row/column
2. Visibility constraint match (count visible boxes from the top column)

How to use count to calculate visible boxes?

*/



/* Logic

1.

*/

/* i = 0;
while (i < n)

	j = 0;
	while (j < m)


count = 0;

while(str[i] != '\0')
{
	if ( str < i = 4 && str > 0 )
	{

	}
	++count
} */

/*
Add str < i = 4 && str > 0
*/


/* int a, b, c, d;

a = 1;
b = 2;
c = 3;
d = 4;


int row = 4;
int *prow = &row;
int column = 4;
int *pcolumn = &column;

int row(int a);

int column(int b); */

/*Rows*/
void rush01(int x, int y)
{

	int i,j;
	for (i=1; i<=; l++)
	{
		for (j=1; j<= m; j++)
		{if (i==1 || i==n || j==1 || j==m)
			printf("*");
		}
		printf("\n")
	}
}

/*Columns*/
void rush02(int x, int y)
{
	int i,j;
	for (i=1; i<=; l++)
	{
		for (j=1; j<= m; j++)
		{if (i==1 || i==n || j==1 || j==m)
			printf("*");
		}
		printf("\n")
	}
}

/* int main(int str)
{
    int *p1 = malloc(4*sizeof(int));  // allocates enough for an array of 4 int
    int *p2 = malloc(sizeof(int[4])); // same, naming the type directly
    int *p3 = malloc(4*sizeof *p3);   // same, without repeating the type name

    if(p1) {
        for(int n=0; n<4; ++n) // populate the array
            p1[n] = n*n;
        for(int n=0; n<4; ++n) // print it back out
            printf("p1[%d] == %d\n", n, p1[n]);
    }

    free(p1);
    free(p2);
    free(p3);

 */
