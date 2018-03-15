
# ArkavQuarium
## OOP Final Project

 Sebuah tiruan <i> Insaniquarium </i> dibuat dengan menggunakan **C++** , dengan mengimplementasikan:
 - Polymorphism
 - Abstract Base Class
 - Generic Class
 - Operator Overloading

### Class List: 
#### Game 
Class yang mengatur control Game berjalan.
| Fungsi  | Keterangan |
|---------|------------|
|`void updateTurn();`  | Melakukan update turn pada game |
|`void updateFish();` | Melakukan update pada objek-objek **Fish** |
|`void updatePet();` | Melakukan update pada objek-objek **Pet** |
|`void updateItem();` | Melakukan update pada objek-objek **Item** |

#### Aquarium 
Class yang merepresentasikan Aquarium yang berisi objek-objek seperti Guppy, Piranha, Food, dan Coin.
Aquarium juga bertindak sebagai *map* dalam Game.
| Fungsi  | Keterangan |
|--|--|
|` List<Fish> getListOfFish(); `  | Mengembalikan daftar **Fish** dalam bentuk list |
|`List<Coin> getListOfCoin();` | Mengembalikan daftar **Coin** dalam bentuk list |
|`List<Food> getListOfFood();` | Mengembalikan daftar **Food** dalam bentuk list |
|`	List<Pet> getListOfPet();` | Mengembalikan daftar **Pet** dalam bentuk list |
 
####   AquariumEntity
Class yang merepresentasikan entitas-entitas dasar yang ada di dalam Aquarium.
Kelas ini menjadi dasar untuk pembuatan objek Fish dan Item
| Fungsi  | Keterangan |
|---------|------------|
|` virtual void move()=0;`  | Pure virtual function yang melakukan pergerakan objek |
|`double getDistance(const AquariumEntity& WE) const;` | Mengembalikan jarak antara objek lain dengan objek |

#### Fish 
Class yang merepresentasikan objek yang berupa ikan.
Kelas ini menurunkan sifat dari kelas **AquariumEntity**. 
Kelas ini menjadi dasar untuk pembuatan objek Guppy dan Piranha.
| Fungsi  | Keterangan |
|---------|------------|
|`virtual void findNearestFood()=0;`  | Interface untuk mencari makanan terdekat dan mengubah arah direksi dari ikan tersebut  |
|`virtual Coin& produceCoin()=0;` | Interface untuk mengembalikan Coin yang dimasukan ke dalam List Of Coin di Aquarium |
|`virtual void eat()= 0;` | Interface untuk melakukan aksi makan jika dapat dilakukan oleh ikan |
|`virtual void update()=0;` | Interface untuk melakukan update state pada objek ikan |


#### Guppy
Class yang merepresentasikan objek **Guppy**.
Guppy memiliki kemiripan dengan **Piranha**, namun berbeda di proses makan dan menghasilkan **Coin**.
| Fungsi  | Keterangan |
|---------|------------|
|`void findNearestFood();`  | Implementasi fungsi dari kelas **Fish** untuk mencari makanan terdekat dan mengubah arah direksi|
|`Coin& produceCoin();` | Implementasi fungsi yang mengembalikan **Coin** yang dimasukan ke dalam List Of **Coin** di Aquarium |
|`void eat();` | Implementasi fungsi yang melakukan aksi makan |
|`void update();` | Implementasi fungsi untuk melakukan update state |

#### Piranha
Class yang merepresentasikan objek **Piranha**.
Piranha memiliki kemiripan dengan **Guppy**, namun berbeda di proses makan dan menghasilkan **Coin**.
| Fungsi  | Keterangan |
|---------|------------|
|`void findNearestFood();`  | Implementasi fungsi dari kelas Fish untuk mencari makanan terdekat dan mengubah arah direksi|
|`Coin& produceCoin();` | Implementasi fungsi yang mengembalikan Coin yang dimasukan ke dalam List Of Coin di Aquarium |
|`void eat();` | Implementasi fungsi yang melakukan aksi makan |
|`void update();` | Implementasi fungsi untuk melakukan update state |

#### Pet
Class yang merepresentasikan objek-objek yang berupa **Pet**.
Kelas ini menjadi interface dasar untuk object **Snail** dan memungkinkan untuk menambah Pet lainnya.
| Fungsi  | Keterangan |
|---------|------------|
|`virtual void update()=0;`  | Interface untuk melakukan update pada objek Pet|
|`virtual void takeCoin()=0;` | Interface untuk mengambil Coin yang ada di dekat Pet |

#### Snail
Class yang merepresentasikan objek Snail.
Kelas ini mengimplementasi interface **Pet** .
| Fungsi  | Keterangan |
|---------|------------|
|`void update();`  | Implementasi fungsi dari kelas **Snail** untuk melakukan update |
|`virtual void takeCoin()=0;` | Implementasi fungsi dari kelas **Snail** untuk melakukan  pengambilan Coin|

#### Item 
Class yang merepresentasikan objek **Item** yang menjadi dasar kelas **Food** dan **Coin**
Kelas ini menurunkan sifat dari kelas **AquariumEntity**.
| Fungsi  | Keterangan |
|---------|------------|
|`void move();`  | Implementasi fungsi untuk melakukan pergerakan ke dasar aquarium (bergerak ke bawah)|

#### Food 
Class yang merepresentasikan objek makanan ikan (**Food**)
Kelas ini menurunkan sifat dari kelas **Item	**
| Fungsi  | Keterangan |
|---------|------------|
|`	bool isBottom();`  | Memeriksa apakah lokasi makanan ada di dasar akuarium|

#### Coin 
Class yang merepresentasikan objek uang (**Coin**)
Kelas ini menurunkan sifat dari kelas **Item**


