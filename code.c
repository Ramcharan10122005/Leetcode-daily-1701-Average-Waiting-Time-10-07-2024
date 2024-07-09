double averageWaitingTime(int** customers, int s, int* customersColSize) {
    long long ans = 0;
    int curr = 1;
    for (int i = 0; i < s; i++) {
        curr = fmax(curr, customers[i][0]);
        int finish = customers[i][1] + curr;
        curr = finish;
        int waittime = finish - customers[i][0];
        ans += waittime;
    }
    return (double)ans / s;
}
