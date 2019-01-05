int main() {
    // int* ip, &r = ip;
    // ip is int*, r is pointer to int??? (shouldn't compile?)

    // int i, *ip = 0;
    // double* a = i;
    // double b = ip;
    // i is int, *ip is int*

    int* ip, ip2;
    double* a = ip; // int*
    double* b = ip2; // int
}
