#include <stdio.h>
#include <conio.h>
#define max 30

void main(){
    int i,j,n,bt[max],wt[max],tat[max];   /*bt->burst time, wt->waiting time, tat->turn around time*/
    float awt=0,atat=0;                   /*awt->average waiting time, atat->average turn around time*/

    printf("Enter the number of process");
    scanf("%d",&n);
    printf("Enter the burst time of the processes");
    for (i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }
    printf("Process\t Burst Time\t Waiting Time\t Turn Around Time\n");
    for(i=0;i<n;i++){
        wt[i]=0;    
        tat[i]=0;
        for(j=0;j<i;j++){
            wt[i]=wt[i]+bt[j];      //waiting time
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("Average Waiting Time = %f\n",awt);
    printf("Average Turn Around Time = %f\n",atat);
} 