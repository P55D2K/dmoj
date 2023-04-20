// #include <bits/stdc++.h>
// using namespace std;

// int get_shortest_index(vector<int> queue_lengths) {
//     int shortest = INT_MAX;
//     for (int i = 0; i < sizeof(queue_lengths); i++) {
//         if (queue_lengths[i] < shortest)
//             shortest = queue_lengths[i];
//     }
//     return shortest;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m; cin >> n >> m;
//     vector<int> queue_lengths;
//     for (int i = 0; i < n; i++) { cin >> queue_lengths[i]; }

//     int shortest_queue_index;
//     while (m > 0) {
//         shortest_queue_index = get_shortest_index(queue_lengths);
//         cout << queue_lengths[shortest_queue_index] << endl;
//         queue_lengths[shortest_queue_index]++; m--;
//     }

//     return 0;
// }

// got error 