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

#include "exercise.h"
#include <stdio.h>

void dump_graphics(graphics_t gsettings[10]) {
  int *ptr = (int *)gsettings;
  for (int i = 0; i < 30; i++) {
    printf("settings[%d] = %d\n", i, ptr[i]);
  }
}
#include <stdio.h>

void core_utils_func(int core_utilization[]) {
  printf("sizeof core_utilization in core_utils_func: %zu\n",
        sizeof(core_utilization));
}

// don't touch below this line

int main() {
  int core_utilization[] = {43, 67, 89, 92, 71, 43, 56, 12};
  int len = sizeof(core_utilization) / sizeof(core_utilization[0]);
  printf("sizeof core_utilization in main: %zu\n", sizeof(core_utilization));
  printf("len of core_utilization: %d\n", len);
  core_utils_func(core_utilization);
  return 0;
}

void concat_strings(char *str1, const char *str2) {

  while (*str1 != 0) {
    
    str1++;
  }
    
  while (*str2 != 0) {
      *str1 = *str2;
      str1++;
      str2++;
      }
  *str1 = '\0';



int smart_append(TextBuffer *dest, const char *src) {
  if (dest == NULL || src == NULL) {
    return 1;
  }
  const int max_buffer_size = 64;

  size_t srclen = strlen(src);

  int remaining_space = max_buffer_size - dest->length - 1;

  


  if (srclen > remaining_space) {
    strncat(dest->buffer, src, remaining_space);
    dest->length = max_buffer_size - 1;
    return 1;
  } else  {
    strncat(dest->buffer, src, remaining_space);
    dest->length += srclen;
    return 0;
  }
  


employee_t create_employee(int id, char *name) {
  employee_t emp = {
      .id = id,
      .name = name,
      .department = NULL,
  };
  return emp;
}

department_t create_department(char *name) {
  department_t dept = {
      .name = name,
      .manager = NULL,
  };
  return dept;
}

void assign_employee(employee_t *emp, department_t *department) {
  emp->department = department;
}

void assign_manager(department_t *dept, employee_t *manager) {
  dept->manager = manager;
}


}
typedef struct SnekObject snekobject_t;

typedef struct SnekObject {
  char *name;
  snekobject_t *child;
} snekobject_t;

snekobject_t new_node(char *name);

typedef struct Employee employee_t;
typedef struct Department department_t;

struct Employee {
  int id;
  char *name;
  department_t *department;
};

struct Department {
  char *name;
  employee_t *employee;  
  employee_t *manager;
};

employee_t create_employee(int id, char *name);
department_t create_department(char *name);

void assign_employee(employee_t *emp, department_t *department);
void assign_manager(department_t *dept, employee_t *manager);