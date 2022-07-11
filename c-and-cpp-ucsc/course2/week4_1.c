/* week4 assignments: option 1 */
#include<stdio.h>
void read_data(FILE* ptr, int d[], int size)
{
    int temp = 0;
    while(temp < size && fscanf(ptr, "%d", &d[temp]) == 1)
        temp++;
}
// avg, max
double get_avg(int d[], int size)
{
    double avg = 0.0;
    for(int i = 0;i<size;i++) avg+=d[i];
    return avg/size;
}
int get_max(int d[], int size)
{
    int current_max = d[0];
    for(int i = 0;i<size;i++)
        if(d[i] > current_max) current_max = d[i];
    return current_max;
}
// output
void print_arr(int d[], int size)
{
    for(int i =0;i<size;i++) printf("%d\t", d[i]);
}
void main()
{
    int i, sz=0;
    FILE *ifp, *ofp;
    ifp = fopen("week4_1_input", "r");
    ofp = fopen("answer-hw3", "w");
    fscanf(ifp, "%d", &sz); // get size
    int data[sz];
    read_data(ifp, data, sz);
    print_arr(data, sz);
    printf("\navg=%lf max=%d\n", get_avg(data, sz), get_max(data, sz));
    // write into file
    for(int i = 0;i<sz;i++)
    {
        fprintf(ofp, "%d\t", data[i]);
    }    
    fprintf(ofp, "\navg=%lf max=%d\n", get_avg(data, sz), get_max(data, sz));
    fclose(ifp);
    fclose(ofp);
}