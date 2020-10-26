            **Praktikum Algoritma Pemrograman** \#Mingggu 2 Modul 3 Tugas 2


1.  Sudah saya kerjakan, sudah paham, dan sudah saya simpan untuk setiap
    modulnya.



2.  Untuk notasi penjumlahan, pengurangan, perkalian, pembagian bulat ke
    bawah(div), dan sisa pembagian(mod) hasilnya sama. Tetapi, untuk
    notasi pembagian hasilnya berbeda. Kenapa ???

Karena di modul program 3.5 tidak ada deklarasi yang menjelaskan output bertipe integer, 
real, atau float. jadi, output yang dihasilkan bertipesesuai hasil dari notasi yang 
diberikan(entah integer, real, atau float). Sedangkan, untuk source code program langkah 
praktikum terdapat deklarasi yang menjelaskan output bertipe apa.

\*\*Untuk program 3.5, nilai 9/4 = 2.25 --\> karena tidak ada deklarasi
sehingga otomatis terprogram dengan tipe float.

\*\*Untuk program langkah praktikum, nilai 9/4 = 2 --\> kenapa 2 ?
karena di deklarasi sudah dijelaskan output bertipe integer bukan float.



3.  Program tersebut akan menghasilkan output yang berbeda karena
    operator penaikkannya diganti dengan penurunan.

Di modul program 3.6 nilai x adalah 7 kemudian diubah menjadi 10 dengan format ++7 dan 10++. 
Setelah itu operator ++ akan diganti dengan -- untuk megetahui perbedaan yang akan terjadi.

Posisi operator ++ menentukan kapan nilai variabel akan ditambah. Apabila ditulis di depan 
makan akan ditambah dulu. sedangkan, apabila ditulis di belakang akan ditambah belakangan. 
Begitu pula sebaliknya jika diganti dengan operator --.

nilai x = 7 nilai x = 10 
nilai ++x = 8 nilai ++x = 10 //Perbedaan terjadi di sini 
nilai akhir x = 8 nilai akhir x = 11

Jadi, yang terjadi pada program tersebut adalah perbedaan di nilai akhir. Karena pada awalnya 
program menggunakan operator penaikkan(7 menjadi 8 dan 10 menjadi 11) kemudian diganti menjadi
operator penurunan(7 menjadi 6 dan 10 menjadi 9).
