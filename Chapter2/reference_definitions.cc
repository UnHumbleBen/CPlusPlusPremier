int main() {
    int ival = 1.01; // valid
    int &rval1 = 1.01; // invalid, references can only be bound to objects 
    int &rval2 = ival; // valid
    int &rval3; // invalid, refererences need to be initialized

    return 0;
}
