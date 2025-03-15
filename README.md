#  Acil Servis Hasta Kayıt ve Takip Sistemi  

Bu proje, **hastane acil servislerinde hasta kabul ve takip işlemlerini** düzenlemek için geliştirilmiş bir **C programıdır**.  
Hasta bilgileri alınarak, her hastaya **otomatik bir sıra numarası** ve **rastgele bir reçete numarası** verilir.  
Acil durum değerlendirmesi yapılır ve hastalar **öncelik sırasına göre yönlendirilir**.  

## Özellikler  
- **Hasta Bilgileri Kaydı**: Hastanın adı, soyadı, yaşı, şikayeti gibi bilgiler alınır.  
- **Sıra Numarası Atama**: Gelen her hasta için otomatik sıra numarası oluşturulur.  
- **Aciliyet Durumu Belirleme**: Hastanın durumu değerlendirilerek öncelik sırası belirlenir.  
- **Rastgele Reçete Numarası Üretme**: 5 haneli rastgele reçete numarası atanır.  
- **Döngüsel İşleyiş**: Yeni hasta geldiğinde sistem baştan çalışarak tekrar kayıt alır.  

## Gereksinimler  
Projeyi çalıştırmak için aşağıdaki bileşenlere ihtiyacınız var:  
- **C programlama dili** destekleyen bir IDE (CodeBlocks, Dev-C++, VS Code vb.)  
- **GCC derleyicisi** veya eşdeğer bir C derleyicisi  

## Kurulum ve Çalıştırma  
Aşağıdaki adımları takip ederek projeyi çalıştırabilirsiniz:  

1. **Projeyi Klonla:**  
   ```sh
   git clone https://github.com/kullaniciadi/acil-servis-kayit.git
   cd acil-servis-kayit

   gcc main.c -o acil_servis
./acil_servis

