int main() {
    int i = 0;

   
    double* db = &i; // type mismatch

    int *ip = i; // type mismatch

    int *p = &i; // good


    return 0;
}
