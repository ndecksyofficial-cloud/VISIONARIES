
// Inserting function
void insert(int value){
    //  Check if the array is full; if so, double the capacity
    if (size == capacity){
        resize(capacity *2);
    }
    //Append the new element at the end and increment size
    arr[size] = value;
    size++;

    cout << "Inserted: " << value 
  // Display  updated elements, size, and capacity
    display();
}
    