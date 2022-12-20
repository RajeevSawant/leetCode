/*
* Given an array of meeting time intervals intervals where intervals[i] = [starti, endi], return the minimum number of conference rooms required.
* 
* 
Input: intervals = [[0,30],[5,10],[15,20]]
Output: 2

*/

int minMeetingRooms(vector<vector<int>>& intervals) {
    vector<int> start;
    vector<int> end;

    for (int i = 0, j = 0; i < intervals.size(); i++) {
        start.push_back(intervals[i][j]);
        end.push_back(intervals[i][j + 1]);
    }

    sort(start.begin(), start.end());
    sort(end.begin(), end.end());

    int e = 0, available = 0, rooms = 0;

    for (int st : start) {

        if (end[e] <= st) {
            e++; available++;
        }

        available ? --available : rooms++;
    }

    return rooms;
}