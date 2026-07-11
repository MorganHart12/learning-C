#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

float snek_score(int num_files, int num_contributors, int num_commits,
                 float avg_bug_criticality)
{
    int size_factor = num_files * num_commits;
    int complexity_factor = size_factor + num_contributors;
    float final_score = complexity_factor * avg_bug_criticality;
    return final_score;
}

char *get_temperature_status(int temp)
{
    char cold[] = "too cold";
    char hot[] = "too hot";
    char good[] = "just right";

    if (temp < 70)
    {
        return cold;
    }
    if (temp > 90)
    {
        return hot;
    }
    else
    {
        return good;
    }
}

int can_access_registry(int is_premium, int reputation, int has_2fa)
{
    int true = 1;
    int false = 0;
    if (is_premium == 1 || has_2fa == 1 && reputation >= 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void print_numbers_reverse(int start, int end)
{
    int i = start;
    while (i >= end)
    {
        printf("%d\n", i);
        i--;
    }
}

void print_numbers_reverse(int start, int end)
{
    do
    {
        printf("%d\n", start);
        start--;
    } while (start >= end);
}

int main(void)
{
    printf("sizeof(char)   = %zu\n", sizeof(char));
    printf("sizeof(bool)   = %zu\n", sizeof(bool));
    printf("sizeof(int)   = %zu\n", sizeof(int));
    printf("sizeof(float)   = %zu\n", sizeof(float));
    printf("sizeof(double)   = %zu\n", sizeof(double));
    printf("sizeof(size_t)   = %zu\n", sizeof(size_t));
}

return 0;
}

#pragma once

typedef struct Coordinate {
  int x;
  int y;
  int z;
} coordinate_t;

coordinate_t new_coord(int x, int y, int z);
coordinate_t scale_coordinate(coordinate_t coord, int factor);

#include "coord.h"

coordinate_t new_coord(int x, int y, int z) {
  coordinate_t coord = {.x = x, .y = y, .z = z};

  return coord;
}

#include "coord.h"

struct Coordinate new_coord(int x, int y, int z) {
  struct Coordinate coord = {.x = x, .y = y, .z = z};
  return coord;
}

struct Coordinate scale_coordinate(struct Coordinate coord, int factor) {
  return new_coord(coord.x * factor, coord.y * factor, coord.z * factor);
}

coordinate_t scale_coordinate(coordinate_t coord, int factor) {
  coordinate_t scaled = coord;
  scaled.x *= factor;
  scaled.y *= factor;
  scaled.z *= factor;

  return scaled;

  #include "coordinate.h"

void coordinate_update_x(coordinate_t coord, int new_x) { coord.x = new_x; }

coordinate_t coordinate_update_and_return_x(coordinate_t coord, int new_x) {
  coord.x = new_x;
  return coord;
}

typedef struct coordinate {
  int x;
  int y;
  int z;
} coordinate_t;

void coordinate_update_x(coordinate_t coord, int new_x);
coordinate_t coordinate_update_and_return_x(coordinate_t coord, int new_x);

#include "exercise.h"

codefile_t change_filetype(codefile_t *f, int new_filetype) {
  codefile_t new_f = *f;
  new_f.filetype = new_filetype;
  return new_f;
}

typedef struct CodeFile {
  int lines;
  int filetype;
} codefile_t;

codefile_t change_filetype(codefile_t *f, int new_filetype);
