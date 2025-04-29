typedef int (*operation_func)(int, int);
int mul(int x, int y) {
    return x * y;
}
int divide(int x, int y) {
    return x / y;
}
int squ(int x, int y) {
    return x * x;  
}
operation_func op_mul = mul;
operation_func op_div = divide;
operation_func op_squ = squ;
