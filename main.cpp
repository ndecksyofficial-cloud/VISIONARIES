int main() {
    // Instructions 1-3: dynamic array, capacity 4, size 0
    int capacity = 4;
    int size = 0;
    int* arr = new int[capacity];

    cout << "Initial state:\n";
    display(arr, size, capacity);

    // Instruction 8: at least 15 insertions
    cout << "\n=== INSERTIONS ===\n";
    for (int i = 1; i <= 15; i++) {
        cout << "\nOperation: insert(" << 100 + i << ")\n";
        insert(arr, size, capacity, 100 + i);
        display(arr, size, capacity);   // Instruction 9
    }

    // Instruction 8: at least 10 deletions (14 so the shrink is visible)
    cout << "\n=== DELETIONS ===\n";
    for (int i = 1; i <= 14; i++) {
        int pos = size - 1;             // always a valid index
        cout << "\nOperation: deleteAt(" << pos << ")\n";
        deleteAt(arr, size, capacity, pos);
        display(arr, size, capacity);   // Instruction 9
    }

    // Challenge task: report resize count
    cout << "\nTotal resizes: " << resizeCount << endl;

    // Instruction 11: free memory
    delete[] arr;
    arr = nullptr;

    return 0;
}
