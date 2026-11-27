void deleteAt(int*& data, int& size, int& capacity, int position) {
    // 1. validate position
    if (/* ??? */) {
        cout << "Invalid position\n";
        return;
    }

    // 2. shift elements left
    for (int i = /* ??? */; i < /* ??? */; i++) {
        data[i] = data[i + 1];
    }

    // 3. update size
    /* ??? */

    // 4. shrink if needed
    if (/* ??? */) {
        resize(data, size, capacity, capacity / 2);
        cout << "Array shrunk to capacity " << capacity << "\n";
    }
}
