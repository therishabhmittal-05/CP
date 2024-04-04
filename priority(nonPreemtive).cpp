#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Process {
    int pid;
    int burst_time;
    int priority;
    int arrival_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
};

bool compare_priority(Process a, Process b) {
    return a.priority < b.priority;
}

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
        processes.push_back(p);
    }

    sort(processes.begin(), processes.end(), compare_arrival_time);

    int current_time = processes[0].arrival_time;
    sort(processes.begin(), processes.end(), compare_priority);

    for (int i = 0; i < n; i++) {
        if (current_time < processes[i].arrival_time) {
            current_time = processes[i].arrival_time;
        }

        processes[i].completion_time = current_time + processes[i].burst_time;
        processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
        processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;
        current_time = processes[i].completion_time;
    }

    cout << "\nProcess ID\tArrival Time\tBurst Time\tPriority\tCompletion Time\tTurnaround Time\tWaiting Time\n";
    for (int i = 0; i < n; i++) {
        cout << processes[i].pid << "\t\t" << processes[i].arrival_time << "\t\t" << processes[i].burst_time << "\t\t" << processes[i].priority << "\t\t" << processes[i].completion_time << "\t\t" << processes[i].turnaround_time << "\t\t" << processes[i].waiting_time << "\n";
    }

    return 0;
}