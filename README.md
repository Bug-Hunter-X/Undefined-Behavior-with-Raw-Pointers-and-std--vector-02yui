# Undefined Behavior with Raw Pointers and std::vector

This repository demonstrates a common, yet subtle, C++ bug involving undefined behavior when using raw pointers with the `std::vector` container.  The `bug.cpp` file shows the erroneous code, and `bugSolution.cpp` offers a corrected version.

**Problem:** When a `std::vector` needs to resize, it may reallocate its internal memory. If you're holding a raw pointer to an element within the vector, this reallocation can invalidate the pointer, leading to unpredictable behavior (crashes, incorrect values, etc.).

**Solution:** Avoid using raw pointers with `std::vector`. Use iterators instead, as they automatically handle reallocations.  Alternatively, consider using `std::vector::data()` which returns a pointer valid until the vector is modified in a way that would alter its size or capacity.