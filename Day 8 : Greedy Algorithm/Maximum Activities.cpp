#include<bits/stdc++.h>
struct meet {
    int meetingID;
    int startTime;
    int endTime;
};

bool compare(struct meet a, struct meet b) {
    if (a.endTime == b.endTime) {
        return a.meetingID < b.meetingID;
    }
    else{
        return a.endTime < b.endTime;
    }
}

int maximumActivities(vector<int> &start, vector<int> &finish) {
    int n = start.size();
    struct meet meeting[n];

    for (int i = 0; i < n; i++) {
        meeting[i].meetingID = i + 1;
        meeting[i].startTime = start[i];
        meeting[i].endTime = finish[i];
    }
    sort(meeting, meeting + n, compare);
    int currentTime = meeting[0].endTime;
    int c = 1;
    for (int i = 1; i < n; i++) {
        if (meeting[i].startTime >= currentTime) {
            c++;
            currentTime = meeting[i].endTime;
        }
    }

    return c;
}
