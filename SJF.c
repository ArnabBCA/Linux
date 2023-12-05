#include <stdio.h>
#include <conio.h>
#define max 30

void main(){
    int i,j,n,t,p[max],bt[max],wt[max],tat[max]; //t=swapping,p=process, bt=burst time,tat=turnaround time
    float awt=0,atat=0;

    printf("Enter the number of process");
    scanf("%d",&n);
    printf("Enter the process number");
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    printf("Enter the burst time of the process");
    for(i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }

    //applying bubble sort to sort according to their burst time
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(bt[j]>bt[j+1]){
                t=bt[j];
                bt[j]=bt[j+1];     //sorting burst time
                bt[j+1]=t;

                t=p[j];
                p[j]=p[j+1];      //shorting process
                p[j+1]=t;
            }
        }
    }
    printf("process \tburst time \t waiting time \n turn around time \n ");
    for(i=0;i<n;i++){
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++){
            wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t%d\t\t%d\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("Average waiting time %f\n",awt);
    printf("Average turn around time %f\n",atat);
}