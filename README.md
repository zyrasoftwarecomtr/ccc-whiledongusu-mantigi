# cpp-whiledongusu-mantigi
c++ while döngüsü mantıgı  ( basit )

=> zyrasoftware.com.tr



=> https://www.instagram.com/zyrasoftware/


# DİKKAT

index 1 den başlıyor,

max değerine gelene kadar 7 ile bölümünden 0 kalan yani kalansız bölünen  sayıları ekrana yazdırıyor

örnek;


	int max;
	int index = 1; // 1 2 3 4 5 6 7 8 9....
	cout << "Max değeri gir";
	cin >> max;
	
	while (index <= max) { // index değeri 1 ile başlarken
		if (index % 7 == 0) {
			cout << index << endl;

		}

		index++;
	}


burada index 1 den başlıyor
kullanıcıdan max değeri yani indexin alabileceği max değerin girilmesi isteniyor.


while döngüsüne bir koşul veriliyor;
     index max değerinden küçük eşitse;
        index ile 7 nin bölümünden 0 kalan yani kalansız bölünebilen sayıları Ekrana yazdır.


kullanıcı max değerine; 14 girdi diyelim.


index; 1 2 3 4 5 6 7 8 9 10 11 12 13 14

7nin 7 ile bölümü kalansızdır ekrana yazıldı. Max değer 14 girildiği için 14ten ileri gidemiyor.
ve küçük eşit dediğimiz için 14 te ekrana yazılıyor. ( 14 7 ile bölümü kalansızdır. )
