#﻿### Theatre Square CF:



---

### ✅ **Purpose of the Code**

The code calculates **how many square tiles of size `z × z` are needed to cover a rectangle of size `n × m`** completely.

---

### 🧮 **Understanding the Variables**

```cpp
long long n, m, z, a, b;
```

* `n`: Width of the rectangle.
* `m`: Height of the rectangle.
* `z`: Side length of each square tile.
* `a`: Number of tiles needed along the width.
* `b`: Number of tiles needed along the height.

We use `long long` to handle very large values (up to 10¹⁸).

---

### 🔢 **Input**

```cpp
cin >> n >> m >> z;
```

This reads three integers from the user:

* Rectangle dimensions: `n`, `m`
* Tile size: `z`

---

### 📐 **Logic**

#### **1. Calculate how many tiles fit along the width (`n`):**

```cpp
if (n % z == 0) {
    a = n / z;
} else {
    a = (n / z) + 1;
}
```

* If `n` is divisible by `z` exactly → no partial tile → use `n/z` tiles.
* If not divisible → we need one extra tile to cover the remaining part → `(n/z) + 1`.

Same logic for the height `m`:

```cpp
if (m % z == 0) {
    b = m / z;
} else {
    b = (m / z) + 1;
}
```

---

### 🔲 **Final Step: Total Tiles**

```cpp
cout << a * b << endl;
```

* Multiply the number of tiles along the width (`a`) by the number of tiles along the height (`b`) to get the **total number of square tiles** needed.

---

### 🧠 Example

Let's say:

* `n = 6`, `m = 6`, `z = 4`

Then:

* `a = (6 / 4) + 1 = 2`
* `b = (6 / 4) + 1 = 2`
* Total tiles = `2 * 2 = 4`

---

### ✅ Summary

This code:

* Calculates how many tiles are needed in each direction.
* Accounts for partial tiles by rounding up.
* Outputs the **minimum number of tiles** needed to fully cover the rectangle.

