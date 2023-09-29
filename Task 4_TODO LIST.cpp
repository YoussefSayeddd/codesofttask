#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
#include <map>
#include <set>
using namespace std;

map<string, string> TODO_List;
void addTask(string taskName);
void viewTasks();
void markAsCompleted(string taskName);
void removeTask(string taskName);
string enterTaskName();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    TODO_List["buy groceries"] = "Pending";
    TODO_List["do assignment"] = "Pending";
    TODO_List["call mom"] = "Pending";
    TODO_List["go for a run"] = "Pending";

    int choice = 0;
    string taskName;

    while (choice != 5) {
        cout << "TO DO LIST\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark As Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            taskName = enterTaskName();
            addTask(taskName);
            break;
        case 2:
            viewTasks();
            break;
        case 3:
            taskName = enterTaskName();
            markAsCompleted(taskName);
            break;
        case 4:
            taskName = enterTaskName();
            removeTask(taskName);
            break;
        case 5:
            cout << "THANK YOU...";
            break;
        default:
            cout << "Invalid choice. Please select a valid option." << endl;
            break;
        }
    }
    return 0;
}
string enterTaskName() {
    string taskName;
    cout << "Enter Task Name: ";
    cin.ignore(); 
    getline(cin, taskName);
    return taskName;
}
void addTask(string taskName) {
    TODO_List[taskName] = "Pending";
    cout << "Task '" << taskName << "' added successfully.\n";
}
void viewTasks() {
    cout << setw(30) << left << "Task" << setw(15) << "Status" << endl;
    cout << string(45, '-') << endl;
    for (auto itr = TODO_List.begin(); itr != TODO_List.end(); ++itr)
        cout << setw(30) << left << itr->first << setw(15) << itr->second << endl;
    cout << endl;
}
void markAsCompleted(string taskName) {
    if (TODO_List.count(taskName)) {
        TODO_List[taskName] = "Completed";
        cout << "Task '" << taskName << "' marked as completed." << endl;
    }
    else {
        cout << "Task not found." << endl;
    }
}
void removeTask(string taskName) {
    if (TODO_List.erase(taskName)) {
        cout << "Task '" << taskName << "' removed successfully." << endl;
    }
    else {
        cout << "Task not found." << endl;
    }
}
