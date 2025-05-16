#include <stdio.h>
void priorityScheduling(int processes[], int n, int bt[], int priority[]) {
 int wt[n], tat[n], total_wt = 0, total_tat = 0;
 for (int i = 0; i < n - 1; i++) {
 for (int j = i + 1; j < n; j++) {
 if (priority[i] > priority[j]) {
 int temp = priority[i];
 priority[i] = priority[j];
 priority[j] = temp;
 temp = bt[i];
 bt[i] = bt[j];
 bt[j] = temp;
 temp = processes[i];
 processes[i] = processes[j];
 processes[j] = temp;}}}
 wt[0] = 0;
 for (int i = 1; i < n; i++) {
 wt[i] = wt[i - 1] + bt[i - 1];}
 for (int i = 0; i < n; i++) {
 tat[i] = bt[i] + wt[i];
 total_wt += wt[i];
 total_tat += tat[i];}
 printf("\nProcess\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n");
 for (int i = 0; i < n; i++) {
 printf("P%d\t%d\t\t%d\t\t%d\t\t%d\n", processes[i], bt[i], priority[i], wt[i], tat[i]);}
 printf("\nAverage Waiting Time = %.2f\n", (float)total_wt / n);
 printf("Average Turnaround Time = %.2f\n", (float)total_tat / n);}
int main() {
 int n;
 printf("Enter number of processes: ");
 scanf("%d", &n);
 int processes[n], bt[n], priority[n];
 printf("Enter burst times and priorities:\n");
 for (int i = 0; i < n; i++) {
 processes[i] = i + 1;
 printf("P%d Burst Time: ", i + 1);
 scanf("%d", &bt[i]);
 printf("P%d Priority: ", i + 1);
 scanf("%d", &priority[i]);
 }
 priorityScheduling(processes, n, bt, priority);
 return 0;}