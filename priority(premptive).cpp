#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

struct Process {
    int pid;
    int burst_time;
    int priority;
    int arrival_time;
    int remaining_time;
    int completion_time = 0;
    int turnaround_time = 0;
    int waiting_time = 0;
};

bool compare_arrival_time(Process a, Process b) {
    return a.arrival_time < b.arrival_time;
}

int main() {
    vector<Process> processes;
    int n;

    cout << "Enter the number of processes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Process p;
        cout << "Enter arrival time, burst time, and priority for process " << i + 1 << ": ";
        cin >> p.arrival_time >> p.burst_time >> p.priority;
        p.pid = i + 1;
        p.remaining_time = p.burst_time;
        processes.push_back(p);
    }

    sort(processes.begin(), processes.end(), compare_arrival_time);

    int current_time = processes[0].arrival_time;
    int completed_processes = 0;
    int is_idle = 0;

    while (completed_processes != n) {
        int idx = -1;
        int minimum = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (processes[i].arrival_time <= current_time && processes[i].remaining_time > 0 && processes[i].remaining_time < minimum) {
                minimum = processes[i].remaining_time;
                idx = i;
            }
        }

        if (idx != -1) {
            processes[idx].remaining_time -= 1;
            current_time++;
            is_idle = 0;

            if (processes[idx].remaining_time == 0) {
                processes[idx].completion_time = current_time;
                processes[idx].turnaround_time = processes[idx].completion_time - processes[idx].arrival_time;
                processes[idx].waiting_time = processes[idx].turnaround_time - processes[idx].burst_time;
                completed_processes++;
            }
        } else {
            current_time++;
            is_idle = 1;
        }
    }

    cout << "\nProcess ID\tArrival Time\tBurst Time\tPriority\tCompletion Time\tTurnaround Time\tWaiting Time\n";
    for (int i = 0; i < n; i++) {
        cout << processes[i].pid << "\t\t" << processes[i].arrival_time << "\t\t" << processes[i].burst_time << "\t\t" << processes[i].priority << "\t\t" << processes[i].completion_time << "\t\t" << processes[i].turnaround_time << "\t\t" << processes[i].waiting_time << "\n";
    }

    return 0;
}