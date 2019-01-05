int main() {
    const int buff; // illegal: uninitialized const
    int cnt = 0; // legal
    const int sz = cnt; // legal
    ++cnt; ++ sz; // illegal: modifying const value
}
