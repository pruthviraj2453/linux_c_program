#include<stdio.h>

void main(){
int i,j,n,bt[30],at[30],wt[30],tat[30],temp[30];
float awt=0,atat=0;
printf("Enter number of processes:");
scanf("%d",&n);
printf("Enter burst time of each process:");
for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
}
printf("Enter arrival time of each process:");
for(i=0;i<n;i++)
{
scanf("%d",&at[i]);
}
temp[0]=0;
printf("process\t burst time\t arrival time\t waiting time\t TAT\n");
for(i=0;i<n;i++)
{
wt[i]=0;
tat[i]=0;
temp[i+1]=temp[i]+bt[i];
if(temp[i]>at[i])
{
wt[i]=temp[i]-at[i];
}
else{
temp[i+1]=temp[i+1]-temp[i]+at[i];
}
tat[i]=wt[i]+bt[i];
awt=awt+wt[i];
atat=atat+tat[i];
printf("%d\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],at[i],wt[i],tat[i]);
}
awt=awt/n;
atat=atat/n;
printf("Average WT:%f\n",awt);
printf("Average TAT:%f\n",atat);
}
