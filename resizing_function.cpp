#include <iostream>

//Resizing the dynamic array to the new capacity.
void resize(int*& store, int& size, int& capacity, int newCapacity, int& resize_Count) {
    //Ensures that the minimum capacity of the array is 4.
    if (newCapacity < 4) {
        newCapacity = 4;
    }

    // Ensures that no newCapacity is allocated if it is equal to the initial capacity. 
    if (newCapacity == capacity) {
        return;
    }

    // Ensures that the size is protected if the new capacity is smaller tham it.
    if (size > newCapacity) {
        size = newCapacity;
    }

    // Allocating a new block of heap memory.
    int* new_store = new int[newCapacity];

    // Copying existing elements into the new array.
    for (int i = 0; i < size; ++i) {
        new_store[i] = store[i];
    }

    int old_Capacity = capacity;

    // Free old memory and swap in the new array.
    delete[] store;
    store = new_store;
    capacity = newCapacity;
    ++resize_Count;

    // Displays the growth and shrinkage of the array.
    if (capacity > old_Capacity) {
        std::cout << "[Resize] Array increased from capacity " << old_Capacity
                  << " to " << capacity << ".\n";
    } else if (capacity < old_Capacity) {
        std::cout << "[Resize] Array decreased from capacity " << old_Capacity
                  << " to " << capacity << ".\n";
    }
}

// Halving the capacity if it is one-quarter full or less. 
void halving(int*& store, int& size, int& capacity, int& resize_Count) {
    if (capacity > 4 && size <= capacity / 4) {
        int halved_Capacity = capacity / 2;
        if (halved_Capacity < 4) {
            halved_Capacity = 4;
        }
        resize(store, size, capacity, halved_Capacity, resize_Count);
    }
}
