#include<stdio.h>

void read_ints_compute_avg(const char* file_name)
{
  FILE* file = fopen (file_name, "r");
  int current = 0;
  int size = 0;
  double sum = 0;
  
  fscanf (file, "%d", &current);
  double avg = current;
  while (!feof (file))
    {  
      printf ("%d ", current);
      size++; sum+=current; // method 1
      avg += (current - avg)/size; // method 2
      fscanf (file, "%d", &current);      
    }
  fclose (file);
  printf("\nmethod 1 - size is %d, avg is %lf\n", size, sum/size);
  printf("\nmethod 2 - size is %d, avg is %lf\n", size, avg);
}

int main(void)
{
    read_ints_compute_avg("elephant_seal_data.txt");
    return 0;
}