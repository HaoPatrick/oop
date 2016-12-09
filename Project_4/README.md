Personal Dairy
===

### pdadd:

`./pdadd date content1 content2 ...`

Time form: Dec 9th should be `1209`

### pdshow:

`./pdshow date`

### pdlist

`./pdlist start_date end_date`

Please ensure the `start_date` is smaller thant the `end_date`

### pdremove

`./pdremove date`

---


Main Features
===

1. Only compiles using `g++ 4.9` or later and probably before `g++ 6.x`

2. Using `json` to serialize the dairy content thus use the [`json`](https://github.com/nlohmann/json) library

3. Designed primarily conformed to the Unix-like style.

4. Mainly using C++ 11 style.

5. Tried hard to learn exception handling.

6. GitHub Repo: git@github.com:HaoPatrick/oop.git